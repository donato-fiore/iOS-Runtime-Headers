// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUEDITROOMITEMMANAGER_H
#define HUEDITROOMITEMMANAGER_H

@class HFItemManager, HFStaticItem, HFRoomBuilder, HFZoneModule;



@interface HUEditRoomItemManager : HFItemManager

@property (retain, nonatomic) HFStaticItem *cameraItem; // ivar: _cameraItem
@property (retain, nonatomic) HFStaticItem *chooseWallpaperItem; // ivar: _chooseWallpaperItem
@property (retain, nonatomic) HFStaticItem *nameItem; // ivar: _nameItem
@property (retain, nonatomic) HFStaticItem *removeItem; // ivar: _removeItem
@property (retain, nonatomic) HFRoomBuilder *roomBuilder; // ivar: _roomBuilder
@property (retain, nonatomic) HFStaticItem *wallpaperPickerItem; // ivar: _wallpaperPickerItem
@property (retain, nonatomic) HFStaticItem *wallpaperThumbnailItem; // ivar: _wallpaperThumbnailItem
@property (retain, nonatomic) HFZoneModule *zoneModule; // ivar: _zoneModule


-(BOOL)_canDeleteRoom;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithRoomBuilder:(id)arg0 delegate:(id)arg1 ;


@end


#endif