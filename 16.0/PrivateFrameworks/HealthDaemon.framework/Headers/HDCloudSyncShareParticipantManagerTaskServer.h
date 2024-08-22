// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCSHAREPARTICIPANTMANAGERTASKSERVER_H
#define HDCLOUDSYNCSHAREPARTICIPANTMANAGERTASKSERVER_H

@class NSString;
@protocol HKCloudSyncShareParticipantManagerServerInterface;


#import "HDStandardTaskServer.h"

@interface HDCloudSyncShareParticipantManagerTaskServer : HDStandardTaskServer <HKCloudSyncShareParticipantManagerServerInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateClient:(id)arg0 error:(*id)arg1 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)remote_fetchAllShareParticipantEmailAddressesForSharingType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)remote_fetchSharingParticipantStatus:(id)arg0 ;
-(void)remote_revokeAccessForAllShareParticipantsForSharingType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)remote_tearDownHealthSharingForProfile:(id)arg0 completion:(id)arg1 ;


@end


#endif