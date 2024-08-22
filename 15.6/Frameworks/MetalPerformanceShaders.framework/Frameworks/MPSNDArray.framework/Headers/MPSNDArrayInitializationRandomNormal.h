// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNDARRAYINITIALIZATIONRANDOMNORMAL_H
#define MPSNDARRAYINITIALIZATIONRANDOMNORMAL_H



#import "MPSNDArrayInitialization.h"

@interface MPSNDArrayInitializationRandomNormal : MPSNDArrayInitialization

@property (readonly, nonatomic) float mean; // ivar: _mean
@property (readonly, nonatomic) float standardDeviation; // ivar: _standardDeviation


-(NSUInteger)kernelDimensionalityForDestinationArray:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 mean:(float)arg1 standardDeviation:(float)arg2 seed:(NSUInteger)arg3 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 ;


@end


#endif