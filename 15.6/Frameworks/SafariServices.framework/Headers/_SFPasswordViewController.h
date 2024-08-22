// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPASSWORDVIEWCONTROLLER_H
#define _SFPASSWORDVIEWCONTROLLER_H

@class UIViewController, _UIAsyncInvocation, NSString;
@protocol SFPasswordRemoteViewControllerDelegate, SFQueueingServiceViewControllerProxyDelegate, _SFPasswordViewControllerDelegate;



@interface _SFPasswordViewController : UIViewController <SFPasswordRemoteViewControllerDelegate, SFQueueingServiceViewControllerProxyDelegate>

 {
    _UIAsyncInvocation *_cancelViewServiceRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFPasswordViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_connectToServiceWithCompletion:(id)arg0 ;
-(id)_remoteViewController;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)init;
-(void)_addRemoteView;
-(void)_addRemoteViewAsChild;
-(void)_connectToService;
-(void)_dismissPasswordViewController;
-(void)_setUpServiceProxyIfNeeded;
-(void)remoteViewController:(id)arg0 viewServiceDidTerminateWithError:(id)arg1 ;
-(void)remoteViewControllerWillDismiss:(id)arg0 ;
-(void)serviceProxyWillQueueInvocation:(id)arg0 ;


@end


#endif