// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCEMUSICTRAININGINDEPENDENTSIGNALS_H
#define INFERENCESCHEMAINFERENCEMUSICTRAININGINDEPENDENTSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCEMusicTrainingIndependentSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int appSelectionUses; // ivar: _appSelectionUses
@property (nonatomic) int clientDayOfWeek; // ivar: _clientDayOfWeek
@property (nonatomic) CGFloat foregroundBundleRecencyS; // ivar: _foregroundBundleRecencyS
@property (nonatomic) BOOL hasAppSelectionUses;
@property (nonatomic) BOOL hasClientDayOfWeek;
@property (nonatomic) BOOL hasForegroundBundleRecencyS;
@property (nonatomic) BOOL hasIsClientDaylight;
@property (nonatomic) BOOL hasIsClientNavigating;
@property (nonatomic) BOOL hasIsClientWorkout;
@property (nonatomic) BOOL hasIsMediaAlbumPresent;
@property (nonatomic) BOOL hasIsMediaArtistPresent;
@property (nonatomic) BOOL hasIsMediaGenrePresent;
@property (nonatomic) BOOL hasIsMediaMoodPresent;
@property (nonatomic) BOOL hasIsMediaNamePresent;
@property (nonatomic) BOOL hasIsMediaReleaseDatePresent;
@property (nonatomic) BOOL hasIsPireneRequest;
@property (nonatomic) BOOL hasMediaParsecCategory;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) BOOL hasNowPlayingLastBundleRecencyS;
@property (nonatomic) BOOL hasNowPlayingState;
@property (nonatomic) BOOL hasRawClientHourOfDay;
@property (nonatomic) BOOL hasRawLanguage;
@property (nonatomic) BOOL hasRawLocale;
@property (nonatomic) BOOL hasRawRegion;
@property (nonatomic) BOOL hasSirikitResponseCode;
@property (nonatomic) BOOL isClientDaylight; // ivar: _isClientDaylight
@property (nonatomic) BOOL isClientNavigating; // ivar: _isClientNavigating
@property (nonatomic) BOOL isClientWorkout; // ivar: _isClientWorkout
@property (nonatomic) BOOL isMediaAlbumPresent; // ivar: _isMediaAlbumPresent
@property (nonatomic) BOOL isMediaArtistPresent; // ivar: _isMediaArtistPresent
@property (nonatomic) BOOL isMediaGenrePresent; // ivar: _isMediaGenrePresent
@property (nonatomic) BOOL isMediaMoodPresent; // ivar: _isMediaMoodPresent
@property (nonatomic) BOOL isMediaNamePresent; // ivar: _isMediaNamePresent
@property (nonatomic) BOOL isMediaReleaseDatePresent; // ivar: _isMediaReleaseDatePresent
@property (nonatomic) BOOL isPireneRequest; // ivar: _isPireneRequest
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int mediaParsecCategory; // ivar: _mediaParsecCategory
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (nonatomic) unsigned int modelVersion; // ivar: _modelVersion
@property (nonatomic) int nowPlayingLastBundleRecencyS; // ivar: _nowPlayingLastBundleRecencyS
@property (nonatomic) int nowPlayingState; // ivar: _nowPlayingState
@property (nonatomic) int rawClientHourOfDay; // ivar: _rawClientHourOfDay
@property (nonatomic) NSInteger rawLanguage; // ivar: _rawLanguage
@property (nonatomic) NSInteger rawLocale; // ivar: _rawLocale
@property (nonatomic) NSInteger rawRegion; // ivar: _rawRegion
@property (nonatomic) int sirikitResponseCode; // ivar: _sirikitResponseCode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppSelectionUses;
-(void)deleteClientDayOfWeek;
-(void)deleteForegroundBundleRecencyS;
-(void)deleteIsClientDaylight;
-(void)deleteIsClientNavigating;
-(void)deleteIsClientWorkout;
-(void)deleteIsMediaAlbumPresent;
-(void)deleteIsMediaArtistPresent;
-(void)deleteIsMediaGenrePresent;
-(void)deleteIsMediaMoodPresent;
-(void)deleteIsMediaNamePresent;
-(void)deleteIsMediaReleaseDatePresent;
-(void)deleteIsPireneRequest;
-(void)deleteMediaParsecCategory;
-(void)deleteMediaType;
-(void)deleteModelVersion;
-(void)deleteNowPlayingLastBundleRecencyS;
-(void)deleteNowPlayingState;
-(void)deleteRawClientHourOfDay;
-(void)deleteRawLanguage;
-(void)deleteRawLocale;
-(void)deleteRawRegion;
-(void)deleteSirikitResponseCode;
-(void)writeTo:(id)arg0 ;


@end


#endif