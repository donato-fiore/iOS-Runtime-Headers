// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYSHORTCUTHUDSEPARATORVIEW_H
#define _UIKEYSHORTCUTHUDSEPARATORVIEW_H



#import "UIView.h"
#import "UIColor.h"
#import "UIVisualEffectView.h"
#import "UIVisualEffect.h"

@interface _UIKeyShortcutHUDSeparatorView : UIView

@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic, getter=isSeparatorHidden) BOOL separatorHidden;
@property (retain, nonatomic) UIVisualEffectView *separatorVisualEffectView; // ivar: _separatorVisualEffectView
@property (retain, nonatomic) UIVisualEffect *visualEffect;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif