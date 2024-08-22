// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDPLACESUMMARYDYNAMICCONTEXTSERVEROVERRIDE_H
#define GEOPDPLACESUMMARYDYNAMICCONTEXTSERVEROVERRIDE_H

@class PBCodable, PBDataReader, NSMutableArray, NSArray;
@protocol NSCopying;



@interface GEOPDPlaceSummaryDynamicContextServerOverride : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_mapsIds;
    NSMutableArray *_serverDynamicContexts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) NSArray *mapItemIdentifiers;
@property (retain, nonatomic) NSMutableArray *mapsIds;
@property (retain, nonatomic) NSMutableArray *serverDynamicContexts;


+(BOOL)isValid:(id)arg0 ;
+(Class)mapsIdType;
+(Class)serverDynamicContextType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)mapsIdAtIndex:(NSUInteger)arg0 ;
-(id)serverDynamicContextAtIndex:(NSUInteger)arg0 ;
-(void)addMapsId:(id)arg0 ;
-(void)addServerDynamicContext:(id)arg0 ;
-(void)clearMapsIds;
-(void)clearServerDynamicContexts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif