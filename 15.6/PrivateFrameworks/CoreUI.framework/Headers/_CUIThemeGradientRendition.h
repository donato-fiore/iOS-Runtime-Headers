// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CUITHEMEGRADIENTRENDITION_H
#define _CUITHEMEGRADIENTRENDITION_H



#import "CUIThemeRendition.h"
#import "CUIThemeGradient.h"

@interface _CUIThemeGradientRendition : CUIThemeRendition {
    CUIThemeGradient *gradient;
    CGFloat gradientAngle;
}




-(CGFloat)gradientDrawingAngle;
-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)gradient;
-(id)initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(unsigned int)gradientStyle;
-(void)dealloc;


@end


#endif