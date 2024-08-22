// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEAIPHOTOSPERSONDATARECEIVER_H
#define HMDHOMEAIPHOTOSPERSONDATARECEIVER_H

@class NSString, HMIExternalPersonManager;
@protocol HMFLogging, HMIExternalPersonManagerDataSource;


#import "HMDHomeAIPersonDataReceiver.h"

@interface HMDHomeAIPhotosPersonDataReceiver : HMDHomeAIPersonDataReceiver <HMFLogging, HMIExternalPersonManagerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMIExternalPersonManager *photosPersonManager; // ivar: _photosPersonManager
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithPersonManagerUUID:(id)arg0 homeUUID:(id)arg1 workQueue:(id)arg2 ;
-(id)initWithPhotosPersonManager:(id)arg0 workQueue:(id)arg1 ;
-(id)logIdentifier;
-(void)fetchSettingsWithCompletion:(id)arg0 ;
-(void)handleUpdatedSettings:(id)arg0 mirrorOutputFuture:(id)arg1 ;


@end


#endif