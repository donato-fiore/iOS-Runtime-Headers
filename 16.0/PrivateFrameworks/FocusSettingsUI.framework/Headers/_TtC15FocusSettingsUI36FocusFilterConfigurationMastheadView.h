// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15FOCUSSETTINGSUI36FOCUSFILTERCONFIGURATIONMASTHEADVIEW_H
#define _TTC15FOCUSSETTINGSUI36FOCUSFILTERCONFIGURATIONMASTHEADVIEW_H

@class UIView, NSString;



@interface _TtC15FocusSettingsUI36FocusFilterConfigurationMastheadView : UIView {
    ? bundleIdentifier;
    ? title;
    ? subtitle;
    ? rootView;
}


@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;


-(id)initWithBundleIdentifier:(id)arg0 title:(id)arg1 subtitle:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif