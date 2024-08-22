// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLCONVERSATIONEXTENSIONHOSTCONTEXT_H
#define SLCONVERSATIONEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol SLConversationExtensionHostProtocol;



@interface SLConversationExtensionHostContext : NSExtensionContext <SLConversationExtensionHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissalRequestHandler; // ivar: _dismissalRequestHandler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *messageGUID; // ivar: _messageGUID
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)createURLWithMessageGUIDForCurrentURL:(id)arg0 ;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestDismissal;


@end


#endif