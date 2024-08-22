// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CUINAMECONTENTRENDITION_H
#define _CUINAMECONTENTRENDITION_H

@class NSArray;


#import "CUIThemeRendition.h"

@interface _CUINameContentRendition : CUIThemeRendition {
    NSArray *_contentNames;
}




-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)contentNames;
-(void)dealloc;


@end


#endif