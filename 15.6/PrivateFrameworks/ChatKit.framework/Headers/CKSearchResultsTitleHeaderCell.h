// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSEARCHRESULTSTITLEHEADERCELL_H
#define CKSEARCHRESULTSTITLEHEADERCELL_H

@class UICollectionReusableView, NSString, UIVisualEffectView, UILabel, UIButton, CALayer;
@protocol CKSearchResultSupplementryCell, CKSearchResultsTitleHeaderCellDelegate;



@interface CKSearchResultsTitleHeaderCell : UICollectionReusableView <CKSearchResultSupplementryCell>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKSearchResultsTitleHeaderCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIVisualEffectView *macBackgroundVisualEffectView; // ivar: _macBackgroundVisualEffectView
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: marginInsets
@property (nonatomic) NSUInteger sectionIndex; // ivar: _sectionIndex
@property (retain, nonatomic) UILabel *sectionTitle; // ivar: _sectionTitle
@property (retain, nonatomic) UIButton *showAllButton; // ivar: _showAllButton
@property (readonly) Class superclass;
@property (nonatomic) CGFloat titleBottomPadding; // ivar: _titleBottomPadding
@property (nonatomic) CGFloat titleTopPadding; // ivar: _titleTopPadding
@property (retain, nonatomic) CALayer *topHairline; // ivar: _topHairline
@property (nonatomic) BOOL useMacSidebarVisualEffectView; // ivar: _useMacSidebarVisualEffectView


+(CGFloat)desiredZPosition;
+(id)reuseIdentifier;
+(id)supplementaryViewType;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_showAllButtonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setTitle:(id)arg0 ;


@end


#endif