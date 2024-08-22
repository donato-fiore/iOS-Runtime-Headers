// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKCONTENTPROVIDERCACHE_H
#define _DKCONTENTPROVIDERCACHE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface _DKContentProviderCache : NSObject

@property (retain, nonatomic) NSCache *cache; // ivar: _cache


-(id)contentProviderForEventStream:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif