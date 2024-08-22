// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15CONVERSATIONKIT30INCALLBANNERHOSTVIEWCONTROLLER_H
#define _TTC15CONVERSATIONKIT30INCALLBANNERHOSTVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC15ConversationKit30InCallBannerHostViewController : UIViewController {
    ? inCallBannerDelegate;
    ? controlsManager;
    ? controlsType;
    ? notice;
    ? captureGroupName;
    ? $__lazy_storage_$_captureOnlyBackdropView;
    ? shadowView;
    ? conversationControlsViewController;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif