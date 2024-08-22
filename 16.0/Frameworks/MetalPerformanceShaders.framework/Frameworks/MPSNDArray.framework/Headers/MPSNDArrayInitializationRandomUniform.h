// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYINITIALIZATIONRANDOMUNIFORM_H
#define MPSNDARRAYINITIALIZATIONRANDOMUNIFORM_H



#import "MPSNDArrayInitialization.h"

@interface MPSNDArrayInitializationRandomUniform : MPSNDArrayInitialization

@property (readonly, nonatomic) float maximum; // ivar: _maximum
@property (readonly, nonatomic) float minimum; // ivar: _minimum


-(NSUInteger)kernelDimensionalityForDestinationArray:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 minimum:(float)arg1 maximum:(float)arg2 seed:(NSUInteger)arg3 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 ;


@end


#endif