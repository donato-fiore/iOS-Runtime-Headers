// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSIMAGEINTEGRAL_H
#define MPSIMAGEINTEGRAL_H



#import "MPSUnaryImageKernel.h"

@interface MPSImageIntegral : MPSUnaryImageKernel



+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)InitEncoder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif