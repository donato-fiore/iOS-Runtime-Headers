// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTHASHCACHE_H
#define BLTHASHCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BLTHashCache : NSObject {
    NSMutableDictionary *_cacheBySectionID;
}




-(id)init;
-(void)_updateCacheWithItems:(id)arg0 forSectionID:(id)arg1 matchID:(id)arg2 result:(id)arg3 ;
-(void)updateCacheWithItems:(id)arg0 forSectionID:(id)arg1 matchID:(id)arg2 result:(id)arg3 ;


@end


#endif