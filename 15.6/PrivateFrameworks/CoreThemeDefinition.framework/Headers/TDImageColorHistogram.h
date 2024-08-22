// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDIMAGECOLORHISTOGRAM_H
#define TDIMAGECOLORHISTOGRAM_H


#import <Foundation/Foundation.h>


@interface TDImageColorHistogram : NSObject {
    _histogram_ARGB_t _histogram;
    vImage_Buffer _imageBuffer;
    vImage_CGImageFormat _imageFormat;
    BOOL _isMonochrome;
}


@property (readonly) BOOL isMonochrome;


-(CGFloat)intersection:(id)arg0 ;
-(id)initWithCGImage:(struct CGImage *)arg0 ;


@end


#endif