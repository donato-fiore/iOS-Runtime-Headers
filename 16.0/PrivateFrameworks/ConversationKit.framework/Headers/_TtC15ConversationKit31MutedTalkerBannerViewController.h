// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKIT31MUTEDTALKERBANNERVIEWCONTROLLER_H
#define _TTC15CONVERSATIONKIT31MUTEDTALKERBANNERVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC15ConversationKit31MutedTalkerBannerViewController : UIViewController {
    ? currentRequestID;
    ? pillView;
    ? pillImageView;
    ? pillViewSubtitle;
    ? pillViewTitle;
    ? bannerSource;
    ? isMuted;
    ? isBannerPresent;
    ? delegate;
}




-(BOOL)_canShowWhileLocked;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)handleTap:(id)arg0 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif