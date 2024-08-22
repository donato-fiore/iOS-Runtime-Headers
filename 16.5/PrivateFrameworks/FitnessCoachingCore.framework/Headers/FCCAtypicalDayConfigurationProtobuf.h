// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCATYPICALDAYCONFIGURATIONPROTOBUF_H
#define FCCATYPICALDAYCONFIGURATIONPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "FCCPercentageOfDayRuleProtobuf.h"

@interface FCCAtypicalDayConfigurationProtobuf : PBCodable <NSCopying>

 {
    ? _allowedGoalTypes;
    ? _has;
}


@property (readonly, nonatomic) *int allowedGoalTypes;
@property (readonly, nonatomic) NSUInteger allowedGoalTypesCount;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasMinimumAheadPercentage;
@property (nonatomic) BOOL hasMinimumBehindPercentage;
@property (readonly, nonatomic) BOOL hasPercentageOfDayRule;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGFloat minimumAheadPercentage; // ivar: _minimumAheadPercentage
@property (nonatomic) CGFloat minimumBehindPercentage; // ivar: _minimumBehindPercentage
@property (retain, nonatomic) FCCPercentageOfDayRuleProtobuf *percentageOfDayRule; // ivar: _percentageOfDayRule


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)allowedGoalTypesAtIndex:(NSUInteger)arg0 ;
-(void)addAllowedGoalTypes:(int)arg0 ;
-(void)clearAllowedGoalTypes;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif