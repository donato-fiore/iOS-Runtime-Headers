// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSCACHEOBJECTSTORE_H
#define SSCACHEOBJECTSTORE_H

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSDatabaseCache.h"

@interface SSCacheObjectStore : NSObject {
    SSDatabaseCache *_databaseCache;
    NSMutableSet *_factories;
    NSString *_sessionIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




-(BOOL)addObject:(id)arg0 withItemIdentifier:(id)arg1 ;
-(BOOL)removeObjectWithItemIdentifier:(id)arg0 ;
-(id)_factoryForTypeIdentifier:(id)arg0 ;
-(id)cacheObjectWithItemIdentifier:(id)arg0 ;
-(id)description;
-(id)initWithSessionIdentifier:(id)arg0 ;
-(void)addCacheObjectFactory:(id)arg0 ;
-(void)clearSession;
-(void)dealloc;
-(void)removeCacheObjectFactory:(id)arg0 ;


@end


#endif