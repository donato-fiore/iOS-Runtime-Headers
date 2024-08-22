// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBURLMAPPINGMISS_H
#define NTPBURLMAPPINGMISS_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTPBUrlMappingMiss : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasHost;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *host; // ivar: _host
@property (retain, nonatomic) NSMutableArray *paths; // ivar: _paths
@property (retain, nonatomic) NSString *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)pathsAtIndex:(NSUInteger)arg0 ;
-(void)addPaths:(id)arg0 ;
-(void)clearPaths;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif