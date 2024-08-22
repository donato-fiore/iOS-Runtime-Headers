// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWUBADAPTIVEBRACKETINGPARAMETERS_H
#define BWUBADAPTIVEBRACKETINGPARAMETERS_H

@class UBProgressiveBracketingParameters, NSArray, UBProgressiveBracketingStatistics, NSString;
@protocol BWNoiseReductionAndFusionProcessorBracketingParameters;

#import <Foundation/Foundation.h>


@interface BWUBAdaptiveBracketingParameters : NSObject <BWNoiseReductionAndFusionProcessorBracketingParameters>

 {
    UBProgressiveBracketingParameters *_progressiveBracketingParameters;
    os_unfair_lock_s _adaptiveBracketingFrameParametersLock;
    NSArray *_adaptiveBracketingFrameParameters;
    BOOL _stopAdaptiveBracketing;
    Class _progressiveBracketingStatisticsClass;
    UBProgressiveBracketingStatistics *_lastProgressiveBracketingStatisticsForTotalIntegrationTimesProvider;
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
-(id)initWithProgressiveBracketingParameters:(id)arg0 progressiveBracketingStatisticsClass:(Class)arg1 ;
-(id)progressiveBracketingParameters;
-(void)dealloc;
-(void)stopAdaptiveBracketing;
-(void)updateAdaptiveBracketingFrameParametersUsingGroup:(int)arg0 ;


@end


#endif