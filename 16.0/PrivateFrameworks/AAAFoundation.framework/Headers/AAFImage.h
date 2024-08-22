// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAFIMAGE_H
#define AAFIMAGE_H


#import <Foundation/Foundation.h>


@interface AAFImage : NSObject



+(id)circularImageData:(id)arg0 withDiameter:(CGFloat)arg1 ;
+(id)circularImageData:(id)arg0 withDiameter:(CGFloat)arg1 crop:(struct CGRect )arg2 ;
+(struct CGImage *)circularImage:(struct CGImage *)arg0 withDiameter:(CGFloat)arg1 crop:(struct CGRect )arg2 ;
+(struct CGRect )tranformedRectForImageSize:(struct CGSize )arg0 withDiameter:(CGFloat)arg1 crop:(struct CGRect )arg2 ;


@end


#endif