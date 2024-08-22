// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREAMRESPONSELISTGENERATED_H
#define PREAMRESPONSELISTGENERATED_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PREAMResponseListGenerated : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int ageGroup; // ivar: _ageGroup
@property (retain, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (nonatomic) int generationStatus; // ivar: _generationStatus
@property (nonatomic) BOOL hasAgeGroup;
@property (readonly, nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasGenerationStatus;
@property (readonly, nonatomic) BOOL hasHostProcess;
@property (nonatomic) BOOL hasIsApricotDevice;
@property (nonatomic) BOOL hasIsCached;
@property (readonly, nonatomic) BOOL hasLang;
@property (readonly, nonatomic) BOOL hasLocale;
@property (nonatomic) BOOL hasNumberOfCustomResponses;
@property (nonatomic) BOOL hasNumberOfResponsesGenerated;
@property (nonatomic) BOOL hasNumberOfRobotResponses;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (readonly, nonatomic) BOOL hasTreatmentModelName;
@property (retain, nonatomic) NSString *hostProcess; // ivar: _hostProcess
@property (nonatomic) BOOL isApricotDevice; // ivar: _isApricotDevice
@property (nonatomic) BOOL isCached; // ivar: _isCached
@property (retain, nonatomic) NSString *lang; // ivar: _lang
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (nonatomic) unsigned int numberOfCustomResponses; // ivar: _numberOfCustomResponses
@property (nonatomic) unsigned int numberOfResponsesGenerated; // ivar: _numberOfResponsesGenerated
@property (nonatomic) unsigned int numberOfRobotResponses; // ivar: _numberOfRobotResponses
@property (retain, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (retain, nonatomic) NSString *treatmentModelName; // ivar: _treatmentModelName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)ageGroupAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)generationStatusAsString:(int)arg0 ;
-(int)StringAsAgeGroup:(id)arg0 ;
-(int)StringAsGenerationStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif