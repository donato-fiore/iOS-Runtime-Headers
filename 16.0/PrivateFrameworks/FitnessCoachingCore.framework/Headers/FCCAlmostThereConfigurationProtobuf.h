// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCALMOSTTHERECONFIGURATIONPROTOBUF_H
#define FCCALMOSTTHERECONFIGURATIONPROTOBUF_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "FCCTimeOfDayRuleProtobuf.h"

@interface FCCAlmostThereConfigurationProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *coalescingRules; // ivar: _coalescingRules
@property (nonatomic) CGFloat goalBufferPercentage; // ivar: _goalBufferPercentage
@property (nonatomic) int goalType; // ivar: _goalType
@property (nonatomic) BOOL hasGoalBufferPercentage;
@property (nonatomic) BOOL hasGoalType;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasMinimumPercentageComplete;
@property (readonly, nonatomic) BOOL hasTimeOfDayRule;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGFloat minimumPercentageComplete; // ivar: _minimumPercentageComplete
@property (retain, nonatomic) FCCTimeOfDayRuleProtobuf *timeOfDayRule; // ivar: _timeOfDayRule


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)coalescingRulesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCoalescingRules:(id)arg0 ;
-(void)clearCoalescingRules;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif