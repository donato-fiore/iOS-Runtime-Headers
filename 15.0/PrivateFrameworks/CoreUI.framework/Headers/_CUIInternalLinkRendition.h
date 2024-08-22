// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CUIINTERNALLINKRENDITION_H
#define _CUIINTERNALLINKRENDITION_H



#import "CUIThemeRendition.h"
#import "CUIRenditionMetrics.h"
#import "CUIRenditionSliceInformation.h"
#import "CUIStructuredThemeStore.h"
#import "CUIRenditionKey.h"

@interface _CUIInternalLinkRendition : CUIThemeRendition {
    unsigned int _nimages;
    CGRect _imageRect;
    ? _image;
    *CGImage _unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
    CGRect _frame;
    CUIStructuredThemeStore *_sourceProvider;
    CUIRenditionKey *_referenceKey;
    CGSize _originalUncroppedSize;
    CGRect _alphaCroppedFrame;
}




-(BOOL)edgesOnly;
-(BOOL)isInternalLink;
-(BOOL)isOpaque;
-(BOOL)isScaled;
-(BOOL)isTiled;
-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)_sourceRendition;
-(id)data;
-(id)imageForSliceIndex:(NSInteger)arg0 ;
-(id)initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(id)linkingToRendition;
-(id)maskForSliceIndex:(NSInteger)arg0 ;
-(id)metrics;
-(id)properties;
-(id)sliceInformation;
-(int)bitmapEncoding;
-(int)pixelFormat;
-(struct CGImage *)unslicedImage;
-(struct CGRect )_destinationFrame;
-(struct CGRect )alphaCroppedRect;
-(struct CGSize )originalUncroppedSize;
-(struct CGSize )unslicedSize;
-(void)_setStructuredThemeStore:(id)arg0 ;
-(void)dealloc;


@end


#endif