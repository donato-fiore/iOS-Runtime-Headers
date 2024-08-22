// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15FOCUSSETTINGSUI42FOCUSFILTERSYSTEMCONFIGURATIONMASTHEADVIEW_H
#define _TTC15FOCUSSETTINGSUI42FOCUSFILTERSYSTEMCONFIGURATIONMASTHEADVIEW_H

@class UIView, UIColor, NSString;



@interface _TtC15FocusSettingsUI42FocusFilterSystemConfigurationMastheadView : UIView {
    ? title;
    ? symbolName;
    ? subtitle;
    ? rootView;
}


@property (nonatomic, readonly) UIColor *color; // ivar: color
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *title;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 symbolName:(id)arg2 color:(id)arg3 ;


@end


#endif