// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCUWIFIDEVICEWRAPPER_H
#define HMDCUWIFIDEVICEWRAPPER_H

@class CUWiFiDevice, CUWACSession, NSString, NSUUID;
@protocol HMDWACDevice, HMFLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDCUWiFiDeviceWrapper : NSObject <HMDWACDevice, HMFLogging>

 {
    CUWiFiDevice *_cuWiFiDevice;
    CUWACSession *_wacSession;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceID; // ivar: deviceID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL isConfigured;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *ssid;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAirPlay2;
@property (readonly, nonatomic) id *underlyingDevice;


+(id)logCategory;
-(id)initWithCUWiFiDevice:(id)arg0 dispatchQueue:(id)arg1 ;
-(id)logIdentifier;
-(void)cancelConfigurationWithCompletionHandler:(id)arg0 ;
-(void)startConfigurationWithCompletionHandler:(id)arg0 ;


@end


#endif