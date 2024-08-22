// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15CONVERSATIONKIT43CONVERSATIONCONTROLSSHARECARDVIEWCONTROLLER_H
#define _TTC15CONVERSATIONKIT43CONVERSATIONCONTROLSSHARECARDVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC15ConversationKit43ConversationControlsShareCardViewController : UIViewController {
    ? delegate;
    ? conversationControlsManager;
    ? foregroundAppCancellable;
    ? $__lazy_storage_$_backgroundMaterialView;
    ? $__lazy_storage_$_topStatusView;
    ? $__lazy_storage_$_closeButton;
    ? $__lazy_storage_$_scrollView;
    ? $__lazy_storage_$_screenShareButton;
    ? $__lazy_storage_$_collaborateButton;
    ? $__lazy_storage_$_collaborateSubtitleLabel;
    ? $__lazy_storage_$_sharePlayDiscoverabilityView;
    ? $__lazy_storage_$_gelatoDiscoverabilityView;
}


@property (nonatomic) NSInteger modalPresentationStyle;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didTapCloseButton;
-(void)didTapCollaborateButton;
-(void)didTapScreenShareButton;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif