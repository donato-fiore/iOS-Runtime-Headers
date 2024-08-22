// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAUTHORIZATIONSCOPEDETAILTABLEVIEWCELL_H
#define AKAUTHORIZATIONSCOPEDETAILTABLEVIEWCELL_H

@class UITableViewCell, UIImageView, UILabel, UILayoutGuide, NSLayoutConstraint;



@interface AKAuthorizationScopeDetailTableViewCell : UITableViewCell

@property (nonatomic, getter=isChecked) BOOL checked;
@property (nonatomic) NSUInteger checkmarkStyle;
@property (nonatomic, getter=internalIsChecked) BOOL internalChecked; // ivar: _internalChecked
@property (nonatomic) NSUInteger internalCheckmarkStyle; // ivar: _internalCheckmarkStyle
@property (retain, nonatomic) UIImageView *leadingCheckmarkView; // ivar: _leadingCheckmarkView
@property (readonly, nonatomic) UILabel *mainDetailLabel; // ivar: _mainDetailLabel
@property (readonly, nonatomic) UILayoutGuide *mainGuide; // ivar: _mainGuide
@property (readonly, nonatomic) UILabel *mainLabel; // ivar: _mainLabel
@property (readonly, nonatomic) UILayoutGuide *mainLabelFirstLineGuide; // ivar: _mainLabelFirstLineGuide
@property (readonly, nonatomic) NSLayoutConstraint *mainLabelLeadingConstraint; // ivar: _mainLabelLeadingConstraint
@property (nonatomic) CGFloat minimumHeight;
@property (readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // ivar: _minimumHeightConstraint
@property (readonly, nonatomic) UILabel *scopeLabel; // ivar: _scopeLabel
@property (readonly, nonatomic) UILayoutGuide *scopeLabelFirstLineGuide; // ivar: _scopeLabelFirstLineGuide


-(BOOL)_isLTR;
-(id)_checkmarkCircleImage;
-(id)_checkmarkCircleImageViewChecked:(BOOL)arg0 ;
-(id)_checkmarkImage;
-(id)_checkmarkImageView;
-(id)_circleImage;
-(id)_clearImage;
-(id)_newLabel;
-(id)_selectedCheckmarkCircleImageView;
-(id)_unselectedCheckmarkCircleImageView;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setCheckMarkStyleLeadingChecked:(BOOL)arg0 ;
-(void)_setSeparatorIndentToMainLabel;
-(void)_setupLayout;
-(void)_setupViews;
-(void)layoutSubviews;


@end


#endif