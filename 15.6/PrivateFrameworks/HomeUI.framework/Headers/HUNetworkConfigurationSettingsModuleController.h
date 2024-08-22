// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUNETWORKCONFIGURATIONSETTINGSMODULECONTROLLER_H
#define HUNETWORKCONFIGURATIONSETTINGSMODULECONTROLLER_H

@class NSString;
@protocol HUNetworkConfigurationSettingsModuleDelegate, HUTappableTextViewDelegate;


#import "HUItemModuleController.h"

@interface HUNetworkConfigurationSettingsModuleController : HUItemModuleController <HUNetworkConfigurationSettingsModuleDelegate, HUTappableTextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSelectItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(void)_presentNetworkConfigurationSettingsMismatchViewController;
-(void)networkConfigurationSettingsModuleUpdateDidTimeout:(id)arg0 ;
-(void)tappableTextView:(id)arg0 tappedAtIndex:(NSUInteger)arg1 withAttributes:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif