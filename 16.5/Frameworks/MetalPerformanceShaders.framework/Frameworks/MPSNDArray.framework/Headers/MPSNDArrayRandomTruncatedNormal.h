// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNDARRAYRANDOMTRUNCATEDNORMAL_H
#define MPSNDARRAYRANDOMTRUNCATEDNORMAL_H



#import "MPSNDArrayRandom.h"

@interface MPSNDArrayRandomTruncatedNormal : MPSNDArrayRandom

@property (nonatomic) float maximum; // ivar: _maximum
@property (nonatomic) float mean; // ivar: _mean
@property (nonatomic) float minimum; // ivar: _minimum
@property (nonatomic) unsigned int samplingMethod; // ivar: _samplingMethod
@property (nonatomic) float standardDeviation; // ivar: _standardDeviation


-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 mean:(float)arg1 standardDeviation:(float)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif