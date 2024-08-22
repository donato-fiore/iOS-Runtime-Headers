// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUAVAILABLETRIGGERITEMSWITCHCELL_H
#define HUAVAILABLETRIGGERITEMSWITCHCELL_H



#import "HUIconSwitchCell.h"

@interface HUAvailableTriggerItemSwitchCell : HUIconSwitchCell

@property (nonatomic) CGFloat reservedSwitchWidth; // ivar: _reservedSwitchWidth
@property (nonatomic, getter=switchIsHidden) BOOL switchHidden; // ivar: _switchHidden


-(void)updateConstraints;


@end


#endif