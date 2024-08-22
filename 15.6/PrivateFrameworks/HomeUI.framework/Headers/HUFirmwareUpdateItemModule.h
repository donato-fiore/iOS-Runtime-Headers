// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUFIRMWAREUPDATEITEMMODULE_H
#define HUFIRMWAREUPDATEITEMMODULE_H

@class HFItemModule, NSSet, HMHome;


#import "HUFirmwareUpdateItemProvider.h"

@interface HUFirmwareUpdateItemModule : HFItemModule {
    NSSet *_itemProviders;
}


@property (retain, nonatomic) HUFirmwareUpdateItemProvider *firmwareUpdateItemProvider; // ivar: _firmwareUpdateItemProvider
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 ;
-(id)itemProviders;
-(id)transformedUpdateOutcomeForItem:(id)arg0 proposedOutcome:(id)arg1 ;
-(void)_reloadItemProviders;


@end


#endif