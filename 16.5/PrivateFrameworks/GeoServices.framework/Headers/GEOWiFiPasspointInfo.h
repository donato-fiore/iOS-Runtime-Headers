// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOWIFIPASSPOINTINFO_H
#define GEOWIFIPASSPOINTINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOWiFiPasspointInfo : PBCodable <NSCopying>

 {
    NSString *_venueName;
    int _networkType;
    int _venueGroup;
    unsigned int _venueType;
    ? _flags;
}


@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) BOOL hasVenueGroup;
@property (readonly, nonatomic) BOOL hasVenueName;
@property (nonatomic) BOOL hasVenueType;
@property (nonatomic) int networkType;
@property (nonatomic) int venueGroup;
@property (retain, nonatomic) NSString *venueName;
@property (nonatomic) unsigned int venueType;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)networkTypeAsString:(int)arg0 ;
-(id)venueGroupAsString:(int)arg0 ;
-(int)StringAsNetworkType:(id)arg0 ;
-(int)StringAsVenueGroup:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif