// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMATTERSOFTWAREUPDATEPROVIDERDELEGATE_H
#define HMDMATTERSOFTWAREUPDATEPROVIDERDELEGATE_H

@class HMFObject, NSString, HMMTRSoftwareUpdateProvider;
@protocol HMMTRSoftwareUpdateProviderDelegate, HMFLogging, HMDMatterSoftwareUpdateProviderDelegateDataSource;


#import "HMDAccessoryFirmwareUpdateManager.h"
#import "HMDHomeManager.h"

@interface HMDMatterSoftwareUpdateProviderDelegate : HMFObject <HMMTRSoftwareUpdateProviderDelegate, HMFLogging>



@property (weak) HMDAccessoryFirmwareUpdateManager *accessoryFirmwareUpdateManager; // ivar: _accessoryFirmwareUpdateManager
@property (readonly) NSObject<HMDMatterSoftwareUpdateProviderDelegateDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (weak) HMMTRSoftwareUpdateProvider *softwareUpdateProvider; // ivar: _softwareUpdateProvider
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)updateUARPFirmwareVersionForAccessory:(id)arg0 version:(id)arg1 ;
-(id)_accessoryWithPairing:(id)arg0 ;
-(id)_queryImageResponseWithStatus:(id)arg0 delayedActionTime:(id)arg1 ;
-(id)initWithHomeManager:(id)arg0 accessoryFirmwareUpdateManager:(id)arg1 ;
-(id)initWithHomeManager:(id)arg0 accessoryFirmwareUpdateManager:(id)arg1 dataSource:(id)arg2 ;
-(void)applyUpdateWithPairing:(id)arg0 requestParams:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)configureWithSoftwareUpdateProvider:(id)arg0 ;
-(void)notifyUpdateRequestedForHMDHAPAccessory:(id)arg0 ;
-(void)notifyUpdateWithPairing:(id)arg0 params:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)queryImageWithPairing:(id)arg0 requestParams:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)resetOTAProviderStateForHMDHAPAccessory:(id)arg0 ;


@end


#endif