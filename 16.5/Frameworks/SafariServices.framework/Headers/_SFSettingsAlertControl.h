// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFSETTINGSALERTCONTROL_H
#define _SFSETTINGSALERTCONTROL_H

@class UIControl, NSAttributedString, NSString, UIImage;
@protocol SFSettingsAlertItemView, SFSettingsAlertItemViewDelegate;


#import "_SFSettingsAlertItemBackgroundView.h"
#import "_SFSettingsAlertItem.h"

@interface _SFSettingsAlertControl : UIControl <SFSettingsAlertItemView>



@property (copy, nonatomic) NSAttributedString *attributedDetailText;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) NSInteger backgroundMode;
@property (readonly, nonatomic) _SFSettingsAlertItemBackgroundView *backgroundView; // ivar: _backgroundView
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultBackgroundMode; // ivar: _defaultBackgroundMode
@property (weak, nonatomic) NSObject<SFSettingsAlertItemViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesSeparator; // ivar: _hidesSeparator
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) _SFSettingsAlertItem *item; // ivar: _item
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBackgroundView;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif