// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSPUBLICEVENTMANAGER_H
#define CLSPUBLICEVENTMANAGER_H


#import <Foundation/Foundation.h>

#import "CLSPublicEventCache.h"

@interface CLSPublicEventManager : NSObject

@property (readonly, nonatomic) CLSPublicEventCache *cache; // ivar: _cache
@property (nonatomic) CGFloat queryRadius; // ivar: _queryRadius


+(id)urlForEventsForCacheInvalidation;
-(id)init;
-(id)loadInvalidationTokensAndInvalidateCachesIfNeeded;
-(id)publicEventsByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg0 progressBlock:(id)arg1 ;
-(void)saveEventsForCacheInvalidation:(id)arg0 ;


@end


#endif