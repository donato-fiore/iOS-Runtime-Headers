// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPUIACTIONEXTENSIONCONTEXT_H
#define FPUIACTIONEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString, NSURL, NSError;



@interface FPUIActionExtensionContext : NSExtensionContext

@property (copy) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (copy) NSURL *initialURL; // ivar: _initialURL
@property (retain, nonatomic) NSError *setupError; // ivar: _setupError


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_remoteContext;
-(void)cancelRequestWithError:(id)arg0 ;
-(void)completeRequest;
-(void)completeRequestWithUserInfo:(id)arg0 ;
-(void)didEncounterError:(id)arg0 completionHandler:(id)arg1 ;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif