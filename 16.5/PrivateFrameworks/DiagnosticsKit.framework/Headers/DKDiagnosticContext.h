// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKDIAGNOSTICCONTEXT_H
#define DKDIAGNOSTICCONTEXT_H

@class NSExtensionContext, NSString, NSXPCConnection;
@protocol DKDiagnosticRemoteContext, DKResponder;



@interface DKDiagnosticContext : NSExtensionContext <DKDiagnosticRemoteContext, DKResponder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isXPC; // ivar: _isXPC
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection
@property (retain, nonatomic) id *xpcPrincipalObject; // ivar: _xpcPrincipalObject


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_getRemoteProxyAndSetUpHandlers;
-(id)_helperConnnection;
-(id)_helperPrincipalObject;
-(id)initWithConnection:(id)arg0 ;
-(struct ? )auditToken;
-(void)cancelRemoteDiagnosticWithCompletion:(id)arg0 ;
-(void)completeWithDiagnosticResult:(id)arg0 completion:(id)arg1 ;
-(void)displayAlertWithHeader:(id)arg0 message:(id)arg1 buttonStrings:(id)arg2 completion:(id)arg3 ;
-(void)enableVolumeHUD:(BOOL)arg0 ;
-(void)getAsset:(id)arg0 completion:(id)arg1 ;
-(void)requestPluginReloadOnFinishWithCompletion:(id)arg0 ;
-(void)setRemoteDiagnosticNotAllowListedWithContactMessage:(id)arg0 ;
-(void)setScreenToBrightness:(float)arg0 animate:(BOOL)arg1 ;
-(void)showUI:(id)arg0 completion:(id)arg1 ;
-(void)startRemoteDiagnosticWithDiagnosticParameters:(id)arg0 completion:(id)arg1 ;
-(void)unpairSessionAccessoryOnTestCompletion;
-(void)uploadAssets:(id)arg0 completion:(id)arg1 ;


@end


#endif