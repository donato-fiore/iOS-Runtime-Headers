// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSTANDARDTASKSERVER_H
#define HDSTANDARDTASKSERVER_H

@class NSString, NSUUID;
@protocol HDTaskServer, HKUnitTestingTaskServerInterface, HDTaskServerDelegate;

#import <Foundation/Foundation.h>

#import "HDHealthStoreClient.h"
#import "HDProfile.h"

@interface HDStandardTaskServer : NSObject <HDTaskServer, HKUnitTestingTaskServerInterface>



@property (readonly, nonatomic) HDHealthStoreClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HDTaskServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *taskUUID; // ivar: _taskUUID


+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)connectionInvalidated;
-(void)remote_unitTesting_createTaskServerNoOpWithCompletion:(id)arg0 ;


@end


#endif