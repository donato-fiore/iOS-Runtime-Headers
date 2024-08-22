// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPUIACTIONREMOTECONTEXT_H
#define FPUIACTIONREMOTECONTEXT_H

@class NSExtensionContext, NSString;
@protocol FPUIActionRemoteContextProtocol, FPUIActionRemoteContextDelegate;



@interface FPUIActionRemoteContext : NSExtensionContext <FPUIActionRemoteContextProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FPUIActionRemoteContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)_completeRequestWithUserInfo:(id)arg0 error:(id)arg1 ;
-(void)_didEncounterError:(id)arg0 completionHandler:(id)arg1 ;
-(void)_openExtensionURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif