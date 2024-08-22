// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCRATECONTROLBANDWIDTHESTIMATOR_H
#define VCRATECONTROLBANDWIDTHESTIMATOR_H


#import <Foundation/Foundation.h>

#import "SuddenChangeParameters.h"
#import "VCRateControlServerBag.h"

@interface VCRateControlBandwidthEstimator : NSObject {
    unsigned int _totalBytesInProbingSequence;
    unsigned int _totalPacketsInProbingSequence;
    CGFloat _lastPacketInProbingSequenceArrivalTime;
    CGFloat _earlyProbingPacketArrivalTime;
    unsigned int _earlyBytesInProbingSequence;
    unsigned int _earlyPacketsInProbingSequence;
    unsigned int _referencePacketDataSize;
    BOOL _isInitialized;
    BOOL _isFirstBWEstimationReleased;
    unsigned int _lastProbingSequenceTimestamp;
    unsigned int _lastProbingSequenceReferenceTimestamp;
    CGFloat _firstDivergeTime;
    int _bandwidthDivergeCount;
    int _suddenChangeBandwidthBufferIndex;
    CGFloat _suddenChangeBandwidthBuffer;
    unsigned int _overRangePacketsCount;
    CGFloat _totalBandwidth;
    SuddenChangeParameters *_suddenChangeParameters;
    unsigned int _minPacketsCount;
    CGFloat _minEstimationWindowDuration;
    CGFloat _maxDetectableBandwidth;
    unsigned int _maxOverRangePacketsCount;
    unsigned int _minProbingSequenceSize;
    *void _logBWEDump;
}


@property (readonly, nonatomic) int bandwidthEstimationState; // ivar: _bandwidthEstimationState
@property (nonatomic) CGFloat estimatedBandwidth; // ivar: _estimatedBandwidth
@property (nonatomic) CGFloat estimatedBandwidthUncapped; // ivar: _estimatedBandwidthUncapped
@property (nonatomic) BOOL fastSuddenBandwidthDetectionEnabled; // ivar: _fastSuddenBandwidthDetectionEnabled
@property (readonly, nonatomic) CGFloat lastProbingArrivalTime; // ivar: _referencePacketArrivalTime
@property (nonatomic) unsigned int mode; // ivar: _mode
@property (nonatomic) unsigned int radioAccessTechnology; // ivar: _radioAccessTechnology
@property (retain, nonatomic) VCRateControlServerBag *serverBag; // ivar: _serverBag


-(BOOL)isPacketProcessedLateWithArrivalTime:(CGFloat)arg0 ;
-(BOOL)isSuddenChangeDurationMetAtArrivalTime:(CGFloat)arg0 ;
-(CGFloat)resetBandwidthWithParameters:(CGFloat)arg0 probingSequenceDuration:(CGFloat)arg1 probingSequenceSize:(unsigned int)arg2 packetsInProbingSequence:(unsigned int)arg3 ;
-(CGFloat)updateBandwidthEstimation:(CGFloat)arg0 arrivalTime:(CGFloat)arg1 ;
-(id)init;
-(void)calculateBandwidthEstimationAtTime:(CGFloat)arg0 mediaTimestamp:(unsigned int)arg1 mediaDataSize:(unsigned int)arg2 probingSequence:(BOOL)arg3 probingSequenceID:(unsigned int)arg4 ;
-(void)calculateBandwidthEstimationForBandwidthSample:(CGFloat)arg0 arrivalTime:(CGFloat)arg1 ;
-(void)compensateSuddenChangeBandwidths;
-(void)dealloc;
-(void)detectSuddenChangeWithBandwidth:(CGFloat)arg0 suddenChangeAbove:(*BOOL)arg1 suddenChangeBelow:(*BOOL)arg2 ;
-(void)enableBWELogDump:(*void)arg0 ;
-(void)initializeBandwidthEstimationAtTime:(CGFloat)arg0 mediaTimestamp:(unsigned int)arg1 probingSequence:(BOOL)arg2 probingSequenceID:(unsigned int)arg3 ;
-(void)recordSuddenChangeBandwidth:(CGFloat)arg0 ;
-(void)updateBandwidthDivergeCountAtArrivalTime:(CGFloat)arg0 suddenChangeAbove:(BOOL)arg1 suddenChangeBelow:(BOOL)arg2 ;
-(void)updateInitialBandwidthEstimationForCellularAtTime:(CGFloat)arg0 bandwidth:(CGFloat)arg1 ;
-(void)updateQualificationParameters;


@end


#endif