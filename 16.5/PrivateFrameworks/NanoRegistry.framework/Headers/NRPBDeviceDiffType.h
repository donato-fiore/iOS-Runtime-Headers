// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRPBDEVICEDIFFTYPE_H
#define NRPBDEVICEDIFFTYPE_H

@class PBCodable;
@protocol NSCopying;


#import "NRPBDeviceDiff.h"

@interface NRPBDeviceDiffType : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int changeType; // ivar: _changeType
@property (retain, nonatomic) NRPBDeviceDiff *diff; // ivar: _diff
@property (nonatomic) BOOL hasChangeType;
@property (readonly, nonatomic) BOOL hasDiff;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)changeTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsChangeType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif