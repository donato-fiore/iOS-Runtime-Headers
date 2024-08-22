// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNIMAGEREGISTRATION_H
#define VNIMAGEREGISTRATION_H


#import <Foundation/Foundation.h>


@interface VNImageRegistration : NSObject



+(BOOL)computeTransform:(struct CGAffineTransform *)arg0 forRegisteringImageSignature:(id)arg1 withSignature:(id)arg2 minimumOverlap:(float)arg3 error:(*id)arg4 ;


@end


#endif