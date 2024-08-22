// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPCELLNEIGHBORSGROUP_H
#define CLPCELLNEIGHBORSGROUP_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CLPCellNeighborsGroup : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *cdmaNeighbors; // ivar: _cdmaNeighbors
@property (retain, nonatomic) NSMutableArray *gsmNeighbors; // ivar: _gsmNeighbors
@property (retain, nonatomic) NSMutableArray *lteNeighbors; // ivar: _lteNeighbors
@property (retain, nonatomic) NSMutableArray *nrNeighbors; // ivar: _nrNeighbors
@property (retain, nonatomic) NSMutableArray *scdmaNeighbors; // ivar: _scdmaNeighbors


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cdmaNeighborsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)gsmNeighborsAtIndex:(NSUInteger)arg0 ;
-(id)lteNeighborsAtIndex:(NSUInteger)arg0 ;
-(id)nrNeighborsAtIndex:(NSUInteger)arg0 ;
-(id)scdmaNeighborsAtIndex:(NSUInteger)arg0 ;
-(void)addCdmaNeighbors:(id)arg0 ;
-(void)addGsmNeighbors:(id)arg0 ;
-(void)addLteNeighbors:(id)arg0 ;
-(void)addNrNeighbors:(id)arg0 ;
-(void)addScdmaNeighbors:(id)arg0 ;
-(void)clearCdmaNeighbors;
-(void)clearGsmNeighbors;
-(void)clearLteNeighbors;
-(void)clearNrNeighbors;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif