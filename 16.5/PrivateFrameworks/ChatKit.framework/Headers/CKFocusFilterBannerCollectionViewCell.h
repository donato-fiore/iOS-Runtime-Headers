// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFOCUSFILTERBANNERCOLLECTIONVIEWCELL_H
#define CKFOCUSFILTERBANNERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSLayoutConstraint, UIView, UILabel, UIButton, NSArray;
@protocol CKFocusFilterBannerDelegate;



@interface CKFocusFilterBannerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSLayoutConstraint *bottomKeylineHeightConstraint; // ivar: _bottomKeylineHeightConstraint
@property (retain, nonatomic) UIView *bottomKeylineView; // ivar: _bottomKeylineView
@property (weak, nonatomic) NSObject<CKFocusFilterBannerDelegate> *focusFilterBannerDelegate; // ivar: _focusFilterBannerDelegate
@property (retain, nonatomic) UILabel *focusFilterStateDescriptionLabel; // ivar: _focusFilterStateDescriptionLabel
@property (retain, nonatomic) UIButton *focusFilterToggleButton; // ivar: _focusFilterToggleButton
@property (nonatomic) BOOL isFocusFilterEnabled; // ivar: _isFocusFilterEnabled
@property (retain, nonatomic) NSArray *keylineAlignmentConstraints; // ivar: _keylineAlignmentConstraints
@property (retain, nonatomic) NSArray *sizeClassDependentConstraints; // ivar: _sizeClassDependentConstraints
@property (retain, nonatomic) NSLayoutConstraint *topKeylineHeightConstraint; // ivar: _topKeylineHeightConstraint
@property (retain, nonatomic) UIView *topKeylineView; // ivar: _topKeylineView
@property (nonatomic) BOOL useFullWidthKeylines; // ivar: _useFullWidthKeylines


+(id)itemIdentifier;
+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_focusFilterToggleButtonSelected:(id)arg0 ;
-(void)_updateFilterToggleButtonConfiguration;
-(void)_updateKeylineAlignmentConstraints;
-(void)_updateKeylineHeightConstraints;
-(void)_updateSizeClassDependentConstraints;
-(void)_updateTitle;
-(void)contentSizeCategoryDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif