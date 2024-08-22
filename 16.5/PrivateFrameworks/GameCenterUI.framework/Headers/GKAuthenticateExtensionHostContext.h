// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKAUTHENTICATEEXTENSIONHOSTCONTEXT_H
#define GKAUTHENTICATEEXTENSIONHOSTCONTEXT_H

@class NSString;
@protocol GKAuthenticateHostProtocol;


#import "GKExtensionHostContext.h"

@interface GKAuthenticateExtensionHostContext : GKExtensionHostContext <GKAuthenticateHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;


@end


#endif