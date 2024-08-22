// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKREMOTEENGAGEMENTPRESENTATIONWINDOW_H
#define SKREMOTEENGAGEMENTPRESENTATIONWINDOW_H

@class UIApplicationRotationFollowingWindow;



@interface SKRemoteEngagementPresentationWindow : UIApplicationRotationFollowingWindow



-(BOOL)isInternalWindow;
-(id)_presentationViewController;
-(id)init;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif