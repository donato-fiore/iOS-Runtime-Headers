// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBBOOLARRAY_H
#define GPBBOOLARRAY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "GPBMessage.h"

@interface GPBBoolArray : NSObject <NSCopying>

 {
    GPBMessage *_autocreator;
    *BOOL _values;
    NSUInteger _capacity;
}


@property (readonly, nonatomic) NSUInteger count; // ivar: _count


+(id)array;
+(id)arrayWithCapacity:(NSUInteger)arg0 ;
+(id)arrayWithValue:(BOOL)arg0 ;
+(id)arrayWithValueArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)valueAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithValueArray:(id)arg0 ;
-(id)initWithValues:(*BOOL)arg0 count:(NSUInteger)arg1 ;
-(void)addValue:(BOOL)arg0 ;
-(void)addValues:(*BOOL)arg0 count:(NSUInteger)arg1 ;
-(void)addValuesFromArray:(id)arg0 ;
-(void)dealloc;
-(void)enumerateValuesWithBlock:(id)arg0 ;
-(void)enumerateValuesWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)exchangeValueAtIndex:(NSUInteger)arg0 withValueAtIndex:(NSUInteger)arg1 ;
-(void)insertValue:(BOOL)arg0 atIndex:(NSUInteger)arg1 ;
-(void)internalResizeToCapacity:(NSUInteger)arg0 ;
-(void)removeAll;
-(void)removeValueAtIndex:(NSUInteger)arg0 ;
-(void)replaceValueAtIndex:(NSUInteger)arg0 withValue:(BOOL)arg1 ;


@end


#endif