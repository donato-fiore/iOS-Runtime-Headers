// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNIMAGECROPUTILITIES_H
#define CNIMAGECROPUTILITIES_H


#import <Foundation/Foundation.h>


@interface CNImageCropUtilities : NSObject



+(BOOL)cropRect:(struct CGRect )arg0 fitsWithinSize:(struct CGSize )arg1 ;
+(struct CGRect )centeredSquareCropRectInRect:(struct CGRect )arg0 ;
+(struct CGRect )intersectingSquareCropRect:(struct CGRect )arg0 forRect:(struct CGRect )arg1 ;
+(struct CGRect )scaledCropRect:(struct CGRect )arg0 fromSize:(struct CGSize )arg1 toSize:(struct CGSize )arg2 ;
+(struct CGRect )squareCropRect:(struct CGRect )arg0 toFitSize:(struct CGSize )arg1 ;


@end


#endif