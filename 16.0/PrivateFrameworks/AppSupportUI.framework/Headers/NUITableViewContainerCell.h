// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUITABLEVIEWCONTAINERCELL_H
#define NUITABLEVIEWCONTAINERCELL_H

@class UITableViewCell;


#import "NUIContainerView.h"

@interface NUITableViewContainerCell : UITableViewCell

@property (readonly, nonatomic) NUIContainerView *containerView; // ivar: _containerView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;


@end


#endif