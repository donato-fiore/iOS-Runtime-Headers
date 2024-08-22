// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOLLECTIONVIEWDATASOURCECELL_H
#define CKCOLLECTIONVIEWDATASOURCECELL_H

@class UICollectionViewCell;


#import "CKComponentRootView.h"

@interface CKCollectionViewDataSourceCell : UICollectionViewCell

@property (readonly, nonatomic) CKComponentRootView *rootView; // ivar: _rootView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setAlpha:(CGFloat)arg0 ;


@end


#endif