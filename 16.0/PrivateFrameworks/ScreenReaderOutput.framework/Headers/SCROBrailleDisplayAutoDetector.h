// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCROBRAILLEDISPLAYAUTODETECTOR_H
#define SCROBRAILLEDISPLAYAUTODETECTOR_H

@class NSMutableDictionary, NSMutableArray, CBCentralManager, NSString;
@protocol CBCentralManagerDelegate, CBPeripheralDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SCROBrailleDisplayAutoDetector : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>

 {
    NSObject<OS_dispatch_source> *_serialSource;
    BOOL _isDetectingDisplays;
    *IONotificationPort _notificationPort;
    NSMutableDictionary *_iteratorDict;
    NSMutableArray *_bleIdentifiers;
}


@property (retain) CBCentralManager *centralManager; // ivar: _centralManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedDetector;
+(void)initialize;
-(BOOL)_serialDataMatchesDriver:(id)arg0 driverBundleIdentifiers:(id)arg1 fileDescriptor:(int)arg2 ;
-(BOOL)isAutoDetectEnabled;
-(id)_driverBundleIdentifiers;
-(id)_serialPortMatchingDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_addDotPadPeripheral:(id)arg0 central:(id)arg1 ;
-(void)_autodetectIOServices:(id)arg0 ;
-(void)_detectSerialPorts:(id)arg0 ;
-(void)_initializeAutodetectSerialPorts:(id)arg0 ;
-(void)_openSerialPortService:(id)arg0 sortedDriverBundleIdentifiers:(id)arg1 ;
-(void)_registerForSerialPortNotifications;
-(void)addAutodetectBLEIdentifier:(id)arg0 ;
-(void)centralManager:(id)arg0 didDisconnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)detectDisplays;
-(void)removeAutodetectBLEIdentifier:(id)arg0 ;
-(void)serialPortsWerePublished:(unsigned int)arg0 ;
-(void)startBLEAutodetect;
-(void)stopDetectingDisplays;


@end


#endif