// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKSHAREDRESOURCESMANAGER_H
#define VKSHAREDRESOURCESMANAGER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "VKSharedResources.h"

@interface VKSharedResourcesManager : NSObject {
    mutex _lock;
    VKSharedResources *_sharedResources;
    NSMapTable *_tilegroupIdentifierToResources;
}




+(id)sharedManager;
+(id)sharedResources;
+(void)addResourceUser;
+(void)removeResourceUser;
-(BOOL)hasResources;
-(id)init;
-(id)resources;
-(void)_addResourceUser;
-(void)_removeResourceUser;
-(void)dealloc;


@end


#endif