// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUICOMMONCOLLECTIONVIEWCELL_H
#define AMSUICOMMONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell;


#import "AMSUICommonView.h"

@interface AMSUICommonCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) AMSUICommonView *contentView;
@property (readonly, nonatomic) AMSUICommonView *underlyingContentView; // ivar: _underlyingContentView


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tintColor;
-(void)_setup;
-(void)layoutSubviews;


@end


#endif