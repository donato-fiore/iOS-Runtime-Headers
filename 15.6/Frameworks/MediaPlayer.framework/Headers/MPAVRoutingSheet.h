// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPAVROUTINGSHEET_H
#define MPAVROUTINGSHEET_H

@class UIView, UIWindow, UIButton, NSString;
@protocol MPAVRoutingViewControllerDelegate;


#import "MPAVRoutingViewController.h"

@interface MPAVRoutingSheet : UIView <MPAVRoutingViewControllerDelegate>

 {
    UIWindow *_presentationWindow;
    UIView *_backgroundView;
    UIButton *_dismissBackgroundButton;
    UIButton *_dismissControlsViewButton;
    UIView *_controlsView;
    UIButton *_cancelButton;
    MPAVRoutingViewController *_routingViewController;
    id *_completionHandler;
}


@property (nonatomic, setter=setAVItemType:) NSInteger avItemType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL mirroringOnly; // ivar: _mirroringOnly
@property (readonly) Class superclass;


-(id)initWithAVItemType:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_cancelButtonFrame;
-(struct CGRect )_controlsViewFrame;
-(struct CGRect )_routingViewFrame;
-(struct CGSize )_maxRoutingViewSize;
-(void)_animateControls:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)_cancelButtonAction:(id)arg0 ;
-(void)_updateDismissButtonText;
-(void)_updateRoutingSheetFrame;
-(void)dealloc;
-(void)dismiss;
-(void)layoutSubviews;
-(void)routingViewController:(id)arg0 didPickRoute:(id)arg1 ;
-(void)routingViewControllerDidShowAirPlayDebugScreen:(id)arg0 ;
-(void)routingViewControllerDidUpdateContents:(id)arg0 ;
-(void)showInView:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)tintColorDidChange;


@end


#endif