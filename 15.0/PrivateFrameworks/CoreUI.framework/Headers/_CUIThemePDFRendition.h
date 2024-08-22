// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CUITHEMEPDFRENDITION_H
#define _CUITHEMEPDFRENDITION_H



#import "CUIThemeRendition.h"

@interface _CUIThemePDFRendition : CUIThemeRendition {
    *CGPDFDocument _pdfDocument;
}




-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(id)metrics;
-(int)pixelFormat;
-(struct CGImage *)createImageFromPDFRenditionWithScale:(CGFloat)arg0 ;
-(struct CGPDFDocument *)pdfDocument;
-(void)dealloc;


@end


#endif