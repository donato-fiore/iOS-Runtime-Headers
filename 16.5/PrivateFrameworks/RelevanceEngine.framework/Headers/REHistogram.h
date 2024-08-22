// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REHISTOGRAM_H
#define REHISTOGRAM_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "REFeature.h"

@interface REHistogram : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) REFeature *feature; // ivar: _feature
@property (readonly, nonatomic) NSUInteger mean;
@property (readonly, nonatomic) NSUInteger standardDeviation;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countForValue:(NSUInteger)arg0 ;
-(NSUInteger)countOfValuesBetweenMinValue:(NSUInteger)arg0 maxValue:(NSUInteger)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFeature:(id)arg0 ;
-(id)initWithFeature:(id)arg0 binningSize:(NSUInteger)arg1 ;
-(void)addValue:(NSUInteger)arg0 ;
-(void)enumerateValuesUsingBlock:(id)arg0 ;
-(void)removeValue:(NSUInteger)arg0 ;


@end


#endif