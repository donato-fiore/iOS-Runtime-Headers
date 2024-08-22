// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPLONGLIVEDCKOPSCOPEDCACHE_H
#define MSPLONGLIVEDCKOPSCOPEDCACHE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MSPLongLivedCKOpCache.h"

@interface MSPLongLivedCKOpScopedCache : NSObject

@property (retain, nonatomic) MSPLongLivedCKOpCache *cache; // ivar: _cache
@property (readonly, nonatomic) NSString *typeName; // ivar: _typeName


-(BOOL)hasOperationID:(id)arg0 ;
-(BOOL)isAwareOfOperationID:(id)arg0 ;
-(BOOL)isCurrentOperationID:(id)arg0 ;
-(id)initWithType:(id)arg0 ;
-(id)initWithType:(id)arg0 cache:(id)arg1 ;
-(void)addOperation:(id)arg0 ;
-(void)pruneOperationsToIDs:(id)arg0 ;
-(void)removeOperation:(id)arg0 ;


@end


#endif