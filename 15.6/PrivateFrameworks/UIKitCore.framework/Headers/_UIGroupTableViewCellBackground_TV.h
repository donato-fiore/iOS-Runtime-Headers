// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIGROUPTABLEVIEWCELLBACKGROUND_TV_H
#define _UIGROUPTABLEVIEWCELLBACKGROUND_TV_H

@class NSValue;


#import "UIView.h"
#import "UIImageView.h"

@interface _UIGroupTableViewCellBackground_TV : UIView {
    NSValue *_currentShadowKey;
    UIImageView *_backgroundImageView;
}




-(id)initWithFrame:(struct CGRect )arg0 backgroundImageColor:(id)arg1 cornerRadius:(CGFloat)arg2 ;
-(void)updateBackgroundImageColor:(id)arg0 cornerRadius:(CGFloat)arg1 ;


@end


#endif