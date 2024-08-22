// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHRESULTSHEADERVIEW_H
#define PXSEARCHRESULTSHEADERVIEW_H

@class UICollectionReusableView, NSArray, NSString, UIButton, UILabel;



@interface PXSearchResultsHeaderView : UICollectionReusableView

@property (retain, nonatomic) NSArray *largeTextSizeConstraints; // ivar: _largeTextSizeConstraints
@property (nonatomic) BOOL largeTextSizeConstraintsAreActive; // ivar: _largeTextSizeConstraintsAreActive
@property (retain, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (retain, nonatomic) UIButton *seeAllButton; // ivar: _seeAllButton
@property (copy, nonatomic) id *seeAllButtonHandler; // ivar: _seeAllButtonHandler
@property (retain, nonatomic) NSArray *smallAndMediumTextSizeConstraints; // ivar: _smallAndMediumTextSizeConstraints
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)headerViewHeight;
+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_didSelectSeeAllButton:(id)arg0 ;
-(void)prepareForReuse;
-(void)setupConstraintsForTextSize;
-(void)setupLargeTextConstaints;
-(void)setupSmallAndMediumTextConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif