// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMIMETRICSSUBMODELOUTPUTVECTOR_H
#define SGMIMETRICSSUBMODELOUTPUTVECTOR_H

@class PBCodable;
@protocol NSCopying;



@interface SGMIMetricsSubmodelOutputVector : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) float conversationProbability; // ivar: _conversationProbability
@property (nonatomic) float domainFromSenderProbability; // ivar: _domainFromSenderProbability
@property (nonatomic) BOOL hasConversationProbability;
@property (nonatomic) BOOL hasDomainFromSenderProbability;
@property (nonatomic) BOOL hasPersonCCRecipientsProbability;
@property (nonatomic) BOOL hasPersonFromSenderInDyadicConversationProbability;
@property (nonatomic) BOOL hasPersonFromSenderProbability;
@property (nonatomic) BOOL hasPersonToRecipientsProbability;
@property (nonatomic) BOOL hasSubjectContentProbability;
@property (nonatomic) float personCCRecipientsProbability; // ivar: _personCCRecipientsProbability
@property (nonatomic) float personFromSenderInDyadicConversationProbability; // ivar: _personFromSenderInDyadicConversationProbability
@property (nonatomic) float personFromSenderProbability; // ivar: _personFromSenderProbability
@property (nonatomic) float personToRecipientsProbability; // ivar: _personToRecipientsProbability
@property (nonatomic) float subjectContentProbability; // ivar: _subjectContentProbability


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