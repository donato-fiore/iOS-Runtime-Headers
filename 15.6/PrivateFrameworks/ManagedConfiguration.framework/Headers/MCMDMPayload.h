// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCMDMPAYLOAD_H
#define MCMDMPAYLOAD_H

@class NSString, NSArray, NSNumber, NSData;


#import "MCPayload.h"

@interface MCMDMPayload : MCPayload

@property (readonly, nonatomic) int accessRights; // ivar: _accessRights
@property (readonly, retain, nonatomic) NSString *assignedManagedAppleID; // ivar: _assignedManagedAppleID
@property (retain, nonatomic) NSArray *checkInPinningPersistentRefs; // ivar: _checkInPinningPersistentRefs
@property (readonly, retain, nonatomic) NSArray *checkInPinningUUIDs; // ivar: _checkInPinningUUIDs
@property (readonly, retain, nonatomic) NSString *checkInURLString; // ivar: _checkInURLString
@property (readonly, nonatomic) BOOL checkOutWhenRemoved; // ivar: _checkOutWhenRemoved
@property (readonly, nonatomic) NSNumber *checkOutWhenRemovedNum; // ivar: _checkOutWhenRemovedNum
@property (retain, nonatomic) NSString *easEnrollmentID; // ivar: _easEnrollmentID
@property (retain, nonatomic) NSString *enrollmentID; // ivar: _enrollmentID
@property (readonly, retain, nonatomic) NSString *enrollmentMode; // ivar: _enrollmentMode
@property (retain, nonatomic) NSString *iCloudEnrollmentID; // ivar: _iCloudEnrollmentID
@property (retain, nonatomic) NSData *identityPersistentID; // ivar: _identityPersistentID
@property (readonly, retain, nonatomic) NSString *identityUUID; // ivar: _identityUUID
@property (readonly, nonatomic) BOOL isUserEnrollment;
@property (readonly, retain, nonatomic) NSArray *localizedAccessRightDescriptions;
@property (readonly, retain, nonatomic) NSString *managedAppleID; // ivar: _managedAppleID
@property (readonly, retain, nonatomic) NSString *managedAppleIDName;
@property (retain, nonatomic) NSString *personaID; // ivar: _personaID
@property (readonly, nonatomic) BOOL pinningRevocationCheckRequired; // ivar: _pinningRevocationCheckRequired
@property (readonly, retain, nonatomic) NSNumber *pollingIntervalMinutes; // ivar: _pollingIntervalMinutes
@property (readonly, nonatomic) NSNumber *requiredAppIDForMDM; // ivar: _requiredAppIDForMDM
@property (readonly, nonatomic) NSArray *serverCapabilities; // ivar: _serverCapabilities
@property (retain, nonatomic) NSArray *serverPinningPersistentRefs; // ivar: _serverPinningPersistentRefs
@property (readonly, retain, nonatomic) NSArray *serverPinningUUIDs; // ivar: _serverPinningUUIDs
@property (readonly, retain, nonatomic) NSString *serverURLString; // ivar: _serverURLString
@property (readonly, nonatomic) BOOL signMessage; // ivar: _signMessage
@property (readonly, nonatomic) NSNumber *signMessageNum; // ivar: _signMessageNum
@property (readonly, retain, nonatomic) NSString *topic; // ivar: _topic
@property (readonly, nonatomic) BOOL useDevelopmentAPNS; // ivar: _useDevelopmentAPNS
@property (readonly, nonatomic) NSNumber *useDevelopmentAPNSNum; // ivar: _useDevelopmentAPNSNum


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)_invalidRightsError;
-(id)_invalidTopicError;
-(id)_nonHTTPSURLErrorForField:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)installationWarnings;
-(id)kvsForCertUUIDs:(id)arg0 persistentRefs:(id)arg1 labelKey:(id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)verboseDescription;


@end


#endif