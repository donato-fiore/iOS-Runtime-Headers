// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEFILTEREXTENSIONPROVIDERHOSTCONTEXT_H
#define NEFILTEREXTENSIONPROVIDERHOSTCONTEXT_H

@class NSString;
@protocol NEFilterExtensionProviderProtocol, NEFilterExtensionProviderHostProtocol;


#import "NEExtensionProviderHostContext.h"

@interface NEFilterExtensionProviderHostContext : NEExtensionProviderHostContext <NEFilterExtensionProviderProtocol, NEFilterExtensionProviderHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(int)requiredEntitlement;
-(void)startFilterWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif