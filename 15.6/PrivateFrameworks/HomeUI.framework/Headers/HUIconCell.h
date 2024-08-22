// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUICONCELL_H
#define HUICONCELL_H

@class UITableViewCell, UIView, NSString, UILabel, NSArray, UIColor, UILayoutGuide, HFItem;
@protocol HUCellProtocol, HUDisableableCellProtocol, HUResizableCellDelegate;


#import "HUIconCellContentMetrics.h"
#import "HUIconView.h"

@interface HUIconCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>



@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) HUIconCellContentMetrics *contentMetrics; // ivar: _contentMetrics
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (nonatomic) BOOL disableContinuousIconAnimation;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) NSArray *dynamicConstraints; // ivar: _dynamicConstraints
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideIcon; // ivar: _hideIcon
@property (nonatomic) CGFloat iconAlpha; // ivar: _iconAlpha
@property (nonatomic) NSUInteger iconDisplayStyle; // ivar: _iconDisplayStyle
@property (retain, nonatomic) UIColor *iconForegroundColor; // ivar: _iconForegroundColor
@property (nonatomic) BOOL iconForegroundColorFollowsTintColor; // ivar: _iconForegroundColorFollowsTintColor
@property (retain, nonatomic) NSArray *iconSpacingConstraints; // ivar: _iconSpacingConstraints
@property (retain, nonatomic) UILayoutGuide *iconSpacingLayoutGuide; // ivar: _iconSpacingLayoutGuide
@property (nonatomic) BOOL iconTintColorFollowsDisabledState; // ivar: _iconTintColorFollowsDisabledState
@property (retain, nonatomic) HUIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic) BOOL separatorInsetLinesUpWithText; // ivar: _separatorInsetLinesUpWithText
@property (retain, nonatomic) NSArray *staticConstraints; // ivar: _staticConstraints
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *textLabel;


+(BOOL)requiresConstraintBasedLayout;
-(id)_verticalConstraintsForContentSubview:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_createIconView;
-(void)_invalidateDynamicConstraints;
-(void)_updateIcon;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif