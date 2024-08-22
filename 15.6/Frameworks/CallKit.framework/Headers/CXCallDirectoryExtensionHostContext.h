// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXCALLDIRECTORYEXTENSIONHOSTCONTEXT_H
#define CXCALLDIRECTORYEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol CXCallDirectoryProviderHostProtocol, OS_dispatch_queue;



@interface CXCallDirectoryExtensionHostContext : NSExtensionContext <CXCallDirectoryProviderHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXCallDirectoryProviderHostProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)activate;
-(void)addBlockingEntriesWithData:(id)arg0 reply:(id)arg1 ;
-(void)addIdentificationEntriesWithData:(id)arg0 reply:(id)arg1 ;
-(void)completeRequestWithReply:(id)arg0 ;
-(void)dealloc;
-(void)isIncrementalLoadingAllowed:(id)arg0 ;
-(void)removeAllBlockingEntriesWithReply:(id)arg0 ;
-(void)removeAllIdentificationEntriesWithReply:(id)arg0 ;
-(void)removeBlockingEntriesWithData:(id)arg0 reply:(id)arg1 ;
-(void)removeIdentificationEntriesWithData:(id)arg0 reply:(id)arg1 ;
-(void)requestFailedWithError:(id)arg0 completion:(id)arg1 ;


@end


#endif