// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDPROFILESTORESERVER_H
#define HDPROFILESTORESERVER_H

@class NSString;
@protocol HKProfileStoreServer, HDProfileManagerObserver;


#import "HDStandardTaskServer.h"

@interface HDProfileStoreServer : HDStandardTaskServer <HKProfileStoreServer, HDProfileManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)dealloc;
-(void)profileListDidChange;
-(void)remote_createProfileOfType:(NSInteger)arg0 displayName:(id)arg1 completion:(id)arg2 ;
-(void)remote_deleteProfile:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchDisplayImageData:(id)arg0 ;
-(void)remote_fetchDisplayNameWithCompletion:(id)arg0 ;
-(void)remote_fetchSharingInformationForProfileIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)remote_getAllProfilesWithCompletion:(id)arg0 ;
-(void)remote_profileIdentifierForNRDeviceUUID:(id)arg0 completion:(id)arg1 ;
-(void)remote_profileIdentifierForNRDeviceUUID:(id)arg0 ownerAppleID:(id)arg1 completion:(id)arg2 ;
-(void)remote_setDisplayFirstName:(id)arg0 lastName:(id)arg1 completion:(id)arg2 ;
-(void)remote_setDisplayImageData:(id)arg0 completion:(id)arg1 ;
-(void)remote_startObservingWithCompletion:(id)arg0 ;


@end


#endif