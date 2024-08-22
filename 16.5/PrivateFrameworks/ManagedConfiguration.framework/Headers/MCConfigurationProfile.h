// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCCONFIGURATIONPROFILE_H
#define MCCONFIGURATIONPROFILE_H

@class NSArray, NSNumber;


#import "MCProfile.h"
#import "MCProfileServiceProfile.h"

@interface MCConfigurationProfile : MCProfile {
    NSArray *_payloads;
    NSArray *_managedPayloads;
}


@property (retain, nonatomic) MCProfileServiceProfile *OTAProfile; // ivar: _OTAProfile
@property (nonatomic) BOOL isCloudLocked; // ivar: _isCloudLocked
@property (retain, nonatomic) NSNumber *isCloudLockedNum; // ivar: _isCloudLockedNum
@property (nonatomic) BOOL isCloudProfile; // ivar: _isCloudProfile
@property (retain, nonatomic) NSNumber *isCloudProfileNum; // ivar: _isCloudProfileNum
@property (nonatomic) BOOL isMDMProfile; // ivar: _isMDMProfile


-(BOOL)isManagedByMDM;
-(BOOL)isManagedByProfileService;
-(id)_localizedPayloadSummaryByType:(id)arg0 ;
-(id)_sortPayloads:(id)arg0 ;
-(id)_subjectSummaryFromCertificate:(struct __SecCertificate *)arg0 ;
-(id)description;
-(id)earliestCertificateExpiryDate;
-(id)initWithDictionary:(id)arg0 options:(id)arg1 signerCerts:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(*id)arg4 ;
-(id)installationWarningsIncludeUnsignedProfileWarning:(BOOL)arg0 ;
-(id)localizedManagedPayloadSummaryByType;
-(id)localizedPayloadSummaryByType;
-(id)managedPayloads;
-(id)payloadWithUUID:(id)arg0 ;
-(id)payloads;
-(id)serializedDictionary;
-(id)stubDictionary;
-(id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg0 ;
-(id)subjectSummaryFromCertificateWithPersistentID:(id)arg0 ;
-(id)verboseDescription;
-(struct __SecCertificate *)copyCertificateFromPayloadWithUUID:(id)arg0 ;
-(struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg0 ;
-(void)_addObjectsOfClass:(Class)arg0 fromArray:(id)arg1 toArray:(id)arg2 ;
-(void)_sortPayloads;
-(void)replacePayloadWithUUID:(id)arg0 withPayload:(id)arg1 ;


@end


#endif