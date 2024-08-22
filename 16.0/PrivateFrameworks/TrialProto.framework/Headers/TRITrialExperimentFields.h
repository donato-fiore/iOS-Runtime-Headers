// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRITRIALEXPERIMENTFIELDS_H
#define TRITRIALEXPERIMENTFIELDS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface TRITrialExperimentFields : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *clientExperimentId; // ivar: _clientExperimentId
@property (retain, nonatomic) NSString *clientTreatmentId; // ivar: _clientTreatmentId
@property (readonly, nonatomic) BOOL hasClientExperimentId;
@property (readonly, nonatomic) BOOL hasClientTreatmentId;


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