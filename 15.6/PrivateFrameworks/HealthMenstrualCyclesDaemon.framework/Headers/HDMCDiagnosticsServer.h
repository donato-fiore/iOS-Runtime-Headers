// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDMCDIAGNOSTICSSERVER_H
#define HDMCDIAGNOSTICSSERVER_H

@class HDStandardTaskServer, HDProfile, HDHealthStoreClient, NSString;
@protocol HDMenstrualCyclesDiagnosticsServerInterface, OS_dispatch_queue;


#import "HDMCProfileExtension.h"

@interface HDMCDiagnosticsServer : HDStandardTaskServer <HDMenstrualCyclesDiagnosticsServerInterface>

 {
    HDProfile *_profile;
    HDMCProfileExtension *_profileExtension;
    HDHealthStoreClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 profileExtension:(id)arg4 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)remote_triggerAnalysisForDiagnosticsWithCompletion:(id)arg0 ;


@end


#endif