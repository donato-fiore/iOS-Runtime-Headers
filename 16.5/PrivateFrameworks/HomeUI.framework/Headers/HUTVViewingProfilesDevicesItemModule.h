// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTVVIEWINGPROFILESDEVICESITEMMODULE_H
#define HUTVVIEWINGPROFILESDEVICESITEMMODULE_H

@class HFItemModule, HMMediaContentProfileAccessControl, HMHome, NSSet, HFUserItem, HFItemProvider, NSArray;



@interface HUTVViewingProfilesDevicesItemModule : HFItemModule

@property (readonly, nonatomic) HMMediaContentProfileAccessControl *accessControl;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSSet *itemProviders; // ivar: _itemProviders
@property (readonly, nonatomic) HFUserItem *sourceItem; // ivar: _sourceItem
@property (retain, nonatomic) HFItemProvider *viewingProfileItemProvider; // ivar: _viewingProfileItemProvider
@property (copy, nonatomic) NSArray *viewingProfilesDevices;


-(BOOL)isTVViewingProfileDevice:(id)arg0 ;
-(id)_commitUpdateToAccessControl:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 userItem:(id)arg1 ;
-(void)_createItemProviders;
-(void)turnOnTVViewingProfilesForAllDevices;


@end


#endif