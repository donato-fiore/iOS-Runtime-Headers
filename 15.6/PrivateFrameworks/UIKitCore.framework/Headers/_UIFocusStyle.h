// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSSTYLE_H
#define _UIFOCUSSTYLE_H



#import "UIFocusHaloEffect.h"
#import "UITargetedPreview.h"

@interface _UIFocusStyle : UIFocusHaloEffect

@property (retain, nonatomic) UITargetedPreview *preview; // ivar: _preview


+(id)styleWithPreview:(id)arg0 ;
-(BOOL)__isHaloEffect;


@end


#endif