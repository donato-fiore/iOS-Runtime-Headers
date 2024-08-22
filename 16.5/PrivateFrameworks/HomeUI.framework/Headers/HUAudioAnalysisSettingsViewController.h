// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUAUDIOANALYSISSETTINGSVIEWCONTROLLER_H
#define HUAUDIOANALYSISSETTINGSVIEWCONTROLLER_H

@class NSString, HMHome, HFItem<HFServiceLikeItem>;
@protocol HUAccessorySettingsDetailsViewControllerProtocol;


#import "HUItemTableViewController.h"
#import "HUAudioAnalysisSettingsItemModuleController.h"

@interface HUAudioAnalysisSettingsViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HUAudioAnalysisSettingsItemModuleController *moduleController; // ivar: _moduleController
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *serviceItem; // ivar: _serviceItem
@property (readonly) Class superclass;


-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initWithAccessoryGroupItem:(id)arg0 ;
-(id)initWithAccessorySettingItem:(id)arg0 ;
-(id)initWithAccessorySettingItem:(id)arg0 module:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;


@end


#endif