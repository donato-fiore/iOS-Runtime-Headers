// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CUIRAWPIXELRENDITION_H
#define _CUIRAWPIXELRENDITION_H

@class NSData;


#import "CUIThemeRendition.h"
#import "CUIRenditionMetrics.h"
#import "CUIRenditionSliceInformation.h"

@interface _CUIRawPixelRendition : CUIThemeRendition {
    int _pixelFormat;
    unsigned int _nimages;
    NSData *_rawData;
    ? _image;
    *CGImage _unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
}




-(BOOL)isScaled;
-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)imageForSliceIndex:(NSInteger)arg0 ;
-(id)initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(id)maskForSliceIndex:(NSInteger)arg0 ;
-(id)metrics;
-(id)sliceInformation;
-(int)pixelFormat;
-(struct CGImage *)unslicedImage;
-(struct CGSize )unslicedSize;
-(void)dealloc;


@end


#endif