// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBFLOATARRAY_H
#define TRIPBFLOATARRAY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TRIPBMessage.h"

@interface TRIPBFloatArray : NSObject <NSCopying>

 {
    TRIPBMessage *_autocreator;
    *float _values;
    NSUInteger _capacity;
}


@property (readonly, nonatomic) NSUInteger count; // ivar: _count


+(id)array;
+(id)arrayWithCapacity:(NSUInteger)arg0 ;
+(id)arrayWithValue:(float)arg0 ;
+(id)arrayWithValueArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)valueAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithValueArray:(id)arg0 ;
-(id)initWithValues:(*float)arg0 count:(NSUInteger)arg1 ;
-(void)addValue:(float)arg0 ;
-(void)addValues:(*float)arg0 count:(NSUInteger)arg1 ;
-(void)addValuesFromArray:(id)arg0 ;
-(void)dealloc;
-(void)enumerateValuesWithBlock:(id)arg0 ;
-(void)enumerateValuesWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)exchangeValueAtIndex:(NSUInteger)arg0 withValueAtIndex:(NSUInteger)arg1 ;
-(void)insertValue:(float)arg0 atIndex:(NSUInteger)arg1 ;
-(void)internalResizeToCapacity:(NSUInteger)arg0 ;
-(void)removeAll;
-(void)removeValueAtIndex:(NSUInteger)arg0 ;
-(void)replaceValueAtIndex:(NSUInteger)arg0 withValue:(float)arg1 ;


@end


#endif