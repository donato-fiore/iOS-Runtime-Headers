// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCCOMPLETIONOFFTRACKCONFIGURATIONPROTOBUF_H
#define FCCCOMPLETIONOFFTRACKCONFIGURATIONPROTOBUF_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "FCCPercentageOfDayRuleProtobuf.h"

@interface FCCCompletionOffTrackConfigurationProtobuf : PBCodable <NSCopying>

 {
    ? _allowedGoalTypes;
    ? _has;
}


@property (readonly, nonatomic) *int allowedGoalTypes;
@property (readonly, nonatomic) NSUInteger allowedGoalTypesCount;
@property (retain, nonatomic) NSMutableArray *coalescingRules; // ivar: _coalescingRules
@property (nonatomic) CGFloat goalBufferPercentage; // ivar: _goalBufferPercentage
@property (nonatomic) BOOL hasGoalBufferPercentage;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasPercentageOfDayRule;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) FCCPercentageOfDayRuleProtobuf *percentageOfDayRule; // ivar: _percentageOfDayRule


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)coalescingRulesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)allowedGoalTypesAtIndex:(NSUInteger)arg0 ;
-(void)addAllowedGoalTypes:(int)arg0 ;
-(void)addCoalescingRules:(id)arg0 ;
-(void)clearAllowedGoalTypes;
-(void)clearCoalescingRules;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif