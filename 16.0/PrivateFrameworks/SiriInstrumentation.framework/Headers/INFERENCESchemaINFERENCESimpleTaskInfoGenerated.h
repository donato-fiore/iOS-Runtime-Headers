// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCESIMPLETASKINFOGENERATED_H
#define INFERENCESCHEMAINFERENCESIMPLETASKINFOGENERATED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "INFERENCESchemaINFERENCETaskSpecificInfo.h"

@interface INFERENCESchemaINFERENCESimpleTaskInfoGenerated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsExecuted;
@property (nonatomic) BOOL hasIsSuccess;
@property (nonatomic) BOOL hasIsSuccessfulDirectExecution;
@property (nonatomic) BOOL hasOriginalResolutionContextId; // ivar: _hasOriginalResolutionContextId
@property (nonatomic) BOOL hasTaskSpecificInfo; // ivar: _hasTaskSpecificInfo
@property (nonatomic) BOOL hasTaskSuccessType;
@property (nonatomic) BOOL isExecuted; // ivar: _isExecuted
@property (nonatomic) BOOL isSuccess; // ivar: _isSuccess
@property (nonatomic) BOOL isSuccessfulDirectExecution; // ivar: _isSuccessfulDirectExecution
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *originalResolutionContextId; // ivar: _originalResolutionContextId
@property (retain, nonatomic) INFERENCESchemaINFERENCETaskSpecificInfo *taskSpecificInfo; // ivar: _taskSpecificInfo
@property (nonatomic) int taskSuccessType; // ivar: _taskSuccessType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsExecuted;
-(void)deleteIsSuccess;
-(void)deleteIsSuccessfulDirectExecution;
-(void)deleteOriginalResolutionContextId;
-(void)deleteTaskSpecificInfo;
-(void)deleteTaskSuccessType;
-(void)writeTo:(id)arg0 ;


@end


#endif