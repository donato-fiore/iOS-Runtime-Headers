// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXBIOMEPRIVACYPRUNER_H
#define ATXBIOMEPRIVACYPRUNER_H


#import <Foundation/Foundation.h>


@interface ATXBiomePrivacyPruner : NSObject



-(void)pruneActivitySuggestionFeedbackStreamWithActivity:(id)arg0 ;
-(void)pruneAllStreamsWithActivity:(id)arg0 ;
-(void)pruneAppLaunchInferredModeStreamWithActivity:(id)arg0 ;
-(void)pruneBlendingStreamsWithActivity:(id)arg0 ;
-(void)pruneDigestOnboardingAppSelectionLoggingStreamWithActivity:(id)arg0 ;
-(void)pruneDigestOnboardingLoggingStreamWithActivity:(id)arg0 ;
-(void)pruneDigestOnboardingSuggestionLoggingStreamWithActivity:(id)arg0 ;
-(void)pruneERMStreamWithActivity:(id)arg0 ;
-(void)pruneFaceGalleryStreamWithActivity:(id)arg0 ;
-(void)pruneLightweightClientModelCacheUpdatesStreamWithActivity:(id)arg0 ;
-(void)pruneLocationStreamWithActivity:(id)arg0 ;
-(void)pruneMissedNotificationRankingStreamWithActivity:(id)arg0 ;
-(void)pruneModeConfigurationUIFlowLoggingStreamWithActivity:(id)arg0 ;
-(void)pruneNotificationDigestStreamWithActivity:(id)arg0 ;
-(void)pruneNotificationEventStreamWithActivity:(id)arg0 ;
-(void)pruneNotificationGroupEventStreamWithActivity:(id)arg0 ;
-(void)pruneNotificationSuggestionInteractionStreamWithActivity:(id)arg0 ;
-(void)pruneNotificationSuggestionStreamWithActivity:(id)arg0 ;
-(void)prunePredictionContextStreamWithActivity:(id)arg0 ;
-(void)prunePrivateStreamWithStreamIdentifier:(id)arg0 activity:(id)arg1 ;
-(void)pruneProactiveSuggestionUIFeedbackResultStreamWithActivity:(id)arg0 ;
-(void)pruneWithStreamIdentifier:(id)arg0 activity:(id)arg1 config:(id)arg2 endTime:(CGFloat)arg3 ;


@end


#endif