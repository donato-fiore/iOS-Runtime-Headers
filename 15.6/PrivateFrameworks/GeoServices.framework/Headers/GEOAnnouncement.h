// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOANNOUNCEMENT_H
#define GEOANNOUNCEMENT_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOPDFlyover.h"
#import "GEOMapRegion.h"

@interface GEOAnnouncement : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_buttonOneAppURI;
    NSString *_buttonOneMessage;
    NSString *_buttonTwoAppURI;
    NSString *_buttonTwoMessage;
    GEOPDFlyover *_flyoverInfo;
    GEOMapRegion *_mapRegion;
    NSString *_title;
    NSString *_userMessage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _announcementID;
    int _announcementType;
    unsigned int _displayDestinations;
    int _releasePhase;
    ? _flags;
}


@property (nonatomic) unsigned int announcementID;
@property (nonatomic) int announcementType;
@property (retain, nonatomic) NSString *buttonOneAppURI;
@property (retain, nonatomic) NSString *buttonOneMessage;
@property (retain, nonatomic) NSString *buttonTwoAppURI;
@property (retain, nonatomic) NSString *buttonTwoMessage;
@property (nonatomic) unsigned int displayDestinations;
@property (retain, nonatomic) GEOPDFlyover *flyoverInfo;
@property (nonatomic) BOOL hasAnnouncementID;
@property (nonatomic) BOOL hasAnnouncementType;
@property (readonly, nonatomic) BOOL hasButtonOneAppURI;
@property (readonly, nonatomic) BOOL hasButtonOneMessage;
@property (readonly, nonatomic) BOOL hasButtonTwoAppURI;
@property (readonly, nonatomic) BOOL hasButtonTwoMessage;
@property (nonatomic) BOOL hasDisplayDestinations;
@property (readonly, nonatomic) BOOL hasFlyoverInfo;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (nonatomic) BOOL hasReleasePhase;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasUserMessage;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) int releasePhase;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *userMessage;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)announcementTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)releasePhaseAsString:(int)arg0 ;
-(int)StringAsAnnouncementType:(id)arg0 ;
-(int)StringAsReleasePhase:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif