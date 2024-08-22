// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSEARCHRESULTSHEADERVIEW_H
#define PXSEARCHRESULTSHEADERVIEW_H

@class UICollectionReusableView, NSString, UIButton, UIStackView, UILabel;



@interface PXSearchResultsHeaderView : UICollectionReusableView

@property (retain, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (retain, nonatomic) UIButton *seeAllButton; // ivar: _seeAllButton
@property (copy, nonatomic) id *seeAllButtonHandler; // ivar: _seeAllButtonHandler
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_didSelectSeeAllButton:(id)arg0 ;
-(void)prepareForReuse;
-(void)setupConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAlignmentForTextSize;
-(void)updateStackViewMarginsForTextSize;


@end


#endif