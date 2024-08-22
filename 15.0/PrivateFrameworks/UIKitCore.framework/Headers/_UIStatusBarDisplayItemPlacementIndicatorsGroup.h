// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARDISPLAYITEMPLACEMENTINDICATORSGROUP_H
#define _UISTATUSBARDISPLAYITEMPLACEMENTINDICATORSGROUP_H

@class UIStatusBarDisplayItemPlacementGroup, NSArray;


#import "_UIStatusBarDisplayItemPlacement.h"

@interface _UIStatusBarDisplayItemPlacementIndicatorsGroup : UIStatusBarDisplayItemPlacementGroup

@property (readonly, nonatomic) _UIStatusBarDisplayItemPlacement *bluetoothInsetPaddingItem; // ivar: _bluetoothInsetPaddingItem
@property (readonly, copy, nonatomic) NSArray *stablePlacements; // ivar: _stablePlacements
@property (readonly, copy, nonatomic) NSArray *unstablePlacements; // ivar: _unstablePlacements


+(id)activityItemDisplayIdentifier;
+(id)groupWithHighPriority:(NSInteger)arg0 lowPriority:(NSInteger)arg1 bluetoothPaddingInset:(CGFloat)arg2 ;


@end


#endif