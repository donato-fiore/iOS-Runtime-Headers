// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDWATCHMANAGER_H
#define HMDWATCHMANAGER_H

@class HMFObject, NSArray, NSString;
@protocol HMFLogging, HMDIDSServiceDelegate, OS_dispatch_queue, HMDIDSService;



@interface HMDWatchManager : HMFObject <HMFLogging, HMDIDSServiceDelegate>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSArray *connectedWatches; // ivar: _connectedWatches
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isPairedWithWatch) BOOL pairedWithWatch; // ivar: _pairedWithWatch
@property (readonly, nonatomic) NSObject<HMDIDSService> *service; // ivar: _service
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *watches;


+(BOOL)isCompatibleWatchDevice:(id)arg0 ;
+(id)logCategory;
+(id)sharedManager;
+(id)shortDescription;
-(id)attributeDescriptions;
-(id)connectedWatchFromDeviceID:(id)arg0 ;
-(id)init;
-(void)__initializeConnectedDevices;
-(void)service:(id)arg0 connectedDevicesChanged:(id)arg1 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;


@end


#endif