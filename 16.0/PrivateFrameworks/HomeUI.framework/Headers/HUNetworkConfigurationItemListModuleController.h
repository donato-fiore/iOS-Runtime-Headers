// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUNETWORKCONFIGURATIONITEMLISTMODULECONTROLLER_H
#define HUNETWORKCONFIGURATIONITEMLISTMODULECONTROLLER_H



#import "HUItemModuleController.h"

@interface HUNetworkConfigurationItemListModuleController : HUItemModuleController

@property (readonly, nonatomic) NSUInteger style; // ivar: _style


-(BOOL)canSelectItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)_viewControllerToPresentForNetworkConfigurationGroupItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(id)initWithModule:(id)arg0 style:(NSUInteger)arg1 ;
-(id)presentNetworkConfigurationSettingsForItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif