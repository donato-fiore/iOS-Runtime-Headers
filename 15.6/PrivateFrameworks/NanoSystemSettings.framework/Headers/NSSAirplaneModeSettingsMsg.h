// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSAIRPLANEMODESETTINGSMSG_H
#define NSSAIRPLANEMODESETTINGSMSG_H

@class PBCodable;
@protocol NSCopying;



@interface NSSAirplaneModeSettingsMsg : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL bluetoothOn; // ivar: _bluetoothOn
@property (nonatomic) BOOL cellularOn; // ivar: _cellularOn
@property (nonatomic) BOOL hasCellularOn;
@property (nonatomic) BOOL wifiOn; // ivar: _wifiOn


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