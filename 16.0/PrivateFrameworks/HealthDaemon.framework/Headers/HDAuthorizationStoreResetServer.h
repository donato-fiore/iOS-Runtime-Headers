// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDAUTHORIZATIONSTORERESETSERVER_H
#define HDAUTHORIZATIONSTORERESETSERVER_H

@class NSString;
@protocol HKAuthorizationStoreResetServer;


#import "HDStandardTaskServer.h"

@interface HDAuthorizationStoreResetServer : HDStandardTaskServer <HKAuthorizationStoreResetServer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateClient:(id)arg0 error:(*id)arg1 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_recalibrateEstimatesForSampleType:(id)arg0 effectiveDate:(id)arg1 completion:(id)arg2 ;
-(void)remote_resetAuthorizationStatusForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)remote_resetAuthorizationStatusesForObjects:(id)arg0 completion:(id)arg1 ;
-(void)remote_resetObjectAuthorizationStatusForBundleIdentifier:(id)arg0 objectType:(id)arg1 completion:(id)arg2 ;


@end


#endif