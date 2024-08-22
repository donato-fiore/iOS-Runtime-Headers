// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMCONCURRENTMUTABLEDICTIONARY_H
#define FMCONCURRENTMUTABLEDICTIONARY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "FMReadWriteLock.h"

@interface FMConcurrentMutableDictionary : NSObject

@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) FMReadWriteLock *lock; // ivar: _lock
@property (retain, nonatomic) NSMutableDictionary *underlyingDictionary; // ivar: _underlyingDictionary


-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)nativeDictionary;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 withConstructor:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)popObjectforKey:(id)arg0 ;
-(id)replaceObject:(id)arg0 forKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif