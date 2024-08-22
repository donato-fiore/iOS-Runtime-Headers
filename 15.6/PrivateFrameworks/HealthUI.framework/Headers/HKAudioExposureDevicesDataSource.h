// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKAUDIOEXPOSUREDEVICESDATASOURCE_H
#define HKAUDIOEXPOSUREDEVICESDATASOURCE_H

@class NSSet, NSDictionary, HKHealthStore, HKObserverSet, HKQuery;

#import <Foundation/Foundation.h>


@interface HKAudioExposureDevicesDataSource : NSObject

@property (readonly, nonatomic) NSInteger deviceCount;
@property (nonatomic) NSUInteger deviceType; // ivar: _deviceType
@property (copy, nonatomic) NSSet *devices; // ivar: _devices
@property (copy, nonatomic) NSDictionary *devicesByName; // ivar: _devicesByName
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKObserverSet *observers; // ivar: _observers
@property (retain, nonatomic) HKQuery *query; // ivar: _query
@property (nonatomic, getter=isReady) BOOL ready; // ivar: _ready


-(id)_localizedNameForDevice:(id)arg0 ;
-(id)_makeDeviceQueryForDeviceType;
-(id)_sampleTypeForDeviceType;
-(id)initWithDeviceType:(NSUInteger)arg0 healthStore:(id)arg1 ;
-(void)_cleanUp;
-(void)_notify_dataSourceIsReady;
-(void)addObserver:(id)arg0 ;
-(void)cancelQuery;
-(void)removeObserver:(id)arg0 ;
-(void)startQuery;


@end


#endif