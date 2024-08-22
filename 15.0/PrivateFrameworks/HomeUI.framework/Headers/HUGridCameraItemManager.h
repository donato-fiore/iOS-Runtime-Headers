// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUGRIDCAMERAITEMMANAGER_H
#define HUGRIDCAMERAITEMMANAGER_H

@class HFItemManager, HFCameraItemProvider, HFReorderableHomeKitItemList, HMRoom;



@interface HUGridCameraItemManager : HFItemManager

@property (retain, nonatomic) HFCameraItemProvider *cameraItemProvider; // ivar: _cameraItemProvider
@property (retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableCameraList; // ivar: _clientReorderableCameraList
@property (nonatomic) BOOL onlyShowsFavorites; // ivar: _onlyShowsFavorites
@property (retain, nonatomic) HFReorderableHomeKitItemList *reorderableCameraList;
@property (retain, nonatomic) HMRoom *room; // ivar: _room


-(BOOL)_requiresNotificationsForCharacteristic:(id)arg0 ;
-(BOOL)shouldPerformInitialLoadOnMainThread;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_comparatorForSectionIdentifier:(SEL)arg0 ;
-(id)_itemForSorting;
-(id)cameraItemAssociatedWithCameraProfile:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 room:(id)arg1 ;
-(id)matchingItemForHomeKitObject:(id)arg0 ;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg0 ;
-(void)_updateFilters;


@end


#endif