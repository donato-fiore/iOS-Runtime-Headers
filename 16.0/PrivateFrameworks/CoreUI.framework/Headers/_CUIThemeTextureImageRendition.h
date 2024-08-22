// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CUITHEMETEXTUREIMAGERENDITION_H
#define _CUITHEMETEXTUREIMAGERENDITION_H

@class NSMutableArray;


#import "CUIThemeRendition.h"

@interface _CUIThemeTextureImageRendition : CUIThemeRendition {
    NSMutableArray *_textureImages;
}




-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)textureImages;
-(int)pixelFormat;
-(void)dealloc;


@end


#endif