// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIMULTIRESULTAPPCOLLECTIONCELL_H
#define SEARCHUIMULTIRESULTAPPCOLLECTIONCELL_H

@class UICollectionViewCell;


#import "SearchUIHomeScreenAppIconView.h"

@interface SearchUIMultiResultAppCollectionCell : UICollectionViewCell

@property (retain) SearchUIHomeScreenAppIconView *appIconView; // ivar: _appIconView


-(BOOL)_disableRasterizeInAnimations;
-(NSInteger)_focusItemDeferralMode;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateWithResult:(id)arg0 ;


@end


#endif