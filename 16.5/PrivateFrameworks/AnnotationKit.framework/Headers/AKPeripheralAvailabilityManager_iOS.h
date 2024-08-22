// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKPERIPHERALAVAILABILITYMANAGER_IOS_H
#define AKPERIPHERALAVAILABILITYMANAGER_IOS_H


#import <Foundation/Foundation.h>


@interface AKPeripheralAvailabilityManager_iOS : NSObject {
    *__IOHIDManager stylusHidManager;
}


@property NSUInteger currentAvailability; // ivar: _currentAvailability


+(BOOL)onlyDrawWithApplePencil;
-(id)init;
-(void)dealloc;
-(void)postConnectionStatusNotification;
-(void)startMonitoringForPeripheralConnection;
-(void)stopMonitoringForPeripheralConnection;
-(void)teardown;


@end


#endif