// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUICOLLECTIONVIEWCONTAINERCELL_H
#define NUICOLLECTIONVIEWCONTAINERCELL_H

@class UICollectionViewCell;


#import "NUIContainerView.h"

@interface NUICollectionViewContainerCell : UICollectionViewCell

@property (readonly, nonatomic) NUIContainerView *containerView; // ivar: _containerView


+(Class)_contentViewClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;


@end


#endif