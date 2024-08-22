// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUFIRMWAREUPDATEITEMPROVIDER_H
#define HUFIRMWAREUPDATEITEMPROVIDER_H

@class HFItemProvider, HMHome, NSSet;


#import "HUInstructionsItem.h"

@interface HUFirmwareUpdateItemProvider : HFItemProvider

@property (copy, nonatomic) id *filter; // ivar: _filter
@property (nonatomic) BOOL hasProvidedInstructionsItem; // ivar: _hasProvidedInstructionsItem
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HUInstructionsItem *instructionsItem; // ivar: _instructionsItem
@property (retain, nonatomic) HFItemProvider *linkedApplicationItemProvider; // ivar: _linkedApplicationItemProvider
@property (retain, nonatomic) NSSet *linkedApplicationItems; // ivar: _linkedApplicationItems
@property (readonly, nonatomic) NSUInteger style; // ivar: _style


+(BOOL)prefersNonBlockingReloads;
+(id)itemComparator:(SEL)arg0 ;
-(id)_effectiveFilter:(SEL)arg0 ;
-(id)_instructionsItemResultsWithSampleLinkedApplicationItem:(id)arg0 numberOfLinkedApplicationItems:(NSInteger)arg1 ;
-(id)_localizedDescriptionForAppName:(id)arg0 accessoriesWithFirmwareUpdates:(id)arg1 visibleAccessoryTileDisplayNames:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 style:(NSUInteger)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif