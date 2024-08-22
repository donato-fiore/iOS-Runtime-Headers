// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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


-(id)init;
-(void)dealloc;
-(void)enableBWELogDump:(*void)arg0 ;
-(void)updateQualificationParameters;


@end


#endif