// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMIMETRICSSUBMODELSSTATS_H
#define SGMIMETRICSSUBMODELSSTATS_H

@class PBCodable;
@protocol NSCopying;


#import "SGMIMetricsSubmodelStats.h"

@interface SGMIMetricsSubmodelsStats : PBCodable <NSCopying>



@property (retain, nonatomic) SGMIMetricsSubmodelStats *attachmentsStats; // ivar: _attachmentsStats
@property (retain, nonatomic) SGMIMetricsSubmodelStats *conversationStats; // ivar: _conversationStats
@property (retain, nonatomic) SGMIMetricsSubmodelStats *domainFromSenderStats; // ivar: _domainFromSenderStats
@property (readonly, nonatomic) BOOL hasAttachmentsStats;
@property (readonly, nonatomic) BOOL hasConversationStats;
@property (readonly, nonatomic) BOOL hasDomainFromSenderStats;
@property (readonly, nonatomic) BOOL hasListIdStats;
@property (readonly, nonatomic) BOOL hasMailboxStats;
@property (readonly, nonatomic) BOOL hasMailboxTypeStats;
@property (readonly, nonatomic) BOOL hasPersonCCRecipientsStats;
@property (readonly, nonatomic) BOOL hasPersonFromSenderInDyadicConversationStats;
@property (readonly, nonatomic) BOOL hasPersonFromSenderStats;
@property (readonly, nonatomic) BOOL hasPersonToRecipientsStats;
@property (readonly, nonatomic) BOOL hasStandardMailRulesStats;
@property (readonly, nonatomic) BOOL hasSubjectContentStats;
@property (readonly, nonatomic) BOOL hasSubjectCountStatsStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *listIdStats; // ivar: _listIdStats
@property (retain, nonatomic) SGMIMetricsSubmodelStats *mailboxStats; // ivar: _mailboxStats
@property (retain, nonatomic) SGMIMetricsSubmodelStats *mailboxTypeStats; // ivar: _mailboxTypeStats
@property (retain, nonatomic) SGMIMetricsSubmodelStats *personCCRecipientsStats; // ivar: _personCCRecipientsStats
@property (retain, nonatomic) SGMIMetricsSubmodelStats *personFromSenderInDyadicConversationStats; // ivar: _personFromSenderInDyadicConversationStats
@property (retain, nonatomic) SGMIMetricsSubmodelStats *personFromSenderStats; // ivar: _personFromSenderStats
@property (retain, nonatomic) SGMIMetricsSubmodelStats *personToRecipientsStats; // ivar: _personToRecipientsStats
@property (retain, nonatomic) SGMIMetricsSubmodelStats *standardMailRulesStats; // ivar: _standardMailRulesStats
@property (retain, nonatomic) SGMIMetricsSubmodelStats *subjectContentStats; // ivar: _subjectContentStats
@property (retain, nonatomic) SGMIMetricsSubmodelStats *subjectCountStatsStats; // ivar: _subjectCountStatsStats


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