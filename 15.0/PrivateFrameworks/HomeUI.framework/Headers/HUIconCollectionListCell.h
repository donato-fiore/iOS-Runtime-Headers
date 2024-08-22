// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUICONCOLLECTIONLISTCELL_H
#define HUICONCOLLECTIONLISTCELL_H

@class UICollectionViewListCell, NSString, UICellAccessoryCustomView, UIView, UIColor, NSLayoutConstraint, HFItem;
@protocol HUCellProtocol, HUDisableableCellProtocol, HUResizableCellDelegate;


#import "HUIconView.h"

@interface HUIconCollectionListCell : UICollectionViewListCell <HUCellProtocol, HUDisableableCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableContinuousIconAnimation;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UICellAccessoryCustomView *iconAccessoryView; // ivar: _iconAccessoryView
@property (nonatomic) CGFloat iconAlpha; // ivar: _iconAlpha
@property (retain, nonatomic) UIView *iconContainerView; // ivar: _iconContainerView
@property (nonatomic) NSUInteger iconDisplayStyle; // ivar: _iconDisplayStyle
@property (retain, nonatomic) UIColor *iconForegroundColor; // ivar: _iconForegroundColor
@property (nonatomic) BOOL iconForegroundColorFollowsTintColor; // ivar: _iconForegroundColorFollowsTintColor
@property (nonatomic) NSUInteger iconSize; // ivar: _iconSize
@property (retain, nonatomic) NSLayoutConstraint *iconSizeConstraint; // ivar: _iconSizeConstraint
@property (nonatomic) BOOL iconTintColorFollowsDisabledState; // ivar: _iconTintColorFollowsDisabledState
@property (retain, nonatomic) HUIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic) BOOL separatorInsetLinesUpWithText; // ivar: _separatorInsetLinesUpWithText
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_createIconView;
-(void)_updateIcon;
-(void)updateConfigurationUsingState:(id)arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif