// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMIMETRICSSUBMODELAGEVECTOR_H
#define SGMIMETRICSSUBMODELAGEVECTOR_H

@class PBCodable;
@protocol NSCopying;



@interface SGMIMetricsSubmodelAgeVector : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) float conversationAge; // ivar: _conversationAge
@property (nonatomic) float domainFromSenderAge; // ivar: _domainFromSenderAge
@property (nonatomic) BOOL hasConversationAge;
@property (nonatomic) BOOL hasDomainFromSenderAge;
@property (nonatomic) BOOL hasPersonCCRecipientsAge;
@property (nonatomic) BOOL hasPersonFromSenderAge;
@property (nonatomic) BOOL hasPersonFromSenderInDyadicConversationAge;
@property (nonatomic) BOOL hasPersonToRecipientsAge;
@property (nonatomic) BOOL hasSubjectContentAge;
@property (nonatomic) float personCCRecipientsAge; // ivar: _personCCRecipientsAge
@property (nonatomic) float personFromSenderAge; // ivar: _personFromSenderAge
@property (nonatomic) float personFromSenderInDyadicConversationAge; // ivar: _personFromSenderInDyadicConversationAge
@property (nonatomic) float personToRecipientsAge; // ivar: _personToRecipientsAge
@property (nonatomic) float subjectContentAge; // ivar: _subjectContentAge


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