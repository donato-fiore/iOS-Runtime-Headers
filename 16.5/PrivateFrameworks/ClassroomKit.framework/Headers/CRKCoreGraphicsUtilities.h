// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCOREGRAPHICSUTILITIES_H
#define CRKCOREGRAPHICSUTILITIES_H


#import <Foundation/Foundation.h>


@interface CRKCoreGraphicsUtilities : NSObject



+(id)imageDataFromImage:(struct CGImage *)arg0 ;
+(struct CGContext *)createImageContextForSize:(struct CGSize )arg0 ;
+(struct CGImage *)createResizedImageFromImage:(struct CGImage *)arg0 newSize:(struct CGSize )arg1 ;


@end


#endif