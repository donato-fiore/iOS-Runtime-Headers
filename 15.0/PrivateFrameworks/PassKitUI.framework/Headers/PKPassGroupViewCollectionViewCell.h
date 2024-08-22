// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSGROUPVIEWCOLLECTIONVIEWCELL_H
#define PKPASSGROUPVIEWCOLLECTIONVIEWCELL_H



#import "PKDashboardCollectionViewCell.h"
#import "PKPassGroupView.h"

@interface PKPassGroupViewCollectionViewCell : PKDashboardCollectionViewCell

@property (retain, nonatomic) PKPassGroupView *groupView; // ivar: _groupView


-(void)layoutSubviews;


@end


#endif