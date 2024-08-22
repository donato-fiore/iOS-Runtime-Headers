// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLESYNCVERSIONRANGE_H
#define HDCODABLESYNCVERSIONRANGE_H

@class PBCodable;
@protocol NSCopying;



@interface HDCodableSyncVersionRange : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int current; // ivar: _current
@property (nonatomic) BOOL hasCurrent;
@property (nonatomic) BOOL hasMinimum;
@property (nonatomic) int minimum; // ivar: _minimum


+(id)versionRangeWithSyncVersionRange:(struct ? )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(struct ? )syncVersionRange;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif