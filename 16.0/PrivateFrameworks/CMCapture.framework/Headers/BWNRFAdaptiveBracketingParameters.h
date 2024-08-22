// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWNRFADAPTIVEBRACKETINGPARAMETERS_H
#define BWNRFADAPTIVEBRACKETINGPARAMETERS_H

@class NRFProgressiveBracketingParameters, NRFProgressiveBracketingStatistics, NSString;
@protocol BWNoiseReductionAndFusionProcessorBracketingParameters;

#import <Foundation/Foundation.h>


@interface BWNRFAdaptiveBracketingParameters : NSObject <BWNoiseReductionAndFusionProcessorBracketingParameters>

 {
    NRFProgressiveBracketingParameters *_progressiveBracketingParameters;
    os_unfair_lock_s _adaptiveBracketingFrameParametersLock;
    BOOL _stopAdaptiveBracketing;
    Class _progressiveBracketingStatisticsClass;
    NRFProgressiveBracketingStatistics *_lastProgressiveBracketingStatisticsForTotalIntegrationTimesProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)generateWhiteBalanceParameters;
-(BOOL)stationary;
-(CGFloat)totalIntegrationTime;
-(CGFloat)totalIntegrationTimeForDigitalFlashMode:(int)arg0 frameStatistics:(id)arg1 stationary:(BOOL)arg2 detectedObjects:(id)arg3 ;
-(float)evZeroTargetGain;
-(float)previewSNR;
-(id)adaptiveBracketingFrameParametersForGroup:(int)arg0 ;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg0 ;
-(void)dealloc;


@end


#endif