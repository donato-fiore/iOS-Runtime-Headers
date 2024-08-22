// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASBULLETINCACHE_H
#define SASBULLETINCACHE_H


#import <Foundation/Foundation.h>

#import "SASBulletinCacheNode.h"

@interface SASBulletinCache : NSObject {
    NSUInteger _count;
    SASBulletinCacheNode *_oldestNode;
    SASBulletinCacheNode *_newestNode;
}




-(BOOL)_isFeedRelevant:(NSUInteger)arg0 ;
-(BOOL)removeBulletinForID:(id)arg0 ;
-(id)_findNodeForBulletinID:(id)arg0 ;
-(id)allBulletins;
-(id)cachedBulletinForID:(id)arg0 ;
-(id)init;
-(void)_deleteNode:(id)arg0 ;
-(void)_purgeOldestNodes;
-(void)insertBulletin:(id)arg0 fromFeed:(NSUInteger)arg1 ;


@end


#endif