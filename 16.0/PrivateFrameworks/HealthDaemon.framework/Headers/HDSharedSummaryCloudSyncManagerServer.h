// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSHAREDSUMMARYCLOUDSYNCMANAGERSERVER_H
#define HDSHAREDSUMMARYCLOUDSYNCMANAGERSERVER_H

@class NSString;
@protocol HKSharedSummaryCloudSyncManagerServerInterface, OS_dispatch_queue;


#import "HDStandardTaskServer.h"

@interface HDSharedSummaryCloudSyncManagerServer : HDStandardTaskServer <HKSharedSummaryCloudSyncManagerServerInterface>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)remote_fetchAccountInfoWithCompletion:(id)arg0 ;
-(void)remote_pullWithCompletion:(id)arg0 ;
-(void)remote_pushWithCompletion:(id)arg0 ;


@end


#endif