// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDAUTHORIZATIONSTOREREADSERVER_H
#define HDAUTHORIZATIONSTOREREADSERVER_H

@class NSString;
@protocol HKAuthorizationStoreReadServer;


#import "HDStandardTaskServer.h"

@interface HDAuthorizationStoreReadServer : HDStandardTaskServer <HKAuthorizationStoreReadServer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateClient:(id)arg0 error:(*id)arg1 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchAuthorizationContextForPromptSession:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchAuthorizationRecordsForSourceBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchAuthorizationRecordsForType:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchAuthorizationStatusesForDocumentType:(id)arg0 sourceBundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)remote_fetchAuthorizationStatusesForSampleUUID:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchSourcesRequestingAuthorizationForTypes:(id)arg0 completion:(id)arg1 ;
-(void)remote_validateRecalibrateEstimatesRequestRecord:(id)arg0 completion:(id)arg1 ;


@end


#endif