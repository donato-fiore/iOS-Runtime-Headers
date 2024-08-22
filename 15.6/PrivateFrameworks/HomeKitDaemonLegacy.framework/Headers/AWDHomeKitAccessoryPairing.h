// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDHOMEKITACCESSORYPAIRING_H
#define AWDHOMEKITACCESSORYPAIRING_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "AWDHomeKitVendorInformation.h"

@interface AWDHomeKitAccessoryPairing : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (nonatomic) int certified; // ivar: _certified
@property (nonatomic) int credentialType; // ivar: _credentialType
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) int errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (nonatomic) BOOL hasCertified;
@property (nonatomic) BOOL hasCredentialType;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (nonatomic) BOOL hasIsAdd;
@property (nonatomic) BOOL hasIsAddWithOwnershipProof;
@property (nonatomic) BOOL hasIsAddedViaWAC;
@property (nonatomic) BOOL hasIsBTOnboard;
@property (nonatomic) BOOL hasIsFirstHAPAccessoryInAnyHome;
@property (nonatomic) BOOL hasIsFirstHAPAccessoryInHome;
@property (nonatomic) BOOL hasIsNetworkRouterAdd;
@property (nonatomic) BOOL hasIsNetworkRouterReplace;
@property (nonatomic) BOOL hasIsNoeAccessory;
@property (nonatomic) BOOL hasIsNoeOnboard;
@property (nonatomic) BOOL hasIsSecureWAC;
@property (nonatomic) BOOL hasNoeCapabilities;
@property (nonatomic) BOOL hasNoeOnboardDuration;
@property (nonatomic) BOOL hasNoeOnboardErrorCode;
@property (readonly, nonatomic) BOOL hasNoeOnboardErrorDomain;
@property (nonatomic) BOOL hasNoeStatus;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransportType;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (nonatomic) BOOL isAdd; // ivar: _isAdd
@property (nonatomic) BOOL isAddWithOwnershipProof; // ivar: _isAddWithOwnershipProof
@property (nonatomic) BOOL isAddedViaWAC; // ivar: _isAddedViaWAC
@property (nonatomic) BOOL isBTOnboard; // ivar: _isBTOnboard
@property (nonatomic) BOOL isFirstHAPAccessoryInAnyHome; // ivar: _isFirstHAPAccessoryInAnyHome
@property (nonatomic) BOOL isFirstHAPAccessoryInHome; // ivar: _isFirstHAPAccessoryInHome
@property (nonatomic) BOOL isNetworkRouterAdd; // ivar: _isNetworkRouterAdd
@property (nonatomic) BOOL isNetworkRouterReplace; // ivar: _isNetworkRouterReplace
@property (nonatomic) BOOL isNoeAccessory; // ivar: _isNoeAccessory
@property (nonatomic) BOOL isNoeOnboard; // ivar: _isNoeOnboard
@property (nonatomic) BOOL isSecureWAC; // ivar: _isSecureWAC
@property (nonatomic) unsigned int noeCapabilities; // ivar: _noeCapabilities
@property (nonatomic) unsigned int noeOnboardDuration; // ivar: _noeOnboardDuration
@property (nonatomic) int noeOnboardErrorCode; // ivar: _noeOnboardErrorCode
@property (retain, nonatomic) NSString *noeOnboardErrorDomain; // ivar: _noeOnboardErrorDomain
@property (nonatomic) unsigned int noeStatus; // ivar: _noeStatus
@property (nonatomic) unsigned int retryCount; // ivar: _retryCount
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int transportType; // ivar: _transportType
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // ivar: _vendorDetails


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)certifiedAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)credentialTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)transportTypeAsString:(int)arg0 ;
-(int)StringAsCertified:(id)arg0 ;
-(int)StringAsCredentialType:(id)arg0 ;
-(int)StringAsTransportType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif