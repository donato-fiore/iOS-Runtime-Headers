// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATISTICS_H
#define _UISTATISTICS_H

@class NSString, NSMutableSet;

#import <Foundation/Foundation.h>


@interface _UIStatistics : NSObject {
    NSString *_key;
    CGFloat _sampleValue;
    NSMutableSet *_children;
}


@property (nonatomic) CGFloat sampleRate; // ivar: _sampleRate


+(NSUInteger)currentTime;
+(id)_sharedStatisticWithDomain:(id)arg0 statisticsClass:(Class)arg1 identifierReporting:(NSInteger)arg2 ;
+(id)alertButtonTapCount;
+(id)controlInteractionDurationDistributionWithCategory:(id)arg0 suffix:(id)arg1 ;
+(id)controlTapCountWithCategory:(id)arg0 suffix:(id)arg1 ;
+(id)controlValueChangeEmittedCountWithCategory:(id)arg0 suffix:(id)arg1 ;
+(id)coverSheetButtonFirstActivationDurationWithCategory:(id)arg0 ;
+(id)coverSheetButtonInteractionCountWithActivation:(BOOL)arg0 category:(id)arg1 ;
+(id)coverSheetButtonInteractionDurationWithCategory:(id)arg0 ;
+(id)coverSheetButtonMaximumForceWithActivation:(BOOL)arg0 category:(id)arg1 ;
+(id)feedbackEngineActivationCountWithSuffix:(id)arg0 ;
+(id)feedbackEngineActivationDurationWithSuffix:(id)arg0 ;
+(id)feedbackEngineOutOfChannelsCountWithSuffix:(id)arg0 ;
+(id)feedbackEnginePrewarmCountWithSuffix:(id)arg0 ;
+(id)feedbackEnginePrewarmDurationWithSuffix:(id)arg0 ;
+(id)feedbackGeneratorActivationCountWithSuffix:(id)arg0 ;
+(id)feedbackGeneratorActivationDurationWithSuffix:(id)arg0 ;
+(id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)arg0 ;
+(id)feedbackGeneratorPlayCountWithSuffix:(id)arg0 ;
+(id)feedbackGeneratorPreparationCountWithSuffix:(id)arg0 ;
+(id)maxForce;
+(id)pinchGestureCount;
+(id)previewInteractionAlertPresentationCount;
+(id)previewInteractionPeekCount;
+(id)previewInteractionPeekDuration;
+(id)previewInteractionPeekForce;
+(id)previewInteractionPopCount;
+(id)previewInteractionPopForce;
+(id)previewInteractionTapCount;
+(id)recentsInputViewItemSelectedCount;
+(id)recentsInputViewNewEntryCount;
+(id)recentsInputViewNumberOfItems;
+(id)recentsInputViewPresentationCount;
+(id)scrollBounceCount;
+(id)scrubberUsageCount;
+(id)scrubberUsageTime;
+(id)zoomGestureCount;
-(BOOL)_shouldSample;
-(id)_key;
-(id)description;
-(id)init;
-(id)initWithDomain:(id)arg0 ;
-(id)initWithDomain:(id)arg0 identifierReporting:(NSInteger)arg1 ;
-(void)_addChildStatistic:(id)arg0 ;
-(void)_incrementValueBy:(NSInteger)arg0 ;
-(void)_recordDistributionTime:(NSUInteger)arg0 ;
-(void)_recordDistributionValue:(CGFloat)arg0 ;
-(void)_removeChildStatistic:(id)arg0 ;
-(void)_resetDistribution;
-(void)_resetDistributionToValue:(CGFloat)arg0 ;
-(void)_resetValue;
-(void)_setValue:(NSInteger)arg0 ;
-(void)randomizeSampleValue;


@end


#endif