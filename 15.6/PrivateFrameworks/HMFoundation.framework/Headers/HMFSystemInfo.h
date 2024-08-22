// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFSYSTEMINFO_H
#define HMFSYSTEMINFO_H

@class NSString;
@protocol HMFSystemInfoNameDataSourceDelegate, HMFSystemInfoMigrationDataSourceDelegate, HMFSystemInfoWiFiDataSource, HMFSystemInfoBluetoothLEDataSource, HMFSystemInfoMarketingInformationDataSource, HMFSystemInfoMigrationDataSource, HMFSystemInfoNameDataSource, HMFSystemInfoProductColorDataSource, HMFSystemInfoProductInfoDataSource, HMFSystemInfoSerialNumberDataSource, HMFSystemInfoSoftwareVersionDataSource;


#import "HMFObject.h"
#import "HMFMACAddress.h"
#import "HMFSoftwareVersion.h"

@interface HMFSystemInfo : HMFObject <HMFSystemInfoNameDataSourceDelegate, HMFSystemInfoMigrationDataSourceDelegate>



@property (readonly, nonatomic) NSObject<HMFSystemInfoWiFiDataSource> *WiFiDataSource; // ivar: _WiFiDataSource
@property (readonly, copy) HMFMACAddress *WiFiInterfaceMACAddress;
@property (readonly, nonatomic) NSObject<HMFSystemInfoBluetoothLEDataSource> *bluetoothLEDataSource; // ivar: _bluetoothLEDataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HMFSystemInfoMarketingInformationDataSource> *marketingDataSource; // ivar: _marketingDataSource
@property (readonly, getter=isMigrating) BOOL migrating;
@property (readonly, nonatomic) NSObject<HMFSystemInfoMigrationDataSource> *migrationDataSource; // ivar: _migrationDataSource
@property (readonly, copy) NSString *model;
@property (readonly, copy) NSString *modelIdentifier;
@property (readonly, copy) NSString *name;
@property (readonly, nonatomic) NSObject<HMFSystemInfoNameDataSource> *nameDataSource; // ivar: _nameDataSource
@property (readonly) NSInteger productClass;
@property (readonly) NSInteger productColor;
@property (readonly, nonatomic) NSObject<HMFSystemInfoProductColorDataSource> *productColorDataSource; // ivar: _productColorDataSource
@property (readonly, nonatomic) NSObject<HMFSystemInfoProductInfoDataSource> *productInfoDataSource; // ivar: _productInfoDataSource
@property (readonly) NSInteger productPlatform;
@property (readonly) NSInteger productVariant;
@property (readonly, copy) NSString *regionInfo;
@property (readonly, copy) NSString *serialNumber;
@property (readonly, nonatomic) NSObject<HMFSystemInfoSerialNumberDataSource> *serialNumberDataSource; // ivar: _serialNumberDataSource
@property (readonly, copy) HMFSoftwareVersion *softwareVersion;
@property (readonly, nonatomic) NSObject<HMFSystemInfoSoftwareVersionDataSource> *softwareVersionDataSource; // ivar: _softwareVersionDataSource
@property (readonly) Class superclass;
@property (readonly) BOOL supportsBLE;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)systemInfo;
-(void)dataSource:(id)arg0 didUpdateMigrating:(BOOL)arg1 ;
-(void)dataSource:(id)arg0 didUpdateName:(id)arg1 ;


@end


#endif