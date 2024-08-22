// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYCOMMANDDISCOVERABILITYHUDVIEWCELL_H
#define UIKEYCOMMANDDISCOVERABILITYHUDVIEWCELL_H

@class NSArray;


#import "UICollectionViewCell.h"
#import "UIKeyCommandDiscoverabilityHUDColumnView.h"

@interface UIKeyCommandDiscoverabilityHUDViewCell : UICollectionViewCell

@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (nonatomic) BOOL constraintsForTwoColumns; // ivar: _constraintsForTwoColumns
@property (retain, nonatomic) UIKeyCommandDiscoverabilityHUDColumnView *leftColumnView; // ivar: _leftColumnView
@property (retain, nonatomic) UIKeyCommandDiscoverabilityHUDColumnView *rightColumnView; // ivar: _rightColumnView




@end


#endif