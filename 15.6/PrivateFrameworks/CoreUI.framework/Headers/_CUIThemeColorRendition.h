// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CUITHEMECOLORRENDITION_H
#define _CUITHEMECOLORRENDITION_H

@class NSString;


#import "CUIThemeRendition.h"

@interface _CUIThemeColorRendition : CUIThemeRendition {
    *CGColor _cgColor;
    *_csicolor _csiColor;
    NSString *_colorName;
}




-(BOOL)substituteWithSystemColor;
-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)systemColorName;
-(struct CGColor *)cgColor;
-(struct _csicolor *)csiColor;
-(void)dealloc;


@end


#endif