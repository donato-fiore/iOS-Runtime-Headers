// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMSPAIRINGCHALLENGEREQUESTMESSAGE_H
#define RMSPAIRINGCHALLENGEREQUESTMESSAGE_H

@class PBCodable;
@protocol NSCopying;


#import "RMSPairingCredentialsMessage.h"

@interface RMSPairingChallengeRequestMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasPairingCredentials;
@property (nonatomic) BOOL hasSessionIdentifier;
@property (retain, nonatomic) RMSPairingCredentialsMessage *pairingCredentials; // ivar: _pairingCredentials
@property (nonatomic) int sessionIdentifier; // ivar: _sessionIdentifier


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