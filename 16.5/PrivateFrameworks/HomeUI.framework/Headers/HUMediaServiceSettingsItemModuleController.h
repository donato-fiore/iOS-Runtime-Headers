// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMEDIASERVICESETTINGSITEMMODULECONTROLLER_H
#define HUMEDIASERVICESETTINGSITEMMODULECONTROLLER_H

@protocol HUMediaServiceSettingsItemModuleControllerDelegate;


#import "HUItemModuleController.h"

@interface HUMediaServiceSettingsItemModuleController : HUItemModuleController

@property (weak, nonatomic) NSObject<HUMediaServiceSettingsItemModuleControllerDelegate> *delegate; // ivar: _delegate


-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif