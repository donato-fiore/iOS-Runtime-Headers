// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKRESOURCECACHE_H
#define GKRESOURCECACHE_H

@class NSCache;

#import <Foundation/Foundation.h>

#import "_GKASKResourceCacheGroup.h"

@interface GKResourceCache : NSObject

@property (readonly, nonatomic) NSCache *contents; // ivar: _contents
@property (nonatomic) BOOL evictsObjectsWhenApplicationEntersBackground;
@property (readonly, nonatomic) _GKASKResourceCacheGroup *group; // ivar: _group
@property (readonly, nonatomic) BOOL isGroupMember;
@property (nonatomic) NSUInteger limit;


-(id)init;
-(id)initWithGroupOfCache:(id)arg0 ;
-(id)resourcesForKey:(id)arg0 ;
-(void)addResource:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)removeAllResources;
-(void)removeResourcesForKey:(id)arg0 ;
-(void)replaceResourcesForKey:(id)arg0 withResource:(id)arg1 ;


@end


#endif