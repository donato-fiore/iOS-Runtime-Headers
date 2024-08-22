// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMIMETRICSINFERENCEANDGROUNDTRUTH_H
#define SGMIMETRICSINFERENCEANDGROUNDTRUTH_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SGMIMetricsSubmodelsProbabilities.h"
#import "SGMIMetricsTrialMetadata.h"

@interface SGMIMetricsInferenceAndGroundTruth : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL estimatedGroundTruth; // ivar: _estimatedGroundTruth
@property (nonatomic) BOOL hasEstimatedGroundTruth;
@property (nonatomic) BOOL hasMissingAttachmentPredictionPerformanceInMilliSeconds;
@property (nonatomic) BOOL hasMissingRecipientPredictionPerformanceInMilliSeconds;
@property (nonatomic) BOOL hasPredictedSaliency;
@property (nonatomic) BOOL hasPredictedSaliencyScore;
@property (nonatomic) BOOL hasSaliencyPredictionPerformanceInMilliSeconds;
@property (readonly, nonatomic) BOOL hasSubmodelsProbabilities;
@property (readonly, nonatomic) BOOL hasTrialMetadata;
@property (nonatomic) NSUInteger missingAttachmentPredictionPerformanceInMilliSeconds; // ivar: _missingAttachmentPredictionPerformanceInMilliSeconds
@property (retain, nonatomic) NSMutableArray *missingAttachments; // ivar: _missingAttachments
@property (nonatomic) NSUInteger missingRecipientPredictionPerformanceInMilliSeconds; // ivar: _missingRecipientPredictionPerformanceInMilliSeconds
@property (retain, nonatomic) NSMutableArray *missingRecipients; // ivar: _missingRecipients
@property (nonatomic) int predictedSaliency; // ivar: _predictedSaliency
@property (nonatomic) float predictedSaliencyScore; // ivar: _predictedSaliencyScore
@property (nonatomic) NSUInteger saliencyPredictionPerformanceInMilliSeconds; // ivar: _saliencyPredictionPerformanceInMilliSeconds
@property (retain, nonatomic) SGMIMetricsSubmodelsProbabilities *submodelsProbabilities; // ivar: _submodelsProbabilities
@property (retain, nonatomic) SGMIMetricsTrialMetadata *trialMetadata; // ivar: _trialMetadata


+(Class)missingAttachmentType;
+(Class)missingRecipientType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)missingAttachmentAtIndex:(NSUInteger)arg0 ;
-(id)missingRecipientAtIndex:(NSUInteger)arg0 ;
-(id)predictedSaliencyAsString:(int)arg0 ;
-(int)StringAsPredictedSaliency:(id)arg0 ;
-(void)addMissingAttachment:(id)arg0 ;
-(void)addMissingRecipient:(id)arg0 ;
-(void)clearMissingAttachments;
-(void)clearMissingRecipients;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif