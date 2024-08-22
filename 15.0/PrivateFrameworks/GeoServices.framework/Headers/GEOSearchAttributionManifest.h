// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSEARCHATTRIBUTIONMANIFEST_H
#define GEOSEARCHATTRIBUTIONMANIFEST_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEOSearchAttributionManifest : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_actionComponentMapEntries;
    NSMutableArray *_searchAttributionSources;
    NSString *_sourceURL;
    CGFloat _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasSourceURL;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSString *sourceURL;
@property (nonatomic) CGFloat timestamp;


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