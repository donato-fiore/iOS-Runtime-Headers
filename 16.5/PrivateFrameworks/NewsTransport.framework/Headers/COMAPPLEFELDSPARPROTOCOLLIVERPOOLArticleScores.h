// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMAPPLEFELDSPARPROTOCOLLIVERPOOLARTICLESCORES_H
#define COMAPPLEFELDSPARPROTOCOLLIVERPOOLARTICLESCORES_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList.h"

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores : PBCodable <NSCopying>



@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts; // ivar: _globalCohorts
@property (readonly, nonatomic) BOOL hasGlobalCohorts;
@property (readonly, nonatomic) BOOL hasSourceChannelCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *sourceChannelCohorts; // ivar: _sourceChannelCohorts
@property (retain, nonatomic) NSMutableArray *topicCohortScores; // ivar: _topicCohortScores
@property (retain, nonatomic) NSMutableArray *topicCohorts; // ivar: _topicCohorts


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)topicCohortScoresAtIndex:(NSUInteger)arg0 ;
-(id)topicCohortsAtIndex:(NSUInteger)arg0 ;
-(void)addTopicCohortScores:(id)arg0 ;
-(void)addTopicCohorts:(id)arg0 ;
-(void)clearTopicCohortScores;
-(void)clearTopicCohorts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif