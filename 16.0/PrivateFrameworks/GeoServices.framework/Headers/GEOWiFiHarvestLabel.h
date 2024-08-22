// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOWIFIHARVESTLABEL_H
#define GEOWIFIHARVESTLABEL_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;



@interface GEOWiFiHarvestLabel : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_comment;
    NSString *_internalIdentifier;
    NSString *_venueCategory;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _networkType;
    int _originator;
    ? _flags;
}


@property (retain, nonatomic) NSString *comment;
@property (readonly, nonatomic) BOOL hasComment;
@property (readonly, nonatomic) BOOL hasInternalIdentifier;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) BOOL hasOriginator;
@property (readonly, nonatomic) BOOL hasVenueCategory;
@property (retain, nonatomic) NSString *internalIdentifier;
@property (nonatomic) int networkType;
@property (nonatomic) int originator;
@property (retain, nonatomic) NSString *venueCategory;


+(BOOL)isValid:(id)arg0 ;
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
-(id)networkTypeAsString:(int)arg0 ;
-(id)originatorAsString:(int)arg0 ;
-(int)StringAsNetworkType:(id)arg0 ;
-(int)StringAsOriginator:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif