// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSEARCHINDEXINGFOOTERCELL_H
#define CKSEARCHINDEXINGFOOTERCELL_H

@class UICollectionReusableView, NSString, UILabel;
@protocol CKSearchResultSupplementryCell;



@interface CKSearchIndexingFooterCell : UICollectionReusableView <CKSearchResultSupplementryCell>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: marginInsets
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (copy, nonatomic) NSString *subtitleString; // ivar: _subtitleString
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) BOOL titleLabelHidden;
@property (copy, nonatomic) NSString *titleString; // ivar: _titleString


+(CGFloat)desiredZPosition;
+(id)reuseIdentifier;
+(id)supplementaryViewType;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif