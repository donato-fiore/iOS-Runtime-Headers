// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRPBDEVICECOLLECTIONHISTORYENTRY_H
#define NRPBDEVICECOLLECTIONHISTORYENTRY_H

@class PBCodable;
@protocol NSCopying;


#import "NRPBDeviceCollectionDiff.h"

@interface NRPBDeviceCollectionHistoryEntry : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat date; // ivar: _date
@property (retain, nonatomic) NRPBDeviceCollectionDiff *diff; // ivar: _diff
@property (nonatomic) BOOL hasDate;
@property (readonly, nonatomic) BOOL hasDiff;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) NSInteger index; // ivar: _index


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