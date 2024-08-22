// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYINITIALIZATIONCONSTANT_H
#define MPSNDARRAYINITIALIZATIONCONSTANT_H



#import "MPSNDArrayInitialization.h"

@interface MPSNDArrayInitializationConstant : MPSNDArrayInitialization

@property (readonly, nonatomic) float constantValue;


-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 constantValue:(float)arg1 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 ;


@end


#endif