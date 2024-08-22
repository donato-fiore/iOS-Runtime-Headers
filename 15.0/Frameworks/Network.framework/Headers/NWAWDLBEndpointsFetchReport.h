// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWAWDLBENDPOINTSFETCHREPORT_H
#define NWAWDLBENDPOINTSFETCHREPORT_H

@class PBCodable;
@protocol NSCopying;



@interface NWAWDLBEndpointsFetchReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int connectionCellularFallbackCount; // ivar: _connectionCellularFallbackCount
@property (nonatomic) int endpointsFetchTaskBadReplyCount; // ivar: _endpointsFetchTaskBadReplyCount
@property (nonatomic) int endpointsFetchTaskCount; // ivar: _endpointsFetchTaskCount
@property (nonatomic) int endpointsFetchTaskFailureCount; // ivar: _endpointsFetchTaskFailureCount
@property (nonatomic) int endpointsFetchTaskSuccessCount; // ivar: _endpointsFetchTaskSuccessCount
@property (nonatomic) BOOL hasConnectionCellularFallbackCount;
@property (nonatomic) BOOL hasEndpointsFetchTaskBadReplyCount;
@property (nonatomic) BOOL hasEndpointsFetchTaskCount;
@property (nonatomic) BOOL hasEndpointsFetchTaskFailureCount;
@property (nonatomic) BOOL hasEndpointsFetchTaskSuccessCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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