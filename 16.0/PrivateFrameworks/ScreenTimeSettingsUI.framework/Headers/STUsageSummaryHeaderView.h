// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUSAGESUMMARYHEADERVIEW_H
#define STUSAGESUMMARYHEADERVIEW_H

@class UISegmentedControl;
@protocol PSHeaderFooterView;


#import "STTableViewHeaderFooterView.h"

@interface STUsageSummaryHeaderView : STTableViewHeaderFooterView <PSHeaderFooterView>



@property (readonly, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl


-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithSpecifier:(id)arg0 ;


@end


#endif