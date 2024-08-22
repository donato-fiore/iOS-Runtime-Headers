// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRPBMUTABLEDEVICECOLLECTION_H
#define NRPBMUTABLEDEVICECOLLECTION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NRPBMutableDeviceCollection : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *devices; // ivar: _devices
@property (retain, nonatomic) NSMutableArray *pairingIDs; // ivar: _pairingIDs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)devicesAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)pairingIDsAtIndex:(NSUInteger)arg0 ;
-(void)addDevices:(id)arg0 ;
-(void)addPairingIDs:(id)arg0 ;
-(void)clearDevices;
-(void)clearPairingIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif