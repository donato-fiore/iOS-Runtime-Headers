// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKEDUPAYLOAD_H
#define CRKEDUPAYLOAD_H

@class NSDictionary, NSArray, NSString, NSData;

#import <Foundation/Foundation.h>


@interface CRKEDUPayload : NSObject

@property (readonly, copy, nonatomic) NSDictionary *configuration;
@property (retain, nonatomic) NSArray *departments; // ivar: _departments
@property (retain, nonatomic) NSArray *deviceGroups; // ivar: _deviceGroups
@property (retain, nonatomic) NSArray *groups; // ivar: _groups
@property (readonly, nonatomic) BOOL isEphemeralMultiUserDevice; // ivar: _isEphemeralMultiUserDevice
@property (retain, nonatomic) NSArray *leaderPayloadCertificateAnchorPersistentID; // ivar: _leaderPayloadCertificateAnchorPersistentID
@property (retain, nonatomic) NSArray *leaderPayloadCertificateAnchorUUID; // ivar: _leaderPayloadCertificateAnchorUUID
@property (retain, nonatomic) NSArray *memberPayloadCertificateAnchorPersistentID; // ivar: _memberPayloadCertificateAnchorPersistentID
@property (retain, nonatomic) NSArray *memberPayloadCertificateAnchorUUID; // ivar: _memberPayloadCertificateAnchorUUID
@property (retain, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (retain, nonatomic) NSString *organizationUUID; // ivar: _organizationUUID
@property (retain, nonatomic) NSData *payloadCertificatePersistentID; // ivar: _payloadCertificatePersistentID
@property (retain, nonatomic) NSString *payloadCertificateUUID; // ivar: _payloadCertificateUUID
@property (retain, nonatomic) NSString *payloadDescriptionName; // ivar: _payloadDescriptionName
@property (retain, nonatomic) NSString *payloadDisplayName; // ivar: _payloadDisplayName
@property (retain, nonatomic) NSData *resourcePayloadCertificatePersistentID; // ivar: _resourcePayloadCertificatePersistentID
@property (retain, nonatomic) NSString *resourcePayloadCertificateUUID; // ivar: _resourcePayloadCertificateUUID
@property (nonatomic) BOOL screenObservationPermissionModificationAllowed; // ivar: _screenObservationPermissionModificationAllowed
@property (retain, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier
@property (retain, nonatomic) NSArray *users; // ivar: _users


-(BOOL)areCredentialsValidForStub:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)parseDictionary:(id)arg0 isStub:(BOOL)arg1 outError:(*id)arg2 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 isStub:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithDictionary:(id)arg0 isStub:(BOOL)arg1 isEphemeralMultiUserDevice:(BOOL)arg2 error:(*id)arg3 ;
-(id)parseDepartmentFromDictionary:(id)arg0 isStub:(BOOL)arg1 outError:(*id)arg2 ;
-(id)parseDeviceGroupFromDictionary:(id)arg0 isStub:(BOOL)arg1 outError:(*id)arg2 ;
-(id)parseGroupFromDictionary:(id)arg0 isStub:(BOOL)arg1 outError:(*id)arg2 ;
-(id)parseUserFromDictionary:(id)arg0 isStub:(BOOL)arg1 outError:(*id)arg2 ;


@end


#endif