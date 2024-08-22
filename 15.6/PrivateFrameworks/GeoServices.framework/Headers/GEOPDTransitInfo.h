// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDTRANSITINFO_H
#define GEOPDTRANSITINFO_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOPDMapsIdentifier.h"

@interface GEOPDTransitInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_labels;
    NSMutableArray *_lines;
    NSString *_searchDisplayName;
    NSMutableArray *_stopInfos;
    NSString *_subTitle;
    NSMutableArray *_systems;
    NSString *_title;
    NSMutableArray *_transitConnections;
    NSUInteger _transitId;
    GEOPDMapsIdentifier *_transitMarketId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}




+(id)transitInfoForPlaceData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif