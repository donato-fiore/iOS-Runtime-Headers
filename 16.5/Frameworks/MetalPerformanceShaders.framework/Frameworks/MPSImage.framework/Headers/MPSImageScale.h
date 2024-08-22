// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSIMAGESCALE_H
#define MPSIMAGESCALE_H



#import "MPSUnaryImageKernel.h"

@interface MPSImageScale : MPSUnaryImageKernel {
    MPSScaleTransform _transformStorage;
}


@property (nonatomic) *MPSScaleTransform scaleTransform; // ivar: _scaleTransform


-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif