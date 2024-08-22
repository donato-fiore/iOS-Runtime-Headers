// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPUBLISHERATTRIBUTIONSOURCE_H
#define GEOPUBLISHERATTRIBUTIONSOURCE_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOPublisherAttributionSource : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_appAdamID;
    NSMutableArray *_localizedAttributions;
    NSString *_websiteURL;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSString *appAdamID;
@property (readonly, nonatomic) BOOL hasAppAdamID;
@property (readonly, nonatomic) BOOL hasWebsiteURL;
@property (retain, nonatomic) NSMutableArray *localizedAttributions;
@property (retain, nonatomic) NSString *websiteURL;


+(BOOL)isValid:(id)arg0 ;
+(Class)localizedAttributionType;
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
-(id)localizedAttributionAtIndex:(NSUInteger)arg0 ;
-(void)addLocalizedAttribution:(id)arg0 ;
-(void)clearLocalizedAttributions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif