// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HALSCHEMAHALCROSSDEVICECOMMANDEXECUTIONENDED_H
#define HALSCHEMAHALCROSSDEVICECOMMANDEXECUTIONENDED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface HALSchemaHALCrossDeviceCommandExecutionEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int action; // ivar: _action
@property (nonatomic) int actionResult; // ivar: _actionResult
@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL hasActionResult;
@property (nonatomic) BOOL hasHomeKitTarget;
@property (nonatomic) int homeKitTarget; // ivar: _homeKitTarget
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *selecteds; // ivar: _selecteds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)selectedCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)selectedAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addSelected:(id)arg0 ;
-(void)clearSelected;
-(void)deleteAction;
-(void)deleteActionResult;
-(void)deleteHomeKitTarget;
-(void)deleteSelected;
-(void)writeTo:(id)arg0 ;


@end


#endif