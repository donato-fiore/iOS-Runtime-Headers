// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRAVAIRPLAYSECURITYSETTINGSPROTOBUF_H
#define _MRAVAIRPLAYSECURITYSETTINGSPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRAVAirPlaySecuritySettingsProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasPassword;
@property (nonatomic) BOOL hasSecurityType;
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) int securityType; // ivar: _securityType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)securityTypeAsString:(int)arg0 ;
-(int)StringAsSecurityType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif