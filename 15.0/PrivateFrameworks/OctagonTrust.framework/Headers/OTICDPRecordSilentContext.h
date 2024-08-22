// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OTICDPRECORDSILENTCONTEXT_H
#define OTICDPRECORDSILENTCONTEXT_H

@class PBCodable;
@protocol NSCopying;


#import "OTEscrowAuthenticationInformation.h"
#import "OTCDPRecoveryInformation.h"

@interface OTICDPRecordSilentContext : PBCodable <NSCopying>



@property (retain, nonatomic) OTEscrowAuthenticationInformation *authInfo; // ivar: _authInfo
@property (retain, nonatomic) OTCDPRecoveryInformation *cdpInfo; // ivar: _cdpInfo
@property (readonly, nonatomic) BOOL hasAuthInfo;
@property (readonly, nonatomic) BOOL hasCdpInfo;


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