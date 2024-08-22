// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWPBUPDATEBROWSE_H
#define NWPBUPDATEBROWSE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NWPBUpdateBrowse : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *clientUUID; // ivar: _clientUUID
@property (retain, nonatomic) NSMutableArray *discoveredEndpoints; // ivar: _discoveredEndpoints
@property (readonly, nonatomic) BOOL hasClientUUID;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)discoveredEndpointsAtIndex:(NSUInteger)arg0 ;
-(void)addDiscoveredEndpoints:(id)arg0 ;
-(void)clearDiscoveredEndpoints;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif