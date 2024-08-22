// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUACCESSORYSETTINGSPROFILEMODULECONTROLLER_H
#define HUACCESSORYSETTINGSPROFILEMODULECONTROLLER_H

@class NSString;
@protocol MCProfileViewControllerDelegate, HUAccessorySettingsProfileModuleControllerDelegate;


#import "HUItemModuleController.h"
#import "HUAccessorySettingsProfileModule.h"

@interface HUAccessorySettingsProfileModuleController : HUItemModuleController <MCProfileViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUAccessorySettingsProfileModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUAccessorySettingsProfileModule *module;
@property (readonly) Class superclass;


-(BOOL)profileViewControllerIsProfileInstalled;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(void)profileViewControllerDidSelectRemoveProfile:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;


@end


#endif