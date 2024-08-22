// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPUSER_H
#define CKDPUSER_H

@class PBCodable, NSString, CKDPIdentifier;
@protocol NSCopying;


#import "CKDPUserAlias.h"
#import "CKDPProtectionInfo.h"

@interface CKDPUser : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPUserAlias *alias; // ivar: _alias
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly, nonatomic) BOOL hasAlias;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasIsInNetwork;
@property (readonly, nonatomic) BOOL hasLastName;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (retain, nonatomic) CKDPIdentifier *identifier; // ivar: _identifier
@property (nonatomic) BOOL isInNetwork; // ivar: _isInNetwork
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo; // ivar: _protectionInfo


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