// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _RECONTINUOUSHISTOGRAM_H
#define _RECONTINUOUSHISTOGRAM_H



#import "REHistogram.h"
#import "RESortedDictionary.h"

@interface _REContinuousHistogram : REHistogram {
    NSUInteger _binningValue;
    RESortedDictionary *_values;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countForValue:(NSUInteger)arg0 ;
-(NSUInteger)countOfValuesBetweenMinValue:(NSUInteger)arg0 maxValue:(NSUInteger)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)mean;
-(NSUInteger)standardDeviation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFeature:(id)arg0 binningSize:(NSUInteger)arg1 ;
-(void)_enumerateValuesBetweenMinValue:(NSUInteger)arg0 maxValue:(NSUInteger)arg1 block:(id)arg2 ;
-(void)addValue:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)enumerateValuesUsingBlock:(id)arg0 ;
-(void)removeValue:(NSUInteger)arg0 ;


@end


#endif