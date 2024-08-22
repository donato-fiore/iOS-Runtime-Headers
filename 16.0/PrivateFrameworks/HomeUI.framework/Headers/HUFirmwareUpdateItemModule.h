// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUFIRMWAREUPDATEITEMMODULE_H
#define HUFIRMWAREUPDATEITEMMODULE_H

@class HFItemModule, HMHome;


#import "HUFirmwareUpdateItemProvider.h"

@interface HUFirmwareUpdateItemModule : HFItemModule

@property (retain, nonatomic) HUFirmwareUpdateItemProvider *firmwareUpdateItemProvider; // ivar: _firmwareUpdateItemProvider
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)buildItemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 ;
-(id)transformedUpdateOutcomeForItem:(id)arg0 proposedOutcome:(id)arg1 ;


@end


#endif