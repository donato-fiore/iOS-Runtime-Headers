// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREAMRESPONSESVIEWED_H
#define PREAMRESPONSESVIEWED_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PREAMResponsesViewed : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int ageGroup; // ivar: _ageGroup
@property (retain, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (nonatomic) BOOL hasAgeGroup;
@property (readonly, nonatomic) BOOL hasExperimentId;
@property (readonly, nonatomic) BOOL hasHostProcess;
@property (nonatomic) BOOL hasIsApricotDevice;
@property (nonatomic) BOOL hasLastViewedIndex;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (readonly, nonatomic) BOOL hasTreatmentModelName;
@property (retain, nonatomic) NSString *hostProcess; // ivar: _hostProcess
@property (nonatomic) BOOL isApricotDevice; // ivar: _isApricotDevice
@property (nonatomic) unsigned int lastViewedIndex; // ivar: _lastViewedIndex
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