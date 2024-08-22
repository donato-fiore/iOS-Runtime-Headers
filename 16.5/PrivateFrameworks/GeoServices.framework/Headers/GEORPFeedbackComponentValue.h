// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPFEEDBACKCOMPONENTVALUE_H
#define GEORPFEEDBACKCOMPONENTVALUE_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEORPFeedbackConversation.h"
#import "GEORPFeedbackNotification.h"
#import "GEORPFeedbackOverview.h"
#import "GEORPPhotoAttributionPreferences.h"
#import "GEORPPoiEnrichment.h"
#import "GEORPRapInfo.h"
#import "GEORPThirdPartyPhotoSharingPreference.h"

@interface GEORPFeedbackComponentValue : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackConversation *_conversation;
    GEORPFeedbackNotification *_notification;
    GEORPFeedbackOverview *_overview;
    GEORPPhotoAttributionPreferences *_photoAttributionPreferences;
    GEORPPoiEnrichment *_poiEnrichment;
    GEORPRapInfo *_rapInfo;
    GEORPThirdPartyPhotoSharingPreference *_thirdPartyPhotoSharingPreferences;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEORPFeedbackConversation *conversation;
@property (readonly, nonatomic) BOOL hasConversation;
@property (readonly, nonatomic) BOOL hasNotification;
@property (readonly, nonatomic) BOOL hasOverview;
@property (readonly, nonatomic) BOOL hasPhotoAttributionPreferences;
@property (readonly, nonatomic) BOOL hasPoiEnrichment;
@property (readonly, nonatomic) BOOL hasRapInfo;
@property (readonly, nonatomic) BOOL hasThirdPartyPhotoSharingPreferences;
@property (retain, nonatomic) GEORPFeedbackNotification *notification;
@property (retain, nonatomic) GEORPFeedbackOverview *overview;
@property (retain, nonatomic) GEORPPhotoAttributionPreferences *photoAttributionPreferences;
@property (retain, nonatomic) GEORPPoiEnrichment *poiEnrichment;
@property (retain, nonatomic) GEORPRapInfo *rapInfo;
@property (retain, nonatomic) GEORPThirdPartyPhotoSharingPreference *thirdPartyPhotoSharingPreferences;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif