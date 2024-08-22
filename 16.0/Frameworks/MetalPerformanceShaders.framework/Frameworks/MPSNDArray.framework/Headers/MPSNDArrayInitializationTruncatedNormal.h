// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYINITIALIZATIONTRUNCATEDNORMAL_H
#define MPSNDARRAYINITIALIZATIONTRUNCATEDNORMAL_H



#import "MPSNDArrayInitialization.h"

@interface MPSNDArrayInitializationTruncatedNormal : MPSNDArrayInitialization

@property (readonly, nonatomic) float mean; // ivar: _mean
@property (readonly, nonatomic) float standardDeviation; // ivar: _standardDeviation


-(NSUInteger)kernelDimensionalityForDestinationArray:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 mean:(float)arg1 standardDeviation:(float)arg2 seed:(NSUInteger)arg3 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 ;


@end


#endif