// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUPRIMARYUSERSETTINGSITEMMODULECONTROLLER_H
#define HUPRIMARYUSERSETTINGSITEMMODULECONTROLLER_H

@protocol HUPrimaryUserSettingsItemModuleControllerDelegate;


#import "HUItemTableModuleController.h"

@interface HUPrimaryUserSettingsItemModuleController : HUItemTableModuleController

@property (weak, nonatomic) NSObject<HUPrimaryUserSettingsItemModuleControllerDelegate> *delegate; // ivar: _delegate


-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)updatePrimaryUserSelectionType:(NSUInteger)arg0 user:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif