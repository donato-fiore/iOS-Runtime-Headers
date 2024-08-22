// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMPONBOARDINGMULTIFEATUREHEADERVIEW_H
#define AMPONBOARDINGMULTIFEATUREHEADERVIEW_H

@class UIScrollView, NSArray, UILabel;



@interface AMPOnboardingMultiFeatureHeaderView : UIScrollView

@property (nonatomic) CGFloat containerHeight; // ivar: _containerHeight
@property (retain, nonatomic) NSArray *featureViews; // ivar: _featureViews
@property (nonatomic) BOOL isPresentedInFormSheet; // ivar: _isPresentedInFormSheet
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFeatures:(id)arg0 ;
-(void)adjustedContentInsetDidChange;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContentSize;


@end


#endif