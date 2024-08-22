// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEREMOTEEXTENSIONCONTEXT_H
#define MEREMOTEEXTENSIONCONTEXT_H

@class NSExtensionContext, NSMapTable, NSString, NSArray;
@protocol MERemoteExtensionProtocol, MEExtensionRemoteHostProtocol;



@interface MERemoteExtensionContext : NSExtensionContext <MERemoteExtensionProtocol>



@property (retain, nonatomic) NSMapTable *composeSessionToHandlerMap; // ivar: _composeSessionToHandlerMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<MEExtensionRemoteHostProtocol> *remoteHostPoxy;
@property (readonly, copy) NSArray *requiredHeaders;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
+(id)log;
-(id)_composeSessionInterfaceForSession:(id)arg0 ;
-(id)_contentBlockerInterface;
-(id)_createPrincipalObject;
-(id)_extensionInterface;
-(id)_mailActionInterface;
-(id)_messageSecurityHandlerInterface;
-(id)additionalHeadersForSession:(id)arg0 ;
-(id)contentRulesJSON;
-(id)decodedMessageForMessageData:(id)arg0 ;
-(id)extensionViewControllerForMessageContext:(id)arg0 ;
-(id)extensionViewControllerForMessageSigners:(id)arg0 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(id)remoteProxy;
-(id)viewControllerForSession:(id)arg0 ;
-(void)contentRulesJSONWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)decideActionForMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)decodedMessageForMessageData:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)encodeMessage:(id)arg0 composeContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)getEncodingStatusForMessage:(id)arg0 composeContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)mailComposeSessionDidBegin:(id)arg0 ;
-(void)mailComposeSessionDidEnd:(id)arg0 ;
-(void)primaryActionClickedForMessageContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)requiredHeadersWithCompletion:(id)arg0 ;
-(void)session:(id)arg0 annotateAddressesWithCompletionHandler:(id)arg1 ;
-(void)session:(id)arg0 canSendMessageWithCompletionHandler:(id)arg1 ;
-(void)session:(id)arg0 getAdditionalHeadersWithCompletion:(id)arg1 ;


@end


#endif