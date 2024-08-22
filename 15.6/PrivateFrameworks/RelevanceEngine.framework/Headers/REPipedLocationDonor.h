// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REPIPEDLOCATIONDONOR_H
#define REPIPEDLOCATIONDONOR_H

@class NSXPCConnection, CLLocation, NSLock, NSString;
@protocol REPipedLocationReceiver, OS_dispatch_queue;


#import "RESingleton.h"
#import "REObserverStore.h"

@interface REPipedLocationDonor : RESingleton <REPipedLocationReceiver>

 {
    REObserverStore *_observers;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    CLLocation *_location;
    NSLock *_locationAccessLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly) Class superclass;


+(void)_saveLocationIntoDefaultsWithLocation:(id)arg0 ;
-(id)_init;
-(void)_handleInvalidation;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setConnection:(id)arg0 ;
-(void)updateLocation:(id)arg0 ;


@end


#endif