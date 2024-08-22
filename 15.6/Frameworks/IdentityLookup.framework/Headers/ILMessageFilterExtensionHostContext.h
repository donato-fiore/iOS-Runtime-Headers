// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ILMESSAGEFILTEREXTENSIONHOSTCONTEXT_H
#define ILMESSAGEFILTEREXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol ILMessageFilterExtensionHostProtocol;



@interface ILMessageFilterExtensionHostContext : NSExtensionContext <ILMessageFilterExtensionHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *deferQueryRequestToNetwork; // ivar: _deferQueryRequestToNetwork
@property (copy, nonatomic) id *deferReportRequestToNetwork; // ivar: _deferReportRequestToNetwork
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)deferQueryRequestToNetworkWithReply:(id)arg0 ;
-(void)deferReportRequestToNetworkWithReply:(id)arg0 ;
-(void)finish;
-(void)handleQueryRequest:(id)arg0 completion:(id)arg1 ;
-(void)handleReportRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif