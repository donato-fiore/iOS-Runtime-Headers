// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUSPARSEARRAY_H
#define TSUSPARSEARRAY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSUSparseArray : NSObject <NSCopying>

 {
    *tsuSaPage _topPage;
    NSUInteger _nonNilCount;
    unsigned int _depth;
}


@property (readonly) NSUInteger count;


+(id)array;
-(BOOL)hasObjectForKey:(NSUInteger)arg0 ;
-(NSUInteger)maxIndexForCurrentDepth;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectForKey:(NSUInteger)arg0 ;
-(void)clear;
-(void)dealloc;
-(void)foreach:(id)arg0 ;
-(void)increaseDepth;
-(void)removeObjectForKey:(NSUInteger)arg0 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;
-(void)setObject:(id)arg0 forKey:(NSUInteger)arg1 ;


@end


#endif