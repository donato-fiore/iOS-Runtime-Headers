// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEFHIRCREDENTIAL_H
#define HDCODABLEFHIRCREDENTIAL_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "HDCodableMessageVersion.h"

@interface HDCodableFHIRCredential : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *accountSyncIdentifier; // ivar: _accountSyncIdentifier
@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (nonatomic) CGFloat expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL hasAccountSyncIdentifier;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL hasExpirationDate;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (readonly, nonatomic) BOOL hasPatientID;
@property (nonatomic) BOOL hasReceivedDate;
@property (readonly, nonatomic) BOOL hasRequestedScopeString;
@property (readonly, nonatomic) BOOL hasScopeString;
@property (retain, nonatomic) NSData *identifier; // ivar: _identifier
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion; // ivar: _messageVersion
@property (retain, nonatomic) NSString *patientID; // ivar: _patientID
@property (nonatomic) CGFloat receivedDate; // ivar: _receivedDate
@property (retain, nonatomic) NSString *requestedScopeString; // ivar: _requestedScopeString
@property (retain, nonatomic) NSString *scopeString; // ivar: _scopeString


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