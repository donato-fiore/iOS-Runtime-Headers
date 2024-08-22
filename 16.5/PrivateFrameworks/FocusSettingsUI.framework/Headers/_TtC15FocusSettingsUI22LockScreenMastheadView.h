// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15FOCUSSETTINGSUI22LOCKSCREENMASTHEADVIEW_H
#define _TTC15FOCUSSETTINGSUI22LOCKSCREENMASTHEADVIEW_H

@class UIView, UIColor, NSString;



@interface _TtC15FocusSettingsUI22LockScreenMastheadView : UIView {
    ? symbolImageName;
    ? rootView;
}


@property (nonatomic, readonly) UIColor *keyColor; // ivar: keyColor
@property (nonatomic, readonly) NSString *symbolImageName;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithKeyColor:(id)arg0 symbolImageName:(id)arg1 ;


@end


#endif