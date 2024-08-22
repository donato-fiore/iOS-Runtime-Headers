// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PREAMRESPONSEITEM_H
#define PREAMRESPONSEITEM_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PREAMResponseItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int ageGroup; // ivar: _ageGroup
@property (retain, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (nonatomic) BOOL hasAgeGroup;
@property (readonly, nonatomic) BOOL hasExperimentId;
@property (readonly, nonatomic) BOOL hasHostProcess;
@property (nonatomic) BOOL hasIsApricotDevice;
@property (nonatomic) BOOL hasIsCustomResponse;
@property (readonly, nonatomic) BOOL hasLang;
@property (readonly, nonatomic) BOOL hasLocale;
@property (nonatomic) BOOL hasModelId;
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) BOOL hasReplyTextId;
@property (nonatomic) BOOL hasResponseClassId;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (readonly, nonatomic) BOOL hasTreatmentModelName;
@property (retain, nonatomic) NSString *hostProcess; // ivar: _hostProcess
@property (nonatomic) BOOL isApricotDevice; // ivar: _isApricotDevice
@property (nonatomic) BOOL isCustomResponse; // ivar: _isCustomResponse
@property (retain, nonatomic) NSString *lang; // ivar: _lang
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (nonatomic) unsigned int modelId; // ivar: _modelId
@property (nonatomic) unsigned int position; // ivar: _position
@property (nonatomic) unsigned int replyTextId; // ivar: _replyTextId
@property (nonatomic) unsigned int responseClassId; // ivar: _responseClassId
@property (retain, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (retain, nonatomic) NSString *treatmentModelName; // ivar: _treatmentModelName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)ageGroupAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAgeGroup:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif