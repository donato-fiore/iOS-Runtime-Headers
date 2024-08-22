// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEFILTERPACKETEXTENSIONPROVIDERHOSTCONTEXT_H
#define NEFILTERPACKETEXTENSIONPROVIDERHOSTCONTEXT_H

@class NSString;
@protocol NEFilterExtensionProviderProtocol, NEFilterPacketExtensionProviderHostProtocol;


#import "NEFilterExtensionProviderHostContext.h"

@interface NEFilterPacketExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterExtensionProviderProtocol, NEFilterPacketExtensionProviderHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
-(void)createPacketChannelWithCompletionHandler:(id)arg0 ;


@end


#endif