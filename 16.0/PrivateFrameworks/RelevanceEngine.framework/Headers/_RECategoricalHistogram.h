// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RECATEGORICALHISTOGRAM_H
#define _RECATEGORICALHISTOGRAM_H



#import "REHistogram.h"
#import "RETaggedFeatureValueCountedSet.h"

@interface _RECategoricalHistogram : REHistogram {
    RETaggedFeatureValueCountedSet *_values;
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
-(void)addValue:(NSUInteger)arg0 ;
-(void)enumerateValuesUsingBlock:(id)arg0 ;
-(void)removeValue:(NSUInteger)arg0 ;


@end


#endif