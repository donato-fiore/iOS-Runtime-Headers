// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKISSUERPROVISIONINGEXTENSIONAUTHORIZATIONREMOTEVIEWCONTROLLER_H
#define PKISSUERPROVISIONINGEXTENSIONAUTHORIZATIONREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol PKIssuerProvisioningExtensionAuthorizationRemoteViewController;



@interface PKIssuerProvisioningExtensionAuthorizationRemoteViewController : UIRemoteViewController <PKIssuerProvisioningExtensionAuthorizationRemoteViewController>

 {
    id *_completionHandler;
    NSInteger _result;
    BOOL _finished;
}




+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
-(BOOL)_isPresentationContextByDefault;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)pkui_finish;
-(void)pkui_setCompletionHandler:(id)arg0 ;
-(void)serviceViewControllerDidCompleteWithResult:(NSInteger)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif