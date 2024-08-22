// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CUITHEMEMULTISIZEIMAGESETRENDITION_H
#define _CUITHEMEMULTISIZEIMAGESETRENDITION_H

@class NSArray;


#import "CUIThemeRendition.h"

@interface _CUIThemeMultisizeImageSetRendition : CUIThemeRendition {
    NSArray *_sizeIndexes;
}




-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)sizeIndexes;
-(void)dealloc;


@end


#endif