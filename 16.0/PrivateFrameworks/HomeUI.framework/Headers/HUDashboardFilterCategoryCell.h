// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDASHBOARDFILTERCATEGORYCELL_H
#define HUDASHBOARDFILTERCATEGORYCELL_H

@class UICollectionViewListCell, HFItem;
@protocol HUTileCellProtocol, HUReorderableCellProtocol, HUBackgroundEffectViewGrouping;


#import "HUGridCellLayoutOptions.h"

@interface HUDashboardFilterCategoryCell : UICollectionViewListCell <HUTileCellProtocol, HUReorderableCellProtocol>

 {
    ? $__lazy_storage_$_customBackgroundView;
}


@property (nonatomic) NSUInteger backgroundDisplayStyle; // ivar: backgroundDisplayStyle
@property (nonatomic, retain) NSObject<HUBackgroundEffectViewGrouping> *backgroundEffectGrouper; // ivar: backgroundEffectGrouper
@property (nonatomic) BOOL cellContentsHidden; // ivar: areCellContentsHidden
@property (nonatomic, retain) HFItem *item; // ivar: item
@property (nonatomic, retain) HUGridCellLayoutOptions *layoutOptions; // ivar: layoutOptions
@property (nonatomic) BOOL rearranging; // ivar: isRearranging


-(BOOL)areCellContentsHidden;
-(BOOL)isRearranging;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_bridgedUpdateConfigurationUsingState:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif