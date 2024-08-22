// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMSPAIRINGSESSIONDIDPAIRMESSAGE_H
#define RMSPAIRINGSESSIONDIDPAIRMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface RMSPairingSessionDidPairMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasPairingGUID;
@property (readonly, nonatomic) BOOL hasServiceNetworkName;
@property (nonatomic) BOOL hasSessionIdentifier;
@property (retain, nonatomic) NSString *pairingGUID; // ivar: _pairingGUID
@property (retain, nonatomic) NSString *serviceNetworkName; // ivar: _serviceNetworkName
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