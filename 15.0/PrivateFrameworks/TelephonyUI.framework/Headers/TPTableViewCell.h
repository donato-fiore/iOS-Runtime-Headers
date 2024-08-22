// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPTABLEVIEWCELL_H
#define TPTABLEVIEWCELL_H

@class UITableViewCell, UIColor, UIView, NSLayoutConstraint;



@interface TPTableViewCell : UITableViewCell

@property (nonatomic, getter=isAccessiblityConstraintsEnabled) BOOL accessiblityConstraintsEnabled; // ivar: _accessiblityConstraintsEnabled
@property (nonatomic, getter=isConstraintsLoaded) BOOL constraintsLoaded; // ivar: _constraintsLoaded
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIView *foregroundView; // ivar: _foregroundView
@property (readonly, nonatomic) NSLayoutConstraint *foregroundViewBottomAnchorLayoutConstraint; // ivar: _foregroundViewBottomAnchorLayoutConstraint
@property (readonly, nonatomic) NSLayoutConstraint *foregroundViewLeadingAnchorLayoutConstraint; // ivar: _foregroundViewLeadingAnchorLayoutConstraint
@property (nonatomic, getter=isForegroundViewLoaded) BOOL foregroundViewLoaded; // ivar: _foregroundViewLoaded
@property (readonly, nonatomic) NSLayoutConstraint *foregroundViewTopAnchorLayoutConstraint; // ivar: _foregroundViewTopAnchorLayoutConstraint
@property (readonly, nonatomic) NSLayoutConstraint *foregroundViewTrailingAnchorLayoutConstraint; // ivar: _foregroundViewTrailingAnchorLayoutConstraint
@property (readonly, nonatomic) UIEdgeInsets intrinsicSeparatorInset;


+(BOOL)requiresConstraintBasedLayout;
+(struct UIEdgeInsets )separatorInsetForContentSizeCategory:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)commonInit;
-(void)layoutSubviews;
-(void)loadConstraints;
-(void)loadContentView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unloadConstraints;
-(void)updateConstraints;
-(void)updateConstraintsConstants;
-(void)updateFonts;


@end


#endif