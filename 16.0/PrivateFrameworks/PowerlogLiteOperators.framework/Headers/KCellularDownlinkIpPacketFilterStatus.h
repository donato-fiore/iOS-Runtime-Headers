// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KCELLULARDOWNLINKIPPACKETFILTERSTATUS_H
#define KCELLULARDOWNLINKIPPACKETFILTERSTATUS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface KCellularDownlinkIpPacketFilterStatus : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int bearerContextId; // ivar: _bearerContextId
@property (retain, nonatomic) NSMutableArray *filters; // ivar: _filters
@property (nonatomic) BOOL hasBearerContextId;
@property (nonatomic) BOOL hasIsActivated;
@property (nonatomic) BOOL hasIsEchoReqBlocked;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL isActivated; // ivar: _isActivated
@property (nonatomic) BOOL isEchoReqBlocked; // ivar: _isEchoReqBlocked
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)filtersAtIndex:(NSUInteger)arg0 ;
-(void)addFilters:(id)arg0 ;
-(void)clearFilters;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif