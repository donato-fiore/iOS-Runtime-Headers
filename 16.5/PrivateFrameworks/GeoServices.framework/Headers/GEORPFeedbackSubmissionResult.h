// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPFEEDBACKSUBMISSIONRESULT_H
#define GEORPFEEDBACKSUBMISSIONRESULT_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEORPPhotoAttributionPreferencesUpdateResult.h"
#import "GEORPRapProfileInfo.h"
#import "GEORPTdmFraudRequestInfo.h"
#import "GEORPThirdPartyPhotoSharingPreferenceUpdateResult.h"

@interface GEORPFeedbackSubmissionResult : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_feedbackId;
    NSMutableArray *_imageIdMapEntrys;
    GEORPPhotoAttributionPreferencesUpdateResult *_photoAttributionPreferencesUpdateResult;
    GEORPRapProfileInfo *_rapInfo;
    GEORPTdmFraudRequestInfo *_tdmFraudRequestInfo;
    GEORPThirdPartyPhotoSharingPreferenceUpdateResult *_thirdPartyPhotoSharingPreferenceUpdateResult;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSString *feedbackId;
@property (readonly, nonatomic) BOOL hasFeedbackId;
@property (readonly, nonatomic) BOOL hasPhotoAttributionPreferencesUpdateResult;
@property (readonly, nonatomic) BOOL hasRapInfo;
@property (readonly, nonatomic) BOOL hasTdmFraudRequestInfo;
@property (readonly, nonatomic) BOOL hasThirdPartyPhotoSharingPreferenceUpdateResult;
@property (retain, nonatomic) NSMutableArray *imageIdMapEntrys;
@property (retain, nonatomic) GEORPPhotoAttributionPreferencesUpdateResult *photoAttributionPreferencesUpdateResult;
@property (retain, nonatomic) GEORPRapProfileInfo *rapInfo;
@property (retain, nonatomic) GEORPTdmFraudRequestInfo *tdmFraudRequestInfo;
@property (retain, nonatomic) GEORPThirdPartyPhotoSharingPreferenceUpdateResult *thirdPartyPhotoSharingPreferenceUpdateResult;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)imageIdMapEntryType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)imageIdMapEntryAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addImageIdMapEntry:(id)arg0 ;
-(void)clearImageIdMapEntrys;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif