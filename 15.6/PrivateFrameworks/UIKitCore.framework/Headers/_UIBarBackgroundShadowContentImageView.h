// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIBARBACKGROUNDSHADOWCONTENTIMAGEVIEW_H
#define _UIBARBACKGROUNDSHADOWCONTENTIMAGEVIEW_H

@class UIVisualEffectImageView;



@interface _UIBarBackgroundShadowContentImageView : UIVisualEffectImageView

@property (nonatomic) BOOL applyTintColorToBackgroundColor; // ivar: _applyTintColorToBackgroundColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_applyTintColorToBackgroundIfNecessary;
-(void)tintColorDidChange;


@end


#endif