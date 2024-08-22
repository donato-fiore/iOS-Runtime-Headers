// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPMEDIASYNCHEADER_H
#define MSPMEDIASYNCHEADER_H

@class PBCodable;
@protocol NSCopying;



@interface MSPMediaSyncHeader : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasSyncType;
@property (nonatomic) BOOL hasTotalPackages;
@property (nonatomic) int syncType; // ivar: _syncType
@property (nonatomic) int totalPackages; // ivar: _totalPackages


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)syncTypeAsString:(int)arg0 ;
-(int)StringAsSyncType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif