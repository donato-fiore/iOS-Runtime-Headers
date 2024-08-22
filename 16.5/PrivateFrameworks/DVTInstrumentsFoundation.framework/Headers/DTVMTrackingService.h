// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTVMTRACKINGSERVICE_H
#define DTVMTRACKINGSERVICE_H

@class DTXService, NSString;
@protocol DTVMTrackingServiceAuthorizedAPI;


#import "XRVMState.h"

@interface DTVMTrackingService : DTXService <DTVMTrackingServiceAuthorizedAPI>

 {
    int _targetPid;
    unsigned int _targetTask;
    XRVMState *_currentState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(id)configureLaunchEnvironment:(id)arg0 ;
-(id)requestVMSnapshot;
-(void)messageReceived:(id)arg0 ;
-(void)setTargetPid:(id)arg0 referenceDate:(id)arg1 ;
-(void)startTracking;
-(void)stopTracking;


@end


#endif