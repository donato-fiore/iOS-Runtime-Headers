// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBENUMARRAY_H
#define GPBENUMARRAY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "GPBMessage.h"

@interface GPBEnumArray : NSObject <NSCopying>

 {
    GPBMessage *_autocreator;
    *int _values;
    NSUInteger _capacity;
}


@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) *unk validationFunc; // ivar: _validationFunc


+(id)array;
+(id)arrayWithValidationFunction:(*unk)arg0 ;
+(id)arrayWithValidationFunction:(*unk)arg0 capacity:(NSUInteger)arg1 ;
+(id)arrayWithValidationFunction:(*unk)arg0 rawValue:(int)arg1 ;
+(id)arrayWithValueArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithValidationFunction:(*unk)arg0 ;
-(id)initWithValidationFunction:(*unk)arg0 capacity:(NSUInteger)arg1 ;
-(id)initWithValidationFunction:(*unk)arg0 rawValues:(*int)arg1 count:(NSUInteger)arg2 ;
-(id)initWithValueArray:(id)arg0 ;
-(int)rawValueAtIndex:(NSUInteger)arg0 ;
-(int)valueAtIndex:(NSUInteger)arg0 ;
-(void)addRawValue:(int)arg0 ;
-(void)addRawValues:(*int)arg0 count:(NSUInteger)arg1 ;
-(void)addRawValuesFromArray:(id)arg0 ;
-(void)addValue:(int)arg0 ;
-(void)addValues:(*int)arg0 count:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)enumerateRawValuesWithBlock:(id)arg0 ;
-(void)enumerateRawValuesWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateValuesWithBlock:(id)arg0 ;
-(void)enumerateValuesWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)exchangeValueAtIndex:(NSUInteger)arg0 withValueAtIndex:(NSUInteger)arg1 ;
-(void)insertRawValue:(int)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertValue:(int)arg0 atIndex:(NSUInteger)arg1 ;
-(void)internalResizeToCapacity:(NSUInteger)arg0 ;
-(void)removeAll;
-(void)removeValueAtIndex:(NSUInteger)arg0 ;
-(void)replaceValueAtIndex:(NSUInteger)arg0 withRawValue:(int)arg1 ;
-(void)replaceValueAtIndex:(NSUInteger)arg0 withValue:(int)arg1 ;


@end


#endif