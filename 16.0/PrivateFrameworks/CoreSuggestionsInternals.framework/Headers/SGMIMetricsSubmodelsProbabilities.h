// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMIMETRICSSUBMODELSPROBABILITIES_H
#define SGMIMETRICSSUBMODELSPROBABILITIES_H

@class PBCodable;
@protocol NSCopying;



@interface SGMIMetricsSubmodelsProbabilities : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) float attachmentsProbability; // ivar: _attachmentsProbability
@property (nonatomic) float conversationProbability; // ivar: _conversationProbability
@property (nonatomic) float domainFromSenderProbability; // ivar: _domainFromSenderProbability
@property (nonatomic) BOOL hasAttachmentsProbability;
@property (nonatomic) BOOL hasConversationProbability;
@property (nonatomic) BOOL hasDomainFromSenderProbability;
@property (nonatomic) BOOL hasListIdProbability;
@property (nonatomic) BOOL hasMailboxProbability;
@property (nonatomic) BOOL hasMailboxTypeProbability;
@property (nonatomic) BOOL hasPersonCCRecipientsProbability;
@property (nonatomic) BOOL hasPersonFromSenderInDyadicConversationProbability;
@property (nonatomic) BOOL hasPersonFromSenderProbability;
@property (nonatomic) BOOL hasPersonToRecipientsProbability;
@property (nonatomic) BOOL hasStandardMailRulesProbability;
@property (nonatomic) BOOL hasSubjectContentProbability;
@property (nonatomic) BOOL hasSubjectCountStatsProbability;
@property (nonatomic) float listIdProbability; // ivar: _listIdProbability
@property (nonatomic) float mailboxProbability; // ivar: _mailboxProbability
@property (nonatomic) float mailboxTypeProbability; // ivar: _mailboxTypeProbability
@property (nonatomic) float personCCRecipientsProbability; // ivar: _personCCRecipientsProbability
@property (nonatomic) float personFromSenderInDyadicConversationProbability; // ivar: _personFromSenderInDyadicConversationProbability
@property (nonatomic) float personFromSenderProbability; // ivar: _personFromSenderProbability
@property (nonatomic) float personToRecipientsProbability; // ivar: _personToRecipientsProbability
@property (nonatomic) float standardMailRulesProbability; // ivar: _standardMailRulesProbability
@property (nonatomic) float subjectContentProbability; // ivar: _subjectContentProbability
@property (nonatomic) float subjectCountStatsProbability; // ivar: _subjectCountStatsProbability


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