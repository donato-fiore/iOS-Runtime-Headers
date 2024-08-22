// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICIAMMESSAGERULE_H
#define ICIAMMESSAGERULE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "ICIAMTriggerCondition.h"

@interface ICIAMMessageRule : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasRequiredApplicationContextBundleIdentifier;
@property (nonatomic) BOOL hasRuleOperator;
@property (readonly, nonatomic) BOOL hasTriggerCondition;
@property (readonly, nonatomic) BOOL hasTriggerEventName;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *requiredApplicationContextBundleIdentifier; // ivar: _requiredApplicationContextBundleIdentifier
@property (nonatomic) int ruleOperator; // ivar: _ruleOperator
@property (retain, nonatomic) NSMutableArray *subrules; // ivar: _subrules
@property (retain, nonatomic) ICIAMTriggerCondition *triggerCondition; // ivar: _triggerCondition
@property (retain, nonatomic) NSString *triggerEventName; // ivar: _triggerEventName
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)ruleOperatorAsString:(int)arg0 ;
-(id)subrulesAtIndex:(NSUInteger)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsRuleOperator:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addSubrules:(id)arg0 ;
-(void)clearSubrules;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif