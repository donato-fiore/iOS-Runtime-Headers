// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONDIGESTHISTOGRAMFEEDBACKTRACKER_H
#define ATXNOTIFICATIONDIGESTHISTOGRAMFEEDBACKTRACKER_H

@class NSString;
@protocol ATXNotificationDigestFeedbackProtocol;

#import <Foundation/Foundation.h>

#import "_ATXAppLaunchCategoricalHistogram.h"

@interface ATXNotificationDigestHistogramFeedbackTracker : NSObject <ATXNotificationDigestFeedbackProtocol>



@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *alltimeMarqueeAppearanceHistogram; // ivar: _alltimeMarqueeAppearanceHistogram
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *digestFeedbackHistogram; // ivar: _digestFeedbackHistogram
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)alltimeMarqueeAppearancesForBundleId:(id)arg0 ;
-(CGFloat)basicNotificationsSentForBundleId:(id)arg0 ;
-(CGFloat)marqueeAppearancesForBundleId:(id)arg0 ;
-(CGFloat)marqueeEngagementsForBundleId:(id)arg0 ;
-(CGFloat)nonMarqueeAppearancesForBundleId:(id)arg0 ;
-(CGFloat)nonMarqueeEngagementsForBundleId:(id)arg0 ;
-(CGFloat)timeSensitiveNotificationsSentForBundleId:(id)arg0 ;
-(id)feedbackDictionaryForBundleId:(id)arg0 ;
-(id)init;
-(id)initWithDigestFeedbackHistogram:(id)arg0 alltimeMarqueeAppearanceHistogram:(id)arg1 ;
-(void)decayFeedbackByFactor:(CGFloat)arg0 ;
-(void)logBasicNotificationsSentForBundleId:(id)arg0 numNotifications:(NSUInteger)arg1 ;
-(void)logMarqueeAppearanceForBundleId:(id)arg0 ;
-(void)logMarqueeEngagementForBundleId:(id)arg0 ;
-(void)logNonMarqueeAppearanceForBundleId:(id)arg0 ;
-(void)logNonMarqueeEngagementForBundleId:(id)arg0 ;
-(void)logTimeSensitiveNotificationsSentForBundleId:(id)arg0 numNotifications:(NSUInteger)arg1 ;


@end


#endif