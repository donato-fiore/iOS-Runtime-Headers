// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUINTERNALAUTOLOOPFEEDBACKACTIVITY_H
#define PUINTERNALAUTOLOOPFEEDBACKACTIVITY_H

@class PXActivity, NSString;
@protocol PXFeedbackAssetUIViewControllerDelegate;



@interface PUInternalAutoLoopFeedbackActivity : PXActivity <PXFeedbackAssetUIViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)asset;
-(void)feedbackAssetUIViewController:(id)arg0 didFinish:(BOOL)arg1 ;


@end


#endif