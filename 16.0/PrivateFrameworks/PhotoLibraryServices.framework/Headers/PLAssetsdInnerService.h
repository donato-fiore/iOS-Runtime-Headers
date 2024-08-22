// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETSDINNERSERVICE_H
#define PLASSETSDINNERSERVICE_H

@class PLLazyObject;

#import <Foundation/Foundation.h>

#import "PLAssetsdServicePermissions.h"

@interface PLAssetsdInnerService : NSObject {
    PLAssetsdServicePermissions *_permissions;
    NSInteger _requiredState;
    PLLazyObject *_lazyService;
}




-(id)initWithPermissions:(id)arg0 requiredLibraryServicesState:(NSInteger)arg1 lazyService:(id)arg2 ;
-(id)instantiateInnerService;
-(void)_awaitForRequiredLibraryStateWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)getInnerServiceWithContext:(id)arg0 reply:(id)arg1 ;


@end


#endif