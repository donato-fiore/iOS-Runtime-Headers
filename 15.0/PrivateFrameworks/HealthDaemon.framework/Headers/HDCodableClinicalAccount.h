// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLECLINICALACCOUNT_H
#define HDCODABLECLINICALACCOUNT_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "HDCodableMessageVersion.h"

@interface HDCodableClinicalAccount : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) CGFloat clinicalSharingFirstSharedDate; // ivar: _clinicalSharingFirstSharedDate
@property (nonatomic) CGFloat clinicalSharingLastSharedDate; // ivar: _clinicalSharingLastSharedDate
@property (nonatomic) NSInteger clinicalSharingMultiDeviceStatus; // ivar: _clinicalSharingMultiDeviceStatus
@property (retain, nonatomic) NSString *clinicalSharingPrimaryDeviceName; // ivar: _clinicalSharingPrimaryDeviceName
@property (nonatomic) NSInteger clinicalSharingUserStatus; // ivar: _clinicalSharingUserStatus
@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (nonatomic) NSInteger failedFetchAttemptsCount; // ivar: _failedFetchAttemptsCount
@property (retain, nonatomic) NSString *gatewayExternalID; // ivar: _gatewayExternalID
@property (readonly, nonatomic) BOOL hasAccountIdentifier;
@property (nonatomic) BOOL hasClinicalSharingFirstSharedDate;
@property (nonatomic) BOOL hasClinicalSharingLastSharedDate;
@property (nonatomic) BOOL hasClinicalSharingMultiDeviceStatus;
@property (readonly, nonatomic) BOOL hasClinicalSharingPrimaryDeviceName;
@property (nonatomic) BOOL hasClinicalSharingUserStatus;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) BOOL hasFailedFetchAttemptsCount;
@property (readonly, nonatomic) BOOL hasGatewayExternalID;
@property (nonatomic) BOOL hasLastFailedFetchDate;
@property (nonatomic) BOOL hasLastFetchDate;
@property (nonatomic) BOOL hasLastFullFetchDate;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (nonatomic) BOOL hasModificationDate;
@property (readonly, nonatomic) BOOL hasPatientHash;
@property (readonly, nonatomic) BOOL hasSignedClinicalDataIssuerIdentifier;
@property (readonly, nonatomic) BOOL hasSyncIdentifier;
@property (nonatomic) BOOL hasUserEnabled;
@property (nonatomic) CGFloat lastFailedFetchDate; // ivar: _lastFailedFetchDate
@property (nonatomic) CGFloat lastFetchDate; // ivar: _lastFetchDate
@property (nonatomic) CGFloat lastFullFetchDate; // ivar: _lastFullFetchDate
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion; // ivar: _messageVersion
@property (nonatomic) CGFloat modificationDate; // ivar: _modificationDate
@property (retain, nonatomic) NSString *patientHash; // ivar: _patientHash
@property (retain, nonatomic) NSString *signedClinicalDataIssuerIdentifier; // ivar: _signedClinicalDataIssuerIdentifier
@property (retain, nonatomic) NSData *syncIdentifier; // ivar: _syncIdentifier
@property (nonatomic) BOOL userEnabled; // ivar: _userEnabled


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif