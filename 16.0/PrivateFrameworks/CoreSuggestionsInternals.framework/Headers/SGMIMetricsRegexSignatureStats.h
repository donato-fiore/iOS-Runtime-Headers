// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMIMETRICSREGEXSIGNATURESTATS_H
#define SGMIMETRICSREGEXSIGNATURESTATS_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "SGMIMetricsTrialMetadata.h"

@interface SGMIMetricsRegexSignatureStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasLocale;
@property (nonatomic) BOOL hasNumberOfLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) BOOL hasNumberOfLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) BOOL hasNumberOfPredictedAttachmentOnLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) BOOL hasNumberOfPredictedAttachmentOnLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) BOOL hasTotalNumberOfEmailsProcessedForAttachmentDetectionRoundedToClosestMultipleOf20;
@property (nonatomic) BOOL hasTotalNumberOfEmailsProcessedForFollowUpDetectionRoundedToClosestMultipleOf20;
@property (nonatomic) BOOL hasTotalNumberOfEmailsProcessedForRecipientDetectionRoundedToClosestMultipleOf20;
@property (readonly, nonatomic) BOOL hasTrialMetadata;
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (nonatomic) unsigned int numberOfLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20; // ivar: _numberOfLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20
@property (nonatomic) unsigned int numberOfLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20; // ivar: _numberOfLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20
@property (nonatomic) unsigned int numberOfPredictedAttachmentOnLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20; // ivar: _numberOfPredictedAttachmentOnLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20
@property (nonatomic) unsigned int numberOfPredictedAttachmentOnLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20; // ivar: _numberOfPredictedAttachmentOnLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20
@property (retain, nonatomic) NSMutableArray *stats; // ivar: _stats
@property (nonatomic) unsigned int totalNumberOfEmailsProcessedForAttachmentDetectionRoundedToClosestMultipleOf20; // ivar: _totalNumberOfEmailsProcessedForAttachmentDetectionRoundedToClosestMultipleOf20
@property (nonatomic) unsigned int totalNumberOfEmailsProcessedForFollowUpDetectionRoundedToClosestMultipleOf20; // ivar: _totalNumberOfEmailsProcessedForFollowUpDetectionRoundedToClosestMultipleOf20
@property (nonatomic) unsigned int totalNumberOfEmailsProcessedForRecipientDetectionRoundedToClosestMultipleOf20; // ivar: _totalNumberOfEmailsProcessedForRecipientDetectionRoundedToClosestMultipleOf20
@property (retain, nonatomic) SGMIMetricsTrialMetadata *trialMetadata; // ivar: _trialMetadata


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statsAtIndex:(NSUInteger)arg0 ;
-(void)addStats:(id)arg0 ;
-(void)clearStats;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif