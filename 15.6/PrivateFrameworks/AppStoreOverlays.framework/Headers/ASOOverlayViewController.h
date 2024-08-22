// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASOOVERLAYVIEWCONTROLLER_H
#define ASOOVERLAYVIEWCONTROLLER_H

@class UIApplicationRotationFollowingController, NSString, NSOperationQueue;
@protocol ASORemoteViewControllerDelegate, ASORemoteContextProvider, OS_dispatch_queue;


#import "ASOHostContext.h"
#import "ASORemoteOverlay.h"
#import "ASOOverlayManager.h"
#import "ASORemoteViewController.h"

@interface ASOOverlayViewController : UIApplicationRotationFollowingController <ASORemoteViewControllerDelegate, ASORemoteContextProvider>



@property (weak, nonatomic) ASOHostContext *context; // ivar: _context
@property (retain, nonatomic) ASORemoteOverlay *currentOverlay; // ivar: _currentOverlay
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isViewServiceLoading; // ivar: _isViewServiceLoading
@property (weak, nonatomic) ASOOverlayManager *overlayManager; // ivar: _overlayManager
@property (retain, nonatomic) NSOperationQueue *presentationQueue; // ivar: _presentationQueue
@property (retain, nonatomic) ASORemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *viewServiceQueue; // ivar: _viewServiceQueue


-(id)hostContextForOverlayViewService;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_loadRemoteViewController:(id)arg0 ;
-(void)_loadViewServiceIfNeeded:(id)arg0 ;
-(void)didEnterBackground;
-(void)didFinishDismissingOverlay:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)dismissOverlay;
-(void)failAllQueuedOverlaysWithError:(id)arg0 ;
-(void)loadViewServiceIfNeeded;
-(void)presentOverlay:(id)arg0 ;
-(void)shutdownViewServiceIfOverlayOffScreen;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)willStartPresentingOverlay:(id)arg0 ;


@end


#endif