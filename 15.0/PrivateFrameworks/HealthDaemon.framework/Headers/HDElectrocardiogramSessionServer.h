// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDELECTROCARDIOGRAMSESSIONSERVER_H
#define HDELECTROCARDIOGRAMSESSIONSERVER_H

@class HKElectrocardiogramSessionConfiguration, NSString;
@protocol HKElectrocardiogramSessionServerInterface, OS_dispatch_queue;


#import "HDStandardTaskServer.h"

@interface HDElectrocardiogramSessionServer : HDStandardTaskServer <HKElectrocardiogramSessionServerInterface>

 {
    HKElectrocardiogramSessionConfiguration *_sessionConfiguration;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _sessionState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)remote_abortWithCompletion:(id)arg0 ;
-(void)remote_startWithCompletion:(id)arg0 ;


@end


#endif