// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASKRESOURCECACHE_H
#define ASKRESOURCECACHE_H

@class NSCache;

#import <Foundation/Foundation.h>

#import "_ASKResourceCacheGroup.h"

@interface ASKResourceCache : NSObject

@property (readonly, nonatomic) NSCache *contents; // ivar: _contents
@property (nonatomic) BOOL evictsObjectsWhenApplicationEntersBackground;
@property (readonly, nonatomic) _ASKResourceCacheGroup *group; // ivar: _group
@property (readonly, nonatomic) BOOL isGroupMember;
@property (nonatomic) NSUInteger limit;


-(id)init;
-(id)initWithGroupOfCache:(id)arg0 ;
-(id)resourcesForKey:(id)arg0 ;
-(void)addResource:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)removeAllResources;
-(void)replaceResourcesForKey:(id)arg0 withResource:(id)arg1 ;


@end


#endif