// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPFEEDBACKREQUESTPARAMETERS_H
#define GEORPFEEDBACKREQUESTPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEORPFeedbackIdLookupParameters.h"
#import "GEORPFeedbackImageUploadParameters.h"
#import "GEORPFeedbackLayoutConfigParameters.h"
#import "GEORPFeedbackLogEventParameters.h"
#import "GEORPFeedbackQueryParameters.h"
#import "GEORPFeedbackSubmissionParameters.h"
#import "GEORPTdmFraudNotificationParameters.h"

@interface GEORPFeedbackRequestParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackIdLookupParameters *_idLookupParameters;
    GEORPFeedbackImageUploadParameters *_imageUploadParameters;
    GEORPFeedbackLayoutConfigParameters *_layoutConfigParameters;
    GEORPFeedbackLogEventParameters *_logEventParameters;
    GEORPFeedbackQueryParameters *_queryParameters;
    GEORPFeedbackSubmissionParameters *_submissionParameters;
    GEORPTdmFraudNotificationParameters *_tdmFraudNotificationParameters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasIdLookupParameters;
@property (readonly, nonatomic) BOOL hasImageUploadParameters;
@property (readonly, nonatomic) BOOL hasLayoutConfigParameters;
@property (readonly, nonatomic) BOOL hasLogEventParameters;
@property (readonly, nonatomic) BOOL hasQueryParameters;
@property (readonly, nonatomic) BOOL hasSubmissionParameters;
@property (readonly, nonatomic) BOOL hasTdmFraudNotificationParameters;
@property (retain, nonatomic) GEORPFeedbackIdLookupParameters *idLookupParameters;
@property (retain, nonatomic) GEORPFeedbackImageUploadParameters *imageUploadParameters;
@property (retain, nonatomic) GEORPFeedbackLayoutConfigParameters *layoutConfigParameters;
@property (retain, nonatomic) GEORPFeedbackLogEventParameters *logEventParameters;
@property (retain, nonatomic) GEORPFeedbackQueryParameters *queryParameters;
@property (retain, nonatomic) GEORPFeedbackSubmissionParameters *submissionParameters;
@property (retain, nonatomic) GEORPTdmFraudNotificationParameters *tdmFraudNotificationParameters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPOIEnrichment;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initForRunningTrackIssue:(int)arg0 trackCoordinateLatitude:(CGFloat)arg1 trackCoordinateLongitude:(CGFloat)arg2 trackFeatureID:(id)arg3 nameOfTrack:(id)arg4 numberOfLanes:(id)arg5 comment:(id)arg6 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIncidentAnnotationDetails:(id)arg0 userPath:(id)arg1 ;
-(id)initWithIncidentLocation:(id)arg0 userLocation:(id)arg1 type:(int)arg2 historicalLocations:(id)arg3 userPath:(id)arg4 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithMerchantIndustryCode:(NSInteger)arg0 mapsIdentifier:(NSUInteger)arg1 merchantName:(id)arg2 merchantRawName:(id)arg3 merchantIndustryCategory:(id)arg4 merchantURL:(id)arg5 merchantFormattedAddress:(id)arg6 transactionTime:(CGFloat)arg7 transactionType:(id)arg8 transactionLocation:(struct ? )arg9 ;
-(id)jsonRepresentation;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif