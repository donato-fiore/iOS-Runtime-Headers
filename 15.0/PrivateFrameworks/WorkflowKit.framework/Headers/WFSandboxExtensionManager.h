// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSANDBOXEXTENSIONMANAGER_H
#define WFSANDBOXEXTENSIONMANAGER_H

@class NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface WFSandboxExtensionManager : NSObject

@property (readonly, copy, nonatomic) NSDictionary *extensionClassesPerResource; // ivar: _extensionClassesPerResource
@property (readonly, copy, nonatomic) NSSet *extensionResourcesClassNames; // ivar: _extensionResourcesClassNames


+(BOOL)hasExtensionForResourceClassName:(id)arg0 ;
+(id)allAvailableExtensionResourceClassNames;
-(id)init;
-(id)initWithExtensionClassesPerResource:(id)arg0 ;
-(id)requestSandboxExtensionForResources:(id)arg0 destinationProcessAuditToken:(struct ? )arg1 unauthorizedResources:(*id)arg2 ;


@end


#endif