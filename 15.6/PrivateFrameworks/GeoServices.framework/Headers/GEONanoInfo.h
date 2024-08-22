// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEONANOINFO_H
#define GEONANOINFO_H

@class NSConditionLock, NSNumber, NRDevice, NSString;
@protocol NRDevicePropertyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GEONanoInfo : NSObject <NRDevicePropertyObserver>

 {
    NSConditionLock *_pairedDeviceLock;
    NSObject<OS_dispatch_queue> *_nanoregQueue;
    NSNumber *_hasPairedDevice;
    NRDevice *_currentDevice;
    NSString *_deviceSystemVersion;
    NSString *_deviceSystemBuildVersion;
    NSString *_deviceProductType;
    NSNumber *_deviceIsAltAccount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInfo;
-(id)_deviceIsAltAcctBlocking:(BOOL)arg0 ;
-(id)_deviceProductTypeBlocking:(BOOL)arg0 ;
-(id)_deviceSystemBuildVersionBlocking:(BOOL)arg0 ;
-(id)_deviceSystemVersionBlocking:(BOOL)arg0 ;
-(id)_hasPairedDeviceBlocking:(BOOL)arg0 ;
-(id)_observingProperties;
-(id)deviceIsAltAcct;
-(id)deviceIsAltAcctIfAvailable;
-(id)deviceOsVersionIfAvailable;
-(id)deviceProductType;
-(id)deviceProductTypeIfAvailable;
-(id)deviceSystemBuildVersion;
-(id)deviceSystemBuildVersionIfAvailable;
-(id)deviceSystemVersion;
-(id)deviceSystemVersionIfAvailable;
-(id)hasPairedDevice;
-(id)hasPairedDeviceIfAvailable;
-(id)init;
-(void)_readDeviceInfo:(id)arg0 ;
-(void)_startObservingDevice:(id)arg0 ;
-(void)_stopObservingDevice:(id)arg0 ;
-(void)device:(id)arg0 propertyDidChange:(id)arg1 fromValue:(id)arg2 ;
-(void)setupClient;


@end


#endif