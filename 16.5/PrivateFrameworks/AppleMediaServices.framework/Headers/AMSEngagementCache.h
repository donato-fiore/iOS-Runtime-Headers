// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSENGAGEMENTCACHE_H
#define AMSENGAGEMENTCACHE_H


#import <Foundation/Foundation.h>

#import "AMSEngagementCacheDatabase.h"

@interface AMSEngagementCache : NSObject

@property (retain, nonatomic) AMSEngagementCacheDatabase *database; // ivar: _database


+(id)sharedInstance;
-(id)cachedResponseForEvent:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(void)cacheResponse:(id)arg0 filter:(id)arg1 expiration:(id)arg2 ;
-(void)dealloc;


@end


#endif