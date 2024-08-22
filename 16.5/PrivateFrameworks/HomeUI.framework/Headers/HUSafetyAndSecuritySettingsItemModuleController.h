// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSAFETYANDSECURITYSETTINGSITEMMODULECONTROLLER_H
#define HUSAFETYANDSECURITYSETTINGSITEMMODULECONTROLLER_H

@class NSString;
@protocol HUUserSwitchCellDelegate, HUBannerViewDelegate, HFHomeManagerObserver, HUSafetyAndSecuritySettingsModuleControllerDelegate;


#import "HUItemModuleController.h"
#import "HUGridLayoutOptions.h"
#import "HUBannerView.h"

@interface HUSafetyAndSecuritySettingsItemModuleController : HUItemModuleController <HUUserSwitchCellDelegate, HUBannerViewDelegate, HFHomeManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUSafetyAndSecuritySettingsModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) HUBannerView *softwareUpdateBannerView; // ivar: _softwareUpdateBannerView
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 delegate:(id)arg1 ;
-(void)bannerView:(id)arg0 footerViewTapped:(id)arg1 ;
-(void)homeManager:(id)arg0 didUpdateHH2State:(BOOL)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)userSwitchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;


@end


#endif