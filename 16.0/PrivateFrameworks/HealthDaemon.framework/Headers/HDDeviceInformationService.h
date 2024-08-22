// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDEVICEINFORMATIONSERVICE_H
#define HDDEVICEINFORMATIONSERVICE_H

@class NSMutableDictionary, NSString, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;


#import "HDHealthService.h"

@interface HDDeviceInformationService : HDHealthService

@property (retain, nonatomic) NSMutableDictionary *characteristics; // ivar: _characteristics
@property (nonatomic) BOOL deviceInformationHasBeenLoaded; // ivar: _deviceInformationHasBeenLoaded
@property (nonatomic) BOOL fetchLimitedCharacteristics; // ivar: _fetchLimitedCharacteristics
@property (readonly) NSString *firmwareRevision;
@property (readonly) NSString *hardwareRevision;
@property (readonly) NSString *manufacturerName;
@property (readonly) NSString *modelNumber;
@property (retain, nonatomic) NSMutableArray *pendingDeviceInformationLoadedBlocks; // ivar: _pendingDeviceInformationLoadedBlocks
@property (retain, nonatomic) NSMutableSet *propertiesLeftToFetch; // ivar: _propertiesLeftToFetch
@property (retain, nonatomic) NSMutableDictionary *propertyValues; // ivar: _propertyValues
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *softwareRevision;


+(NSInteger)serviceType;
+(id)implementedProperties;
+(id)serviceUUID;
-(id)initWithServiceManager:(id)arg0 peripheral:(id)arg1 advertisementData:(id)arg2 profile:(id)arg3 ;
-(void)performWhenDeviceInformationHasBeenLoaded:(id)arg0 ;
-(void)peripheral:(id)arg0 didDiscoverCharacteristic:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 updateTime:(id)arg2 error:(id)arg3 ;
-(void)readProperty:(id)arg0 ;


@end


#endif