// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CPLENGINESCOPECACHE_H
#define _CPLENGINESCOPECACHE_H

@class NSMutableDictionary, NSIndexSet;

#import <Foundation/Foundation.h>


@interface _CPLEngineScopeCache : NSObject {
    NSMutableDictionary *_scopeCache;
    NSMutableDictionary *_scopeByLocalIndex;
    NSMutableDictionary *_scopeByCloudIndex;
    NSMutableDictionary *_scopeByStableIndex;
    NSIndexSet *_validLocalIndexes;
    NSIndexSet *_validCloudIndexes;
}




-(id)init;
-(id)scopeWithCloudIndex:(NSInteger)arg0 ;
-(id)scopeWithIdentifier:(id)arg0 ;
-(id)scopeWithLocalIndex:(NSInteger)arg0 ;
-(id)scopeWithStableIndex:(NSInteger)arg0 ;
-(id)validCloudIndexes;
-(id)validLocalIndexes;
-(void)cacheScope:(id)arg0 forScopeStorage:(id)arg1 ;
-(void)cacheValidCloudIndexes:(id)arg0 ;
-(void)cacheValidLocalIndexes:(id)arg0 ;


@end


#endif