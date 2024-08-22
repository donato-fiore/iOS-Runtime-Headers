// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLCOLLECTIONVIEWCELLCONTAINERVIEW_H
#define HUQUICKCONTROLCOLLECTIONVIEWCELLCONTAINERVIEW_H

@class UIView, NAUILayoutConstraintSet, UILayoutGuide, NSString, UILabel;



@interface HUQuickControlCollectionViewCellContainerView : UIView

@property (readonly, nonatomic) NAUILayoutConstraintSet *constraintSet; // ivar: _constraintSet
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) NAUILayoutConstraintSet *preferredContentFrameConstraintSet; // ivar: _preferredContentFrameConstraintSet
@property (readonly, nonatomic) UILayoutGuide *preferredContentFrameLayoutGuide; // ivar: _preferredContentFrameLayoutGuide
@property (nonatomic) UIEdgeInsets preferredContentLayoutFrameInset; // ivar: _preferredContentLayoutFrameInset
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) NSUInteger titlePosition; // ivar: _titlePosition


+(BOOL)requiresConstraintBasedLayout;
+(CGFloat)preferredChromeHeightForTitlePosition:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 titlePosition:(NSUInteger)arg1 ;
-(void)_configureConstraintSets;
-(void)updateConstraints;


@end


#endif