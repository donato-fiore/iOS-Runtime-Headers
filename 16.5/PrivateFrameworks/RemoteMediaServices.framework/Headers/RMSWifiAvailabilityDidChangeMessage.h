// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMSWIFIAVAILABILITYDIDCHANGEMESSAGE_H
#define RMSWIFIAVAILABILITYDIDCHANGEMESSAGE_H

@class PBCodable;
@protocol NSCopying;



@interface RMSWifiAvailabilityDidChangeMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) BOOL hasWifiAvailable;
@property (nonatomic) int sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) BOOL wifiAvailable; // ivar: _wifiAvailable


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