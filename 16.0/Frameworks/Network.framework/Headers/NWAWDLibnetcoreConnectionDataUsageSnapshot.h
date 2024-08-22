// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWAWDLIBNETCORECONNECTIONDATAUSAGESNAPSHOT_H
#define NWAWDLIBNETCORECONNECTIONDATAUSAGESNAPSHOT_H

@class PBCodable;
@protocol NSCopying;



@interface NWAWDLibnetcoreConnectionDataUsageSnapshot : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger bytesIn; // ivar: _bytesIn
@property (nonatomic) NSUInteger bytesOut; // ivar: _bytesOut
@property (nonatomic) BOOL hasBytesIn;
@property (nonatomic) BOOL hasBytesOut;
@property (nonatomic) BOOL hasMultipathBytesInCell;
@property (nonatomic) BOOL hasMultipathBytesInInitial;
@property (nonatomic) BOOL hasMultipathBytesInWiFi;
@property (nonatomic) BOOL hasMultipathBytesOutCell;
@property (nonatomic) BOOL hasMultipathBytesOutInitial;
@property (nonatomic) BOOL hasMultipathBytesOutWiFi;
@property (nonatomic) NSUInteger multipathBytesInCell; // ivar: _multipathBytesInCell
@property (nonatomic) NSUInteger multipathBytesInInitial; // ivar: _multipathBytesInInitial
@property (nonatomic) NSUInteger multipathBytesInWiFi; // ivar: _multipathBytesInWiFi
@property (nonatomic) NSUInteger multipathBytesOutCell; // ivar: _multipathBytesOutCell
@property (nonatomic) NSUInteger multipathBytesOutInitial; // ivar: _multipathBytesOutInitial
@property (nonatomic) NSUInteger multipathBytesOutWiFi; // ivar: _multipathBytesOutWiFi


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