// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPHOTOSSEARCHRESULTSTITLEHEADERCELL_H
#define CKPHOTOSSEARCHRESULTSTITLEHEADERCELL_H

@class UISegmentedControl;


#import "CKSearchResultsTitleHeaderCell.h"

@interface CKPhotosSearchResultsTitleHeaderCell : CKSearchResultsTitleHeaderCell

@property (retain, nonatomic) UISegmentedControl *control; // ivar: _control
@property (nonatomic) CGFloat controlBottomPadding; // ivar: _controlBottomPadding
@property (nonatomic) CGFloat controlTopPadding; // ivar: _controlTopPadding


+(id)reuseIdentifier;
+(id)supplementaryViewType;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_controlIndexDidChange:(id)arg0 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg0 ;
-(void)updateSegmentedControlToFitWidth:(CGFloat)arg0 ;


@end


#endif