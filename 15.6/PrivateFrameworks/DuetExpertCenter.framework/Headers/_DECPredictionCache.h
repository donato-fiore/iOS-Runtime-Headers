// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECPREDICTIONCACHE_H
#define _DECPREDICTIONCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _DECPredictionCache : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)description;
-(id)init;
-(id)predictionsForCategories:(NSUInteger)arg0 consumer:(NSUInteger)arg1 ;
-(void)cachePredictions:(id)arg0 consumer:(NSUInteger)arg1 ;
-(void)clearCacheForCategory:(NSUInteger)arg0 consumer:(NSUInteger)arg1 ;


@end


#endif