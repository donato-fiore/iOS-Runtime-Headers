// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLHIDMANAGER_H
#define CLHIDMANAGER_H

@class NSMutableArray, HIDManager;
@protocol CLHidManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CLHidManager : NSObject

@property (retain, nonatomic) NSMutableArray *clientDevices; // ivar: _clientDevices
@property (nonatomic) NSObject<CLHidManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, nonatomic) HIDManager *manager; // ivar: _manager


-(id)createDeviceForMatchingDictionary:(id)arg0 ;
-(id)getClientDeviceMatchingDict:(id)arg0 ;
-(id)getClientDeviceMatchingHIDDevice:(id)arg0 ;
-(id)getHidDeviceFromEnumeratedDevicesMatching:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)registerForDeviceMatching:(id)arg0 ;
-(void)activateClientDevice:(id)arg0 ;
-(void)dealloc;
-(void)sendMonitorUpdateForDevice:(id)arg0 added:(BOOL)arg1 ;
-(void)unregisterForDeviceMatching:(id)arg0 ;
-(void)updateClientDeviceWithHidDevice:(id)arg0 added:(BOOL)arg1 ;


@end


#endif