// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMESHHOMEKITADDON_H
#define COMESHHOMEKITADDON_H



#import "COMeshAddOn.h"
#import "COHomeKitAdapter.h"

@interface COMeshHomeKitAddOn : COMeshAddOn

@property (readonly, nonatomic) COHomeKitAdapter *adapter; // ivar: _adapter


-(id)init;
-(id)initWithAdapter:(id)arg0 ;
-(id)requestSettingsForKeyPath:(id)arg0 onAccessory:(id)arg1 ;
-(void)accessoryCollectionSetting:(id)arg0 addItem:(id)arg1 completionHandler:(id)arg2 ;
-(void)accessoryCollectionSetting:(id)arg0 removeItem:(id)arg1 completionHandler:(id)arg2 ;
-(void)accessoryCollectionSetting:(id)arg0 replaceItem:(id)arg1 withItem:(id)arg2 completionHandler:(id)arg3 ;
-(void)accessoryCollectionSetting:(id)arg0 replaceItems:(id)arg1 withItems:(id)arg2 completionHandler:(id)arg3 ;
-(void)accessorySetting:(id)arg0 updateValue:(id)arg1 completionHandler:(id)arg2 ;
-(void)didAddToMeshController:(id)arg0 ;
-(void)handleHomeKitCollectionSettingUpdateRequest:(id)arg0 callback:(id)arg1 ;
-(void)handleHomeKitSettingUpdateRequest:(id)arg0 callback:(id)arg1 ;
-(void)handleHomeKitSettingsRequest:(id)arg0 callback:(id)arg1 ;
-(void)willRemoveFromMeshController:(id)arg0 ;


@end


#endif