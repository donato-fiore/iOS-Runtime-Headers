// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMOBJECTCACHEENTRY_H
#define PMOBJECTCACHEENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PMObjectCacheEntry : NSObject {
    NSString *_cacheKey;
    unsigned int _hashValue;
    id *_item;
    NSUInteger _size;
    NSUInteger _lastAccess;
    float _freq;
    float _value;
    CGFloat _cost;
}




-(BOOL)canBePurgedFromCache;
-(CGFloat)cost;
-(NSUInteger)getSize;
-(NSUInteger)lastAccess;
-(float)getValue:(NSUInteger)arg0 decayRate:(float)arg1 ;
-(id)cacheKey;
-(id)getItem;
-(id)initWithKey:(id)arg0 cacheItem:(id)arg1 size:(NSUInteger)arg2 cost:(CGFloat)arg3 forCache:(id)arg4 ;
-(unsigned int)hashValue;
-(void)dealloc;
-(void)resetValue:(NSUInteger)arg0 responseRate:(float)arg1 penalty:(float)arg2 ;
-(void)setCacheKey:(id)arg0 ;
-(void)setLastAccess:(NSUInteger)arg0 ;
-(void)setValue:(NSUInteger)arg0 cost:(CGFloat)arg1 maxCacheSize:(NSUInteger)arg2 ;


@end


#endif