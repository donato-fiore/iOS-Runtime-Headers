// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRPBDEVICEDIFF_H
#define NRPBDEVICEDIFF_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NRPBDeviceDiff : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *diffs; // ivar: _diffs
@property (retain, nonatomic) NSMutableArray *names; // ivar: _names


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)diffsAtIndex:(NSUInteger)arg0 ;
-(id)namesAtIndex:(NSUInteger)arg0 ;
-(void)addDiffs:(id)arg0 ;
-(void)addNames:(id)arg0 ;
-(void)clearDiffs;
-(void)clearNames;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif