// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMIMETRICSGROUNDTRUTHESTIMATIONEVENT_H
#define SGMIMETRICSGROUNDTRUTHESTIMATIONEVENT_H

@class PBCodable;
@protocol NSCopying;


#import "SGMIMetricsTrialMetadata.h"

@interface SGMIMetricsGroundTruthEstimationEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL estimatedGroundTruth; // ivar: _estimatedGroundTruth
@property (nonatomic) BOOL hasEstimatedGroundTruth;
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) BOOL hasTimestampSinceReferenceGTE;
@property (nonatomic) BOOL hasTimestampSinceReferenceMail;
@property (readonly, nonatomic) BOOL hasTrialMetadata;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) NSUInteger messageId; // ivar: _messageId
@property (nonatomic) CGFloat timestampSinceReferenceGTE; // ivar: _timestampSinceReferenceGTE
@property (nonatomic) CGFloat timestampSinceReferenceMail; // ivar: _timestampSinceReferenceMail
@property (retain, nonatomic) SGMIMetricsTrialMetadata *trialMetadata; // ivar: _trialMetadata
@property (nonatomic) NSUInteger userId; // ivar: _userId


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