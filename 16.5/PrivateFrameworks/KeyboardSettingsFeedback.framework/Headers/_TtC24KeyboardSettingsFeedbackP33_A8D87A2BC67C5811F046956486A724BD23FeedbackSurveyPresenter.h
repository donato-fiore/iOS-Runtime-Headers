// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC24KEYBOARDSETTINGSFEEDBACKP33_A8D87A2BC67C5811F046956486A724BD23FEEDBACKSURVEYPRESENTER_H
#define _TTC24KEYBOARDSETTINGSFEEDBACKP33_A8D87A2BC67C5811F046956486A724BD23FEEDBACKSURVEYPRESENTER_H

@class SwiftObject;
@protocol _TtP8Feedback38FBKFeedbackDraftViewControllerDelegate_;



@interface _TtC24KeyboardSettingsFeedbackP33_A8D87A2BC67C5811F046956486A724BD23FeedbackSurveyPresenter : SwiftObject <_TtP8Feedback38FBKFeedbackDraftViewControllerDelegate_>

 {
    ? feedbackController;
    ? completion;
    ? durationBucketingThresholds;
}




-(void)feedbackDraftViewController:(id)arg0 didCompleteWithFeedbackID:(id)arg1 ;
-(void)feedbackDraftViewController:(id)arg0 didFailToAttachURL:(id)arg1 error:(NSInteger)arg2 ;
-(void)feedbackDraftViewController:(id)arg0 didFailToStartWithError:(NSInteger)arg1 ;
-(void)feedbackDraftViewController:(id)arg0 didFailToSubmitFeedback:(id)arg1 ;
-(void)feedbackDraftViewControllerDidCancel:(id)arg0 ;


@end


#endif