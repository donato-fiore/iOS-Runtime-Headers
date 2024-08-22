// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUHOMEKITACCESSORYSETTINGSITEMMODULECONTROLLER_H
#define HUHOMEKITACCESSORYSETTINGSITEMMODULECONTROLLER_H

@class NSMapTable, NSString;
@protocol HUSwitchCellDelegate, HUHomeKitAccessorySettingsItemModuleControllerDelegate;


#import "HUItemModuleController.h"

@interface HUHomeKitAccessorySettingsItemModuleController : HUItemModuleController <HUSwitchCellDelegate>



@property (retain) NSMapTable *cellToItemMap; // ivar: _cellToItemMap
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUHomeKitAccessorySettingsItemModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 delegate:(id)arg1 ;
-(void)_updateSwitchSettingItem:(id)arg0 forCell:(id)arg1 withValue:(BOOL)arg2 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif