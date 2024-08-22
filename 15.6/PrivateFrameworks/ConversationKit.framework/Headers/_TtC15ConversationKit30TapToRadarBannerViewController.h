// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15CONVERSATIONKIT30TAPTORADARBANNERVIEWCONTROLLER_H
#define _TTC15CONVERSATIONKIT30TAPTORADARBANNERVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC15ConversationKit30TapToRadarBannerViewController : UIViewController {
    ? requestID;
    ? pillView;
    ? pillLeadingImageView;
    ? pillTrailingImageView;
    ? pillViewSubtitle;
    ? pillViewTitle;
    ? bannerSource;
    ? isBannerPresent;
    ? groupUUIDString;
    ? addressList;
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