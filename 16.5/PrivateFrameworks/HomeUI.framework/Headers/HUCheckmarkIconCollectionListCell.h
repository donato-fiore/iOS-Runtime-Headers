// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCHECKMARKICONCOLLECTIONLISTCELL_H
#define HUCHECKMARKICONCOLLECTIONLISTCELL_H

@class UICellAccessory;


#import "HUIconCollectionListCell.h"
#import "HUCheckmarkAccessoryView.h"

@interface HUCheckmarkIconCollectionListCell : HUIconCollectionListCell

@property (readonly, nonatomic) HUCheckmarkAccessoryView *checkmarkAccessoryView; // ivar: _checkmarkAccessoryView
@property (readonly, nonatomic) UICellAccessory *checkmarkCellAccessory; // ivar: _checkmarkCellAccessory
@property (nonatomic) BOOL disablesCheckmark; // ivar: _disablesCheckmark
@property (nonatomic) BOOL hidesCheckmark; // ivar: _hidesCheckmark


-(id)_buildAccessories;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif