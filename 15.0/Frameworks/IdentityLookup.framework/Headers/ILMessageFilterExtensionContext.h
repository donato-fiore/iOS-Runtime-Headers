// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ILMESSAGEFILTEREXTENSIONCONTEXT_H
#define ILMESSAGEFILTEREXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol ILMessageFilterExtensionVendorProtocol;



@interface ILMessageFilterExtensionContext : NSExtensionContext <ILMessageFilterExtensionVendorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)extension;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)deferQueryRequestToNetworkWithCompletion:(id)arg0 ;
-(void)deferReportRequestToNetworkWithCompletion:(id)arg0 ;
-(void)finish;
-(void)handleQueryRequest:(id)arg0 reply:(id)arg1 ;
-(void)handleReportRequest:(id)arg0 reply:(id)arg1 ;


@end


#endif