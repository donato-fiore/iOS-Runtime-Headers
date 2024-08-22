// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPFEEDBACKREQUEST_H
#define GEORPFEEDBACKREQUEST_H

@class PBRequest, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOABSecondPartyPlaceRequestClientMetaData.h"
#import "GEOPDAnalyticMetadata.h"
#import "GEORPClientCapabilities.h"
#import "GEOPDClientMetadata.h"
#import "GEORPDebugSettings.h"
#import "GEORPFeedbackRequestParameters.h"
#import "GEORPFeedbackUserInfo.h"

@interface GEORPFeedbackRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOABSecondPartyPlaceRequestClientMetaData *_abClientMetadata;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEORPClientCapabilities *_clientCapabilities;
    GEOPDClientMetadata *_clientMetadata;
    GEORPDebugSettings *_debugSettings;
    NSMutableArray *_displayLanguages;
    GEORPFeedbackRequestParameters *_feedbackRequestParameters;
    GEORPFeedbackUserInfo *_userInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _feedbackRequestType;
    ? _flags;
}


@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *abClientMetadata;
@property (retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property (retain, nonatomic) GEORPClientCapabilities *clientCapabilities;
@property (retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property (retain, nonatomic) GEORPDebugSettings *debugSettings;
@property (retain, nonatomic) NSMutableArray *displayLanguages;
@property (retain, nonatomic) GEORPFeedbackRequestParameters *feedbackRequestParameters;
@property (nonatomic) int feedbackRequestType;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (readonly, nonatomic) BOOL hasAnalyticMetadata;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (readonly, nonatomic) BOOL hasDebugSettings;
@property (readonly, nonatomic) BOOL hasFeedbackRequestParameters;
@property (nonatomic) BOOL hasFeedbackRequestType;
@property (readonly, nonatomic) BOOL hasUserInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) GEORPFeedbackUserInfo *userInfo;


+(BOOL)isValid:(id)arg0 ;
+(Class)displayLanguageType;
+(id)clientTestingDebugSettings;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPOIEnrichment;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayLanguageAtIndex:(NSUInteger)arg0 ;
-(id)feedbackRequestTypeAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFeedbackRequestParameters:(id)arg0 traits:(id)arg1 ;
-(id)initWithFeedbackRequestParameters:(id)arg0 userCredentials:(id)arg1 pushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4 ;
-(id)initWithFeedbackRequestParameters:(id)arg0 userInfo:(id)arg1 traits:(id)arg2 ;
-(id)initWithFeedbackRequestParameters:(id)arg0 userInfo:(id)arg1 traits:(id)arg2 debugSettings:(id)arg3 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsFeedbackRequestType:(id)arg0 ;
-(unsigned int)requestTypeCode;
-(void)_initForSubmissionParameters;
-(void)_setupSubmissionParameters;
-(void)_sharedInitWithRequestParameters:(id)arg0 userInfo:(id)arg1 traits:(id)arg2 debugSettings:(id)arg3 ;
-(void)addDisplayLanguage:(id)arg0 ;
-(void)clearDisplayLanguages;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif