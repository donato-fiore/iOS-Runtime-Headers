// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLPRESENTATIONITEMMANAGER_H
#define HUQUICKCONTROLPRESENTATIONITEMMANAGER_H

@class HFItemManager, HFAccessoryItemProvider, HFCameraItemProvider, HFGenericAccessoryItemProvider, NSUUID, HFMediaAccessoryItemProvider, HFProgrammableSwitchItemProvider, HFServiceItemProvider, HFTargetControlItemProvider;



@interface HUQuickControlPresentationItemManager : HFItemManager

@property (retain, nonatomic) HFAccessoryItemProvider *accessoryItemProvider; // ivar: _accessoryItemProvider
@property (retain, nonatomic) HFCameraItemProvider *cameraItemProvider; // ivar: _cameraItemProvider
@property (retain, nonatomic) HFGenericAccessoryItemProvider *genericItemProvider; // ivar: _genericItemProvider
@property (readonly, nonatomic) NSUUID *homeKitObjectUUID; // ivar: _homeKitObjectUUID
@property (retain, nonatomic) HFMediaAccessoryItemProvider *mediaAccessoryItemProvider; // ivar: _mediaAccessoryItemProvider
@property (readonly, nonatomic) NSUInteger presentationItemType; // ivar: _presentationItemType
@property (retain, nonatomic) HFProgrammableSwitchItemProvider *programmableSwitchItemProvider; // ivar: _programmableSwitchItemProvider
@property (retain, nonatomic) HFServiceItemProvider *serviceItemProvider; // ivar: _serviceItemProvider
@property (retain, nonatomic) HFTargetControlItemProvider *targetControlItemProvider; // ivar: _targetControlItemProvider


-(BOOL)_shouldDisableOptionalDataDuringFastInitialUpdate;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)initWithHomeKitObjectUUID:(id)arg0 type:(NSUInteger)arg1 ;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg0 ;


@end


#endif