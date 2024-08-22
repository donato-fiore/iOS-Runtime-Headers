// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRPBDEVICECOLLECTIONDIFF_H
#define NRPBDEVICECOLLECTIONDIFF_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NRPBDeviceCollectionDiff : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *diffs; // ivar: _diffs
@property (retain, nonatomic) NSMutableArray *pairingIDs; // ivar: _pairingIDs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)diffsAtIndex:(NSUInteger)arg0 ;
-(id)pairingIDsAtIndex:(NSUInteger)arg0 ;
-(void)addDiffs:(id)arg0 ;
-(void)addPairingIDs:(id)arg0 ;
-(void)clearDiffs;
-(void)clearPairingIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif