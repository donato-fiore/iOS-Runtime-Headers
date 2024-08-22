// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDREMOTEACTIONHOSTCONTEXT_H
#define DDREMOTEACTIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol DDRemoteActionHostProtocol;



@interface DDRemoteActionHostContext : NSExtensionContext <DDRemoteActionHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_allowedItemPayloadClasses;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)protocolService;
-(void)enableUserInteraction:(BOOL)arg0 ;
-(void)prepareViewControllerWithCompletionHandler:(id)arg0 ;


@end


#endif