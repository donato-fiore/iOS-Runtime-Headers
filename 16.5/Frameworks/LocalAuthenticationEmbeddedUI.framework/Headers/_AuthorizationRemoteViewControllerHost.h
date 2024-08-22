// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AUTHORIZATIONREMOTEVIEWCONTROLLERHOST_H
#define _AUTHORIZATIONREMOTEVIEWCONTROLLERHOST_H

@class UIRemoteViewController, NSString;
@protocol AuthenticatorHost, AuthenticatorService, _AuthorizationRemoteViewControllerHostDelegate;



@interface _AuthorizationRemoteViewControllerHost : UIRemoteViewController <AuthenticatorHost, AuthenticatorService>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_AuthorizationRemoteViewControllerHostDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)_requestViewController:(id)arg0 connectionHandler:(id)arg1 ;
+(void)requestViewControllerWithConnectionHandler:(id)arg0 ;
-(void)authenticatorServiceDidFinishWithError:(id)arg0 reply:(id)arg1 ;
-(void)authenticatorServiceDidObtainAuthenticationWithReply:(id)arg0 ;
-(void)dealloc;
-(void)startWithConfiguration:(id)arg0 reply:(id)arg1 ;
-(void)stopWithReply:(id)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif