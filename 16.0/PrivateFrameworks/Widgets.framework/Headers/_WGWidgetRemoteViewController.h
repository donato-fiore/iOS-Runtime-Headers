// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WGWIDGETREMOTEVIEWCONTROLLER_H
#define _WGWIDGETREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol _NCWidgetViewController_Host_IPC, OS_dispatch_queue;


#import "WGWidgetHostingViewController.h"

@interface _WGWidgetRemoteViewController : UIRemoteViewController <_NCWidgetViewController_Host_IPC>



@property (weak, nonatomic) WGWidgetHostingViewController *managingHost; // ivar: _managingHost
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *managingHostQueue; // ivar: _managingHostQueue
@property (nonatomic, getter=_isValid, setter=_setValid:) BOOL valid; // ivar: _valid


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(BOOL)_canShowWhileLocked;
-(BOOL)_serviceHasScrollToTopView;
-(id)disconnect;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)__closeTransactionForAppearanceCallWithState:(int)arg0 withIdentifier:(id)arg1 ;
-(void)__requestPreferredViewHeight:(CGFloat)arg0 ;
-(void)__setLargestAvailableDisplayMode:(NSInteger)arg0 ;
-(void)__viewServiceDidRegisterScrollToTopView;
-(void)__viewServiceDidUnregisterScrollToTopView;
-(void)_openTransactionForAppearanceCallWithState:(int)arg0 withIdentifier:(id)arg1 ;
-(void)_performUpdateWithReplyHandler:(id)arg0 ;
-(void)_requestEncodedLayerTreeAtURL:(id)arg0 withReplyHandler:(id)arg1 ;
-(void)_setActiveDisplayMode:(NSInteger)arg0 ;
-(void)_setMaximumSize:(struct CGSize )arg0 forDisplayMode:(NSInteger)arg1 ;
-(void)_updateLayoutMargins:(struct UIEdgeInsets )arg0 ;
-(void)_updateVisibilityState:(NSInteger)arg0 ;
-(void)_updateVisibleFrame:(struct CGRect )arg0 withReplyHandler:(id)arg1 ;
-(void)dealloc;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif