// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOAPPLACECARDMODULE_H
#define GEOAPPLACECARDMODULE_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;



@interface GEOAPPlaceCardModule : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _contents;
    NSString *_metadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _type;
    ? _flags;
}


@property (readonly, nonatomic) *int contents;
@property (readonly, nonatomic) NSUInteger contentsCount;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *metadata;
@property (nonatomic) int type;


+(BOOL)isValid:(id)arg0 ;
+(id)moduleFromModuleType:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentsAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsContents:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(int)contentAtIndex:(NSUInteger)arg0 ;
-(void)addContent:(int)arg0 ;
-(void)clearContents;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif