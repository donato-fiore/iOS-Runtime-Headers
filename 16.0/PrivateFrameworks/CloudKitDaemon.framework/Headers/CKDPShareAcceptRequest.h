// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPSHAREACCEPTREQUEST_H
#define CKDPSHAREACCEPTREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "CKDPProtectionInfo.h"
#import "CKDPShareIdentifier.h"

@interface CKDPShareAcceptRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL acceptedInProcess; // ivar: _acceptedInProcess
@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (nonatomic) BOOL hasAcceptedInProcess;
@property (readonly, nonatomic) BOOL hasEtag;
@property (readonly, nonatomic) BOOL hasParticipantId;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (readonly, nonatomic) BOOL hasPublicKey;
@property (nonatomic) BOOL hasPublicKeyVersion;
@property (readonly, nonatomic) BOOL hasSelfAddedPcs;
@property (readonly, nonatomic) BOOL hasShareId;
@property (retain, nonatomic) NSString *participantId; // ivar: _participantId
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo; // ivar: _protectionInfo
@property (retain, nonatomic) CKDPProtectionInfo *publicKey; // ivar: _publicKey
@property (nonatomic) int publicKeyVersion; // ivar: _publicKeyVersion
@property (retain, nonatomic) CKDPProtectionInfo *selfAddedPcs; // ivar: _selfAddedPcs
@property (retain, nonatomic) CKDPShareIdentifier *shareId; // ivar: _shareId


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif