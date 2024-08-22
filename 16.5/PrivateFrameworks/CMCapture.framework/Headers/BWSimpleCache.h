// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSIMPLECACHE_H
#define BWSIMPLECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BWSimpleCache : NSObject {
    NSMutableDictionary *_cache;
    *OpaqueFigSimpleMutex _propertyMutex;
}




+(void)initialize;
-(id)copyAndClearObjectForKey:(id)arg0 ;
-(id)init;
-(void)cacheObject:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;


@end


#endif