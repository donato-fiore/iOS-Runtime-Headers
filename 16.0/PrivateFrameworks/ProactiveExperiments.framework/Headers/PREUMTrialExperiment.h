// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREUMTRIALEXPERIMENT_H
#define PREUMTRIALEXPERIMENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PREUMTrialExperiment : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (readonly, nonatomic) BOOL hasExperimentId;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (readonly, nonatomic) BOOL hasTreatmentModelName;
@property (retain, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (retain, nonatomic) NSString *treatmentModelName; // ivar: _treatmentModelName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif