// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBINT64ARRAY_H
#define GPBINT64ARRAY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "GPBMessage.h"

@interface GPBInt64Array : NSObject <NSCopying>

 {
    GPBMessage *_autocreator;
    *NSInteger _values;
    NSUInteger _capacity;
}


@property (readonly, nonatomic) NSUInteger count; // ivar: _count


+(id)array;
+(id)arrayWithCapacity:(NSUInteger)arg0 ;
+(id)arrayWithValue:(NSInteger)arg0 ;
+(id)arrayWithValueArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)valueAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithValueArray:(id)arg0 ;
-(id)initWithValues:(*NSInteger)arg0 count:(NSUInteger)arg1 ;
-(void)addValue:(NSInteger)arg0 ;
-(void)addValues:(*NSInteger)arg0 count:(NSUInteger)arg1 ;
-(void)addValuesFromArray:(id)arg0 ;
-(void)dealloc;
-(void)enumerateValuesWithBlock:(id)arg0 ;
-(void)enumerateValuesWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)exchangeValueAtIndex:(NSUInteger)arg0 withValueAtIndex:(NSUInteger)arg1 ;
-(void)insertValue:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)internalResizeToCapacity:(NSUInteger)arg0 ;
-(void)removeAll;
-(void)removeValueAtIndex:(NSUInteger)arg0 ;
-(void)replaceValueAtIndex:(NSUInteger)arg0 withValue:(NSInteger)arg1 ;


@end


#endif