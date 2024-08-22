// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBTODAYPERSONALIZATIONEVENT_H
#define NTPBTODAYPERSONALIZATIONEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTPBTodayPersonalizationEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int action; // ivar: _action
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (nonatomic) CGFloat createdAt; // ivar: _createdAt
@property (nonatomic) NSInteger groupType; // ivar: _groupType
@property (nonatomic) BOOL hasAction;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasCreatedAt;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasHeadlinePublisher;
@property (nonatomic) BOOL hasOrderInGroup;
@property (nonatomic) BOOL hasOverallOrder;
@property (readonly, nonatomic) BOOL hasPersonalizationSectionFeatureId;
@property (nonatomic) BOOL hasSectionOrder;
@property (retain, nonatomic) NSString *headlinePublisher; // ivar: _headlinePublisher
@property (retain, nonatomic) NSMutableArray *headlineTopics; // ivar: _headlineTopics
@property (nonatomic) NSInteger orderInGroup; // ivar: _orderInGroup
@property (nonatomic) NSInteger overallOrder; // ivar: _overallOrder
@property (retain, nonatomic) NSString *personalizationSectionFeatureId; // ivar: _personalizationSectionFeatureId
@property (nonatomic) NSInteger sectionOrder; // ivar: _sectionOrder


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)headlineTopicsAtIndex:(NSUInteger)arg0 ;
-(void)addHeadlineTopics:(id)arg0 ;
-(void)clearHeadlineTopics;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif