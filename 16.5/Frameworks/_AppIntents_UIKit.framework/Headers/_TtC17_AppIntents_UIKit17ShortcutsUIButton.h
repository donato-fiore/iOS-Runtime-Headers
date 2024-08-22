// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17_APPINTENTS_UIKIT17SHORTCUTSUIBUTTON_H
#define _TTC17_APPINTENTS_UIKIT17SHORTCUTSUIBUTTON_H

@class UIButton;



@interface _TtC17_AppIntents_UIKit17ShortcutsUIButton : UIButton {
    ? style;
    ? hostingView;
    ? buttonTapHandler;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addTarget:(id)arg0 action:(SEL)arg1 forControlEvents:(NSUInteger)arg2 ;


@end


#endif