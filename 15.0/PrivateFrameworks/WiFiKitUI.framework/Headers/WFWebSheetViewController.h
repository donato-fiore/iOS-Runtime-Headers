// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWEBSHEETVIEWCONTROLLER_H
#define WFWEBSHEETVIEWCONTROLLER_H

@class UIViewController, _UIAsyncInvocation;
@protocol WFRemoteWebSheetViewControllerDelegate, WFNetworkView, WFWebSheetViewControllerDelegate;


#import "WFRemoteWebSheetViewController.h"

@interface WFWebSheetViewController : UIViewController <WFRemoteWebSheetViewControllerDelegate, WFNetworkView>



@property (retain, nonatomic) _UIAsyncInvocation *cancelServiceInvocation; // ivar: _cancelServiceInvocation
@property (weak, nonatomic) NSObject<WFWebSheetViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) WFRemoteWebSheetViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly, nonatomic) BOOL wantsModalPresentation;


-(id)initWithDelegate:(id)arg0 ;
-(void)_finishSetupWithError:(id)arg0 ;
-(void)_requestRemoteViewController;
-(void)_showRemoteViewController;
-(void)dealloc;
-(void)remoteWebSheetViewController:(id)arg0 handleEvent:(NSUInteger)arg1 context:(id)arg2 ;
-(void)webSheetViewControllerServiceShouldTerminate;


@end


#endif