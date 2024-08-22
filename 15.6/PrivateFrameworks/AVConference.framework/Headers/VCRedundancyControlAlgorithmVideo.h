// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCREDUNDANCYCONTROLALGORITHMVIDEO_H
#define VCREDUNDANCYCONTROLALGORITHMVIDEO_H

@class NSString;
@protocol VCRedundancyControlAlgorithm;

#import <Foundation/Foundation.h>


@interface VCRedundancyControlAlgorithmVideo : NSObject <VCRedundancyControlAlgorithm>

 {
    CGFloat _packetLossPercentage;
    CGFloat _packetLossPercentageVideo;
    CGFloat _plrEnvelope;
    BOOL _isNetworkCongested;
    unsigned int _maxAllowedRedundancyPercentage;
    unsigned int _burstyLoss;
    unsigned int _burstyLossArraySize;
    unsigned int _burstyLossArrayIndex;
    unsigned int _redundancyMode;
    unsigned char _mediaControlInfoFECFeedbackVersion;
    uint8_t _isRedundancyStrategyResetPending;
    *OpaqueVCFECFeedbackAnalyzer _feedbackAnalyzer;
    float _offChannelTimeRatio;
    BOOL _isNWConnectionEnabled;
    int _freezeReason;
    int _state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRedundancyStrategyResetPending;
@property (readonly, nonatomic) CGFloat redundancyInterval; // ivar: _redundancyInterval
@property (readonly, nonatomic) unsigned int redundancyPercentage; // ivar: _redundancyPercentage
@property (readonly) Class superclass;


-(id)initWithRedundancyControllerMode:(unsigned int)arg0 maxAllowedRedundancyPercentage:(unsigned int)arg1 mediaControlInfoFECFeedbackVersion:(unsigned char)arg2 ;
-(struct ? )getFecLevelPerFrameSizeVector;
-(struct ? )setupFeedbackAnalyzerConfig;
-(unsigned int)computeRedundancyWithBurstyLoss;
-(unsigned int)computeRedundancyWithLossPercentage;
-(void)checkForRedundancyFreeze:(struct ? )arg0 ;
-(void)dealloc;
-(void)processNWConnectionStatistics:(struct ? )arg0 ;
-(void)processRCNetworkStatistics:(struct ? )arg0 ;
-(void)reset;
-(void)stateFrozen:(struct ? )arg0 ;
-(void)stateRunning:(struct ? )arg0 ;
-(void)updateBurstyLoss:(unsigned int)arg0 ;
-(void)updateRedundancyStrategyWithNetworkStatistics:(struct ? )arg0 ;


@end


#endif