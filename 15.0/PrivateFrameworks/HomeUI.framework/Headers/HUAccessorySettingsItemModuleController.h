// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUACCESSORYSETTINGSITEMMODULECONTROLLER_H
#define HUACCESSORYSETTINGSITEMMODULECONTROLLER_H

@class NSMapTable, NSString, NSMutableSet;
@protocol HUSliderValueTableViewCellDelegate, HUSwitchCellDelegate, HUStepperCellDelegate, HUAccessorySettingsItemModuleControllerDelegate;


#import "HUItemTableModuleController.h"
#import "HUAccessorySettingsItemModule.h"

@interface HUAccessorySettingsItemModuleController : HUItemTableModuleController <HUSliderValueTableViewCellDelegate, HUSwitchCellDelegate, HUStepperCellDelegate>



@property (retain) NSMapTable *cellToItemMap; // ivar: _cellToItemMap
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUAccessorySettingsItemModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUAccessorySettingsItemModule *module;
@property (retain) NSMutableSet *registeredButtonFutures; // ivar: _registeredButtonFutures
@property (readonly) Class superclass;


-(BOOL)canSelectItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(id)initWithModule:(id)arg0 delegate:(id)arg1 ;
-(void)_handleButtonPress:(id)arg0 ;
-(void)_registerButtonActionHandler:(id)arg0 item:(id)arg1 ;
-(void)_selectOptionItem:(id)arg0 ;
-(void)_setupCellAccessoryType:(id)arg0 forItem:(id)arg1 withKey:(id)arg2 ;
-(void)_setupSliderCell:(id)arg0 forMinKey:(id)arg1 maxKey:(id)arg2 ;
-(void)_updateSwitchSettingItem:(id)arg0 withValue:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)sliderValueTableViewCell:(id)arg0 didChangeValue:(CGFloat)arg1 ;
-(void)stepperCell:(id)arg0 steppedToValue:(id)arg1 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif