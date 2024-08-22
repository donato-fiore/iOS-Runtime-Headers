// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
+(id)sharedResourcesCreateIfNil:(BOOL)arg0 addResourceUser:(BOOL)arg1 ;
+(void)removeResourceUser;
-(BOOL)hasResources;
-(id)init;
-(id)resourcesCreateIfNil:(BOOL)arg0 addResourceUser:(BOOL)arg1 ;
-(void)_removeResourceUser;


@end


#endif