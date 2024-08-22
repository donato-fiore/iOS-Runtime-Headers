// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTVVIEWINGPROFILESEDITORITEMMANAGER_H
#define HUTVVIEWINGPROFILESEDITORITEMMANAGER_H

@class HFItemManager;


#import "HUTVViewingProfilesDevicesItemModule.h"

@interface HUTVViewingProfilesEditorItemManager : HFItemManager

@property (readonly, nonatomic) HUTVViewingProfilesDevicesItemModule *tvpDevicesModule; // ivar: _tvpDevicesModule


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 userItem:(id)arg1 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;


@end


#endif