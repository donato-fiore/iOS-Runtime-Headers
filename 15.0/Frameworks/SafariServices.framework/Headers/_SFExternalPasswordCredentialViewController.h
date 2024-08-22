// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFEXTERNALPASSWORDCREDENTIALVIEWCONTROLLER_H
#define _SFEXTERNALPASSWORDCREDENTIALVIEWCONTROLLER_H

@class SFPasswordViewController, SFQueueingServiceViewControllerProxy<SFExternalPasswordCredentialServiceViewControllerProtocol>, NSString;
@protocol SFExternalPasswordCredentialRemoteViewControllerDelegate, _SFExternalPasswordCredentialViewControllerDelegate;


#import "SFExternalPasswordCredentialRemoteViewController.h"

@interface _SFExternalPasswordCredentialViewController : SFPasswordViewController <SFExternalPasswordCredentialRemoteViewControllerDelegate>

 {
    SFExternalPasswordCredentialRemoteViewController *_remoteViewController;
    SFQueueingServiceViewControllerProxy<SFExternalPasswordCredentialServiceViewControllerProtocol> *_serviceProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFExternalPasswordCredentialViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)_connectToServiceWithCompletion:(id)arg0 ;
-(id)_remoteViewController;
-(id)init;
-(void)_sceneDidEnterBackground:(id)arg0 ;
-(void)_setUpServiceProxyIfNeeded;
-(void)autoFillWithExternalCredential:(id)arg0 ;
-(void)dealloc;
-(void)getCredentialForExternalCredential:(id)arg0 completion:(id)arg1 ;
-(void)presentExternalPasswordCredentialRemoteViewController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif