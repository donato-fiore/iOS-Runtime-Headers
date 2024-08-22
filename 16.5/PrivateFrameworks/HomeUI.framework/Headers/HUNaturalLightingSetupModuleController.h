// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUNATURALLIGHTINGSETUPMODULECONTROLLER_H
#define HUNATURALLIGHTINGSETUPMODULECONTROLLER_H



#import "HUItemModuleController.h"
#import "HUNaturalLightingSetupModule.h"

@interface HUNaturalLightingSetupModuleController : HUItemModuleController

@property (retain, nonatomic) HUNaturalLightingSetupModule *module;


-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif