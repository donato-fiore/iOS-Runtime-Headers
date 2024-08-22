// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSIMAGESTATISTICSMEANANDVARIANCE_H
#define MPSIMAGESTATISTICSMEANANDVARIANCE_H



#import "MPSUnaryImageKernel.h"

@interface MPSImageStatisticsMeanAndVariance : MPSUnaryImageKernel

@property (nonatomic) ? clipRectSource; // ivar: _clipRectSource


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initEncoder;


@end


#endif