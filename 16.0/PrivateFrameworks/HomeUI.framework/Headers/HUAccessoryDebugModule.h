// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACCESSORYDEBUGMODULE_H
#define HUACCESSORYDEBUGMODULE_H

@class HFItemModule, HMAccessory, HFStaticItemProvider, HFItem, HMSymptomsHandler;
@protocol HFHomeKitObject;



@interface HUAccessoryDebugModule : HFItemModule

@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) HFStaticItemProvider *debugItemProvider; // ivar: _debugItemProvider
@property (nonatomic) BOOL fake8021xNetworkSymptom;
@property (readonly, nonatomic) HFItem *fake8021xNetworkSymptomItem; // ivar: _fake8021xNetworkSymptomItem
@property (nonatomic) BOOL fakeCaptiveLeaseRenewalSymptom;
@property (readonly, nonatomic) HFItem *fakeCaptiveLeaseRenewalSymptomItem; // ivar: _fakeCaptiveLeaseRenewalSymptomItem
@property (nonatomic) BOOL fakeGeneralFixSymptom;
@property (readonly, nonatomic) HFItem *fakeGeneralFixSymptomItem; // ivar: _fakeGeneralFixSymptomItem
@property (nonatomic) BOOL fakeHardwareFixSymptom;
@property (readonly, nonatomic) HFItem *fakeHardwareFixSymptomItem; // ivar: _fakeHardwareFixSymptomItem
@property (nonatomic) BOOL fakeHomeKitSymptom;
@property (readonly, nonatomic) HFItem *fakeHomeKitSymptomItem; // ivar: _fakeHomeKitSymptomItem
@property (nonatomic) BOOL fakeICloudSymptom;
@property (readonly, nonatomic) HFItem *fakeICloudSymptomItem; // ivar: _fakeICloudSymptomItem
@property (nonatomic) BOOL fakeITunesSymptom;
@property (readonly, nonatomic) HFItem *fakeITunesSymptomItem; // ivar: _fakeITunesSymptomItem
@property (nonatomic) BOOL fakeInternetFixSymptom;
@property (readonly, nonatomic) HFItem *fakeInternetFixSymptomItem; // ivar: _fakeInternetFixSymptomItem
@property (nonatomic) BOOL fakeNetworkNotShareableSymptom;
@property (readonly, nonatomic) HFItem *fakeNetworkNotShareableSymptomItem; // ivar: _fakeNetworkNotShareableSymptomItem
@property (nonatomic) BOOL fakeNetworkProfileFixSymptom;
@property (readonly, nonatomic) HFItem *fakeNetworkProfileFixSymptomItem; // ivar: _fakeNetworkProfileFixSymptomItem
@property (nonatomic) BOOL fakeNetworkProfileInstallSymptom;
@property (readonly, nonatomic) HFItem *fakeNetworkProfileInstallSymptomItem; // ivar: _fakeNetworkProfileInstallSymptomItem
@property (nonatomic) BOOL fakeNetworkStrengthError;
@property (readonly, nonatomic) HFItem *fakeNetworkStrengthErrorItem; // ivar: _fakeNetworkStrengthErrorItem
@property (nonatomic) BOOL fakeStereoPairGeneralSymptom;
@property (readonly, nonatomic) HFItem *fakeStereoPairGeneralSymptomItem; // ivar: _fakeStereoPairGeneralSymptomItem
@property (nonatomic) BOOL fakeStereoPairNotFoundSymptom;
@property (readonly, nonatomic) HFItem *fakeStereoPairNotFoundSymptomItem; // ivar: _fakeStereoPairNotFoundSymptomItem
@property (nonatomic) BOOL fakeStereoPairVersionMismatchSymptom;
@property (readonly, nonatomic) HFItem *fakeStereoPairVersionMismatchSymptomItem; // ivar: _fakeStereoPairVersionMismatchSymptomItem
@property (nonatomic) BOOL fakeUnreachableError;
@property (readonly, nonatomic) HFItem *fakeUnreachableItem; // ivar: _fakeUnreachableItem
@property (nonatomic) BOOL fakeVPNProfileExpiredSymptom;
@property (readonly, nonatomic) HFItem *fakeVPNProfileExpiredSymptomItem; // ivar: _fakeVPNProfileExpiredSymptomItem
@property (nonatomic) BOOL fakeWiFiNetworkMismatchSymptom;
@property (nonatomic) BOOL fakeWiFiPerformanceSymptom;
@property (readonly, nonatomic) HFItem *fakeWiFiPerformanceSymptomItem; // ivar: _fakeWiFiPerformanceSymptomItem
@property (nonatomic) BOOL fakeWiFiSymptom;
@property (readonly, nonatomic) HFItem *fakeWiFiSymptomItem; // ivar: _fakeWiFiSymptomItem
@property (readonly, nonatomic) HFItem *fakeWifiNetworkMismatchSymptomItem; // ivar: _fakeWifiNetworkMismatchSymptomItem
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject; // ivar: _homeKitObject
@property (readonly, nonatomic) HMSymptomsHandler *symptomsHandler; // ivar: _symptomsHandler


-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 homeKitObject:(id)arg1 ;
-(id)itemProviders;
-(void)_pushSymptomUpdate;
-(void)_reloadItemProviders;


@end


#endif