// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RETAGGEDFEATUREVALUEARRAY_H
#define RETAGGEDFEATUREVALUEARRAY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RETaggedFeatureValueArray : NSObject <NSCopying>

 {
    *__CFArray _array;
    os_unfair_lock_s _lock;
}


@property (readonly) NSUInteger count;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_locked_featureValueAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)featureValueAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)firstFeatureValue;
-(NSUInteger)hash;
-(NSUInteger)lastFeatureValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithFeatureValues:(id)arg0 ;
-(id)initWithValues:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(void)addFeatureValue:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)enumerateFeatureValuesUsingBlock:(id)arg0 ;
-(void)insertFeatureValue:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeAllFeatureValues;
-(void)removeFeatureValueAtIndex:(NSUInteger)arg0 ;
-(void)replaceFeatureValueAtIndex:(NSUInteger)arg0 withValue:(NSUInteger)arg1 ;


@end


#endif