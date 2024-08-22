// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKDIAGNOSTICHOSTCONTEXT_H
#define DKDIAGNOSTICHOSTCONTEXT_H

@class NSExtensionContext, NSString, NSXPCConnection;
@protocol DKDiagnosticHostRemoteContext, DKExtensionHostAdapter, DKExtensionHostAdapterDelegate;



@interface DKDiagnosticHostContext : NSExtensionContext <DKDiagnosticHostRemoteContext, DKExtensionHostAdapter>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DKExtensionHostAdapterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isXPC; // ivar: _isXPC
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_helperConnnection;
-(id)initWithConnection:(id)arg0 ;
-(void)cancelWithCompletion:(id)arg0 ;
-(void)remoteHostCompleteWithResult:(id)arg0 completion:(id)arg1 ;
-(void)remoteHostEnableVolumeHUD:(BOOL)arg0 ;
-(void)remoteHostGetAsset:(id)arg0 completion:(id)arg1 ;
-(void)remoteHostRequestPluginReloadOnFinishWithCompletion:(id)arg0 ;
-(void)remoteHostSetScreenToBrightness:(float)arg0 animate:(BOOL)arg1 ;
-(void)remoteHostShowUI:(id)arg0 completion:(id)arg1 ;
-(void)remoteHostUnpairSessionAccessoryOnTestCompletion;
-(void)remoteHostUploadAssets:(id)arg0 completion:(id)arg1 ;
-(void)startWithPayload:(id)arg0 completion:(id)arg1 ;


@end


#endif