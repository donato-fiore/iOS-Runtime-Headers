// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVINPUTBITMAPCACHE_H
#define PVINPUTBITMAPCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PVInputBitmapCache : NSObject {
    NSMutableDictionary *_cache;
    NSUInteger _countLimit;
}




-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;
-(void)didRecieveMemoryWarning:(id)arg0 ;
-(void)purge:(BOOL)arg0 ;
-(void)setCountLimit:(NSUInteger)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif