// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMCONCURRENTMUTABLEARRAY_H
#define FMCONCURRENTMUTABLEARRAY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "FMReadWriteLock.h"

@interface FMConcurrentMutableArray : NSObject

@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) FMReadWriteLock *lock; // ivar: _lock
@property (retain, nonatomic) NSMutableArray *underlyingArray; // ivar: _underlyingArray


-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)nativeArray;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;


@end


#endif