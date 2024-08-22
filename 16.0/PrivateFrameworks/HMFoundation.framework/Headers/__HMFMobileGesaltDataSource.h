// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __HMFMOBILEGESALTDATASOURCE_H
#define __HMFMOBILEGESALTDATASOURCE_H

@class NSString;
@protocol HMFSystemInfoNameDataSource, HMFSystemInfoMarketingInformationDataSource, HMFSystemInfoSerialNumberDataSource, HMFSystemInfoProductInfoDataSource, HMFSystemInfoSoftwareVersionDataSource, HMFSystemInfoWiFiDataSource, HMFSystemInfoBluetoothLEDataSource, HMFSystemInfoProductColorDataSource, HMFSystemInfoNameDataSourceDelegate, OS_dispatch_queue;


#import "HMFObject.h"
#import "HMFMACAddress.h"
#import "HMFSoftwareVersion.h"

@interface __HMFMobileGesaltDataSource : HMFObject <HMFSystemInfoNameDataSource, HMFSystemInfoMarketingInformationDataSource, HMFSystemInfoSerialNumberDataSource, HMFSystemInfoProductInfoDataSource, HMFSystemInfoSoftwareVersionDataSource, HMFSystemInfoWiFiDataSource, HMFSystemInfoBluetoothLEDataSource, HMFSystemInfoProductColorDataSource>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) HMFMACAddress *WiFiInterfaceMACAddress; // ivar: _WiFiInterfaceMACAddress
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMFSystemInfoNameDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *model; // ivar: _model
@property (readonly, copy, nonatomic) NSString *modelIdentifier; // ivar: _modelIdentifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) *MGNotificationTokenStruct notificationToken; // ivar: _notificationToken
@property (readonly, nonatomic) NSInteger productClass; // ivar: _productClass
@property (readonly) NSInteger productColor; // ivar: _productColor
@property (readonly, nonatomic) NSInteger productPlatform; // ivar: _productPlatform
@property (readonly, nonatomic) NSInteger productVariant; // ivar: _productVariant
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, copy, nonatomic) NSString *regionInfo; // ivar: _regionInfo
@property (readonly, copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, copy, nonatomic) HMFSoftwareVersion *softwareVersion; // ivar: _softwareVersion
@property (readonly) Class superclass;
@property (readonly) BOOL supportsBLE; // ivar: _supportsBLE


-(BOOL)shouldFetchUserAssignedDeviceName;
-(id)init;
-(void)dealloc;


@end


#endif