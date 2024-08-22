// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEAPPINFOCACHE_H
#define NEAPPINFOCACHE_H

@class NSMutableDictionary;
@protocol NEAppInfoCacheLookupDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NEAppInfoCache : NSObject {
    id<NEAppInfoCacheLookupDelegate> *_lookupDelegate;
    NSMutableDictionary *_cachedSourceAppInfo;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}




-(id)init;


@end


#endif