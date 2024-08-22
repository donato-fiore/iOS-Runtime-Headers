// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCROBRAILLEDISPLAYAUTODETECTOR_H
#define SCROBRAILLEDISPLAYAUTODETECTOR_H

@class NSMutableDictionary;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SCROBrailleDisplayAutoDetector : NSObject {
    NSObject<OS_dispatch_source> *_serialSource;
    BOOL _isDetectingDisplays;
    *IONotificationPort _notificationPort;
    NSMutableDictionary *_iteratorDict;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedDetector;
+(void)initialize;
-(BOOL)_serialDataMatchesDriver:(id)arg0 driverBundleIdentifiers:(id)arg1 fileDescriptor:(int)arg2 ;
-(BOOL)isAutoDetectEnabled;
-(id)_driverBundleIdentifiers;
-(id)_serialPortMatchingDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_autodetectIOServices:(id)arg0 ;
-(void)_detectSerialPorts:(id)arg0 ;
-(void)_initializeAutodetectSerialPorts:(id)arg0 ;
-(void)_openSerialPortService:(id)arg0 sortedDriverBundleIdentifiers:(id)arg1 ;
-(void)_registerForSerialPortNotifications;
-(void)detectDisplays;
-(void)serialPortsWerePublished:(unsigned int)arg0 ;
-(void)stopDetectingDisplays;


@end


#endif