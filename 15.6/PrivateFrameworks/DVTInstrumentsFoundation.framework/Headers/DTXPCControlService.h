// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTXPCCONTROLSERVICE_H
#define DTXPCCONTROLSERVICE_H

@class NSString;
@protocol DTXPCControlServiceRequests;


#import "DTProcessControlService.h"

@interface DTXPCControlService : DTProcessControlService <DTXPCControlServiceRequests>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(id)initWithChannel:(id)arg0 ;
-(id)launchSuspendedProcessWithDevicePath:(id)arg0 bundleIdentifier:(id)arg1 environment:(id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(void)messageReceived:(id)arg0 ;
-(void)observeServicesWithIdentifier:(id)arg0 requestingProcess:(int)arg1 environment:(id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(void)requestDebugLaunchOfDaemonWithSpecifier:(id)arg0 programPath:(id)arg1 environment:(id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(void)stopObservationsForIdentifier:(id)arg0 requestingProcess:(int)arg1 ;


@end


#endif