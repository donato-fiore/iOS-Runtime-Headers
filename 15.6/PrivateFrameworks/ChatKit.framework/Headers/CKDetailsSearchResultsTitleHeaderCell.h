// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDETAILSSEARCHRESULTSTITLEHEADERCELL_H
#define CKDETAILSSEARCHRESULTSTITLEHEADERCELL_H

@class CALayer;
@protocol CKDetailsSearchResultsTitleHeaderCellDelegate;


#import "CKSearchResultsTitleHeaderCell.h"

@interface CKDetailsSearchResultsTitleHeaderCell : CKSearchResultsTitleHeaderCell

@property (retain, nonatomic) CALayer *bottomHairline; // ivar: _bottomHairline
@property (nonatomic) NSObject<CKDetailsSearchResultsTitleHeaderCellDelegate> *detailsViewDelegate; // ivar: _detailsViewDelegate


+(id)reuseIdentifier;
+(id)supplementaryViewType;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_showAllButtonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg0 ;


@end


#endif