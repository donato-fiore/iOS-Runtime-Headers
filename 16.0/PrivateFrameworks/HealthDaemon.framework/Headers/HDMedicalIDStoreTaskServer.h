// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICALIDSTORETASKSERVER_H
#define HDMEDICALIDSTORETASKSERVER_H

@class NSString;
@protocol HKMedicalIDStoreServerInterface;


#import "HDStandardTaskServer.h"

@interface HDMedicalIDStoreTaskServer : HDStandardTaskServer <HKMedicalIDStoreServerInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateClient:(id)arg0 error:(*id)arg1 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_addEmergencyContact:(id)arg0 completion:(id)arg1 ;
-(void)remote_deleteMedicalIDDataWithLastFetchedMedicalIDData:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(id)arg0 ;
-(void)remote_fetchMedicalIDWithCompletion:(id)arg0 ;
-(void)remote_medicalIDClinicalContactsWithCompletion:(id)arg0 ;
-(void)remote_medicalIDEmergencyContactsWithCompletion:(id)arg0 ;
-(void)remote_removeEmergencyContact:(id)arg0 completion:(id)arg1 ;
-(void)remote_updateMedicalIDData:(id)arg0 lastFetchedMedicalIDData:(id)arg1 completion:(id)arg2 ;


@end


#endif