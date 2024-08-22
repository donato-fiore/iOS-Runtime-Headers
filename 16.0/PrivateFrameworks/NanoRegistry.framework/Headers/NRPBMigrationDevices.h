// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRPBMIGRATIONDEVICES_H
#define NRPBMIGRATIONDEVICES_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;



@interface NRPBMigrationDevices : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *devices; // ivar: _devices
@property (readonly, nonatomic) BOOL hasPhoneUDIDHash;
@property (retain, nonatomic) NSData *phoneUDIDHash; // ivar: _phoneUDIDHash


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)devicesAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(void)addDevices:(id)arg0 ;
-(void)clearDevices;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif