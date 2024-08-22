// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWHOMEAUTOMATIONREQUESTMETADATA_H
#define FLOWSCHEMAFLOWHOMEAUTOMATIONREQUESTMETADATA_H

@class NSData, NSString, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWHomeAutomationRequestMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int conditionType; // ivar: _conditionType
@property (nonatomic) unsigned int fulfilledEntityCount; // ivar: _fulfilledEntityCount
@property (nonatomic) BOOL hasConditionType;
@property (nonatomic) BOOL hasFulfilledEntityCount;
@property (nonatomic) BOOL hasIsHomeAutomationRequestAsynchronous;
@property (nonatomic) BOOL hasIsRecurring;
@property (nonatomic) BOOL hasSmallestTargetedContainer;
@property (nonatomic) BOOL hasTargetAttribute; // ivar: _hasTargetAttribute
@property (nonatomic) BOOL hasTargetedEntityCount;
@property (nonatomic) BOOL isHomeAutomationRequestAsynchronous; // ivar: _isHomeAutomationRequestAsynchronous
@property (nonatomic) BOOL isRecurring; // ivar: _isRecurring
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int smallestTargetedContainer; // ivar: _smallestTargetedContainer
@property (copy, nonatomic) NSString *targetAttribute; // ivar: _targetAttribute
@property (nonatomic) unsigned int targetedEntityCount; // ivar: _targetedEntityCount
@property (copy, nonatomic) NSArray *targetedEntityTypes; // ivar: _targetedEntityTypes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)targetedEntityTypesAtIndex:(NSUInteger)arg0 ;
-(void)addTargetedEntityTypes:(id)arg0 ;
-(void)clearTargetedEntityTypes;
-(void)deleteConditionType;
-(void)deleteFulfilledEntityCount;
-(void)deleteIsHomeAutomationRequestAsynchronous;
-(void)deleteIsRecurring;
-(void)deleteSmallestTargetedContainer;
-(void)deleteTargetAttribute;
-(void)deleteTargetedEntityCount;
-(void)deleteTargetedEntityTypes;
-(void)writeTo:(id)arg0 ;


@end


#endif