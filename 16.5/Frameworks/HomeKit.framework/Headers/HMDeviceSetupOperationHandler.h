// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDEVICESETUPOPERATIONHANDLER_H
#define HMDEVICESETUPOPERATIONHANDLER_H

@class NSString;
@protocol HMDeviceSetupSessionDelegate, HMFLogging, TROperationHandler;

#import <Foundation/Foundation.h>

#import "HMDeviceSetupSession.h"

@interface HMDeviceSetupOperationHandler : NSObject <HMDeviceSetupSessionDelegate, HMFLogging, TROperationHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDeviceSetupSession *setupSession; // ivar: _setupSession
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(id)logIdentifier;
-(void)_handleReceivedRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)dealloc;
-(void)registerMessageHandlersForSession:(id)arg0 ;
-(void)setupSession:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)setupSession:(id)arg0 didReceiveExchangeData:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif