// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFSETTINGSALERTITEM_H
#define _SFSETTINGSALERTITEM_H

@class NSString, NSAttributedString, UIView, NSArray, UIImage, UIImageView, UIColor, UIView<SFSettingsAlertItemView>;

#import <Foundation/Foundation.h>

#import "_SFSettingsAlertItem.h"

@interface _SFSettingsAlertItem : NSObject

@property (copy, nonatomic) NSString *accessibilityIdentifier; // ivar: _accessibilityIdentifier
@property (readonly, nonatomic) NSInteger actionType; // ivar: _actionType
@property (copy, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (retain, nonatomic) UIView *badgeView; // ivar: _badgeView
@property (copy, nonatomic) NSArray *componentsArrangement; // ivar: _componentsArrangement
@property (retain, nonatomic) id *controller; // ivar: _controller
@property (retain, nonatomic) UIView *customView; // ivar: _customView
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, weak, nonatomic) _SFSettingsAlertItem *group; // ivar: _group
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (nonatomic) BOOL showsIndicatorDot; // ivar: _showsIndicatorDot
@property (retain, nonatomic) UIImageView *statusImageView; // ivar: _statusImageView
@property (copy, nonatomic) NSArray *subItems; // ivar: _subItems
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *textStyle; // ivar: _textStyle
@property (copy, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (weak, nonatomic) UIView<SFSettingsAlertItemView> *view; // ivar: _view
@property (copy, nonatomic) id *viewConfigurationBlock; // ivar: _viewConfigurationBlock


+(id)buttonWithAttributedTitle:(id)arg0 textStyle:(id)arg1 icon:(id)arg2 action:(NSInteger)arg3 handler:(id)arg4 ;
+(id)buttonWithTitle:(id)arg0 textStyle:(id)arg1 icon:(id)arg2 action:(NSInteger)arg3 handler:(id)arg4 ;
+(id)itemWithCustomView:(id)arg0 ;
+(id)optionsGroupWithTitle:(id)arg0 action:(NSInteger)arg1 subItemAction:(NSInteger)arg2 controller:(id)arg3 ;
+(id)singleLineButtonWithTitle:(id)arg0 textStyle:(id)arg1 icon:(id)arg2 action:(NSInteger)arg3 handler:(id)arg4 ;
+(id)stepperWithController:(id)arg0 action:(NSInteger)arg1 handler:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 action:(NSInteger)arg1 ;
-(void)_buttonCommonInitWithTextStyle:(id)arg0 icon:(id)arg1 handler:(id)arg2 ;
-(void)_updateButtonTitle;
-(void)updateOptionsGroupDetailLabel;


@end


#endif