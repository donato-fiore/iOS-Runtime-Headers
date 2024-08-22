// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CUITHEMETEXTSTYLERENDITION_H
#define _CUITHEMETEXTSTYLERENDITION_H



#import "CUIThemeRendition.h"

@interface _CUIThemeTextStyleRendition : CUIThemeRendition {
    *_csitextstyle _csiTextStyle;
}




-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(struct _csitextstyle *)csiTextStyle;


@end


#endif