// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNDARRAYRANDOMUNIFORM_H
#define MPSNDARRAYRANDOMUNIFORM_H



#import "MPSNDArrayRandom.h"

@interface MPSNDArrayRandomUniform : MPSNDArrayRandom

@property (nonatomic) float maximum; // ivar: _maximum
@property (nonatomic) NSInteger maximumInteger; // ivar: _maximumInteger
@property (nonatomic) float minimum; // ivar: _minimum
@property (nonatomic) NSInteger minimumInteger; // ivar: _minimumInteger


-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 minimum:(float)arg1 maximum:(float)arg2 ;
-(id)initWithDevice:(id)arg0 minimumInteger:(NSUInteger)arg1 maximumInteger:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif