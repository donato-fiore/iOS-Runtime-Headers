// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAPABILITIESCONTROLLER_H
#define HMDCAPABILITIESCONTROLLER_H

@class HMAccessoryCapabilities, HMResidentCapabilities, NSUUID, NSString;
@protocol HMFLogging, OS_dispatch_queue, HMDCapabilitiesControllerDataSource;

#import <Foundation/Foundation.h>


@interface HMDCapabilitiesController : NSObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
    HMAccessoryCapabilities *_currentAccessoryCapabilitiesInternal;
    HMResidentCapabilities *_currentResidentCapabilitiesInternal;
    NSObject<OS_dispatch_queue> *_queue;
    id<HMDCapabilitiesControllerDataSource> *_dataSource;
    NSUUID *_homeUUID;
    NSUUID *_accessoryUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)areCurrentAccessoryCapabilitiesPresentAndDifferent:(id)arg0 ;
-(BOOL)areCurrentResidentCapabilitiesPresentAndDifferent:(id)arg0 ;
-(id)currentAccessoryCapabilities;
-(id)currentResidentCapabilities;
-(id)encodedCurrentAccessoryCapabilities;
-(id)encodedCurrentResidentCapabilities;
-(id)initWithQueue:(id)arg0 dataSource:(id)arg1 ;
-(id)logIdentifier;
-(void)currentAccessoryDidBecomeAvailable;
-(void)didFinishConfiguringHomes;


@end


#endif