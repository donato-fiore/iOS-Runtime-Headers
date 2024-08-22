// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASRSCHEMAASRMANUALEDITTEXTCLASSIFIED_H
#define ASRSCHEMAASRMANUALEDITTEXTCLASSIFIED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface ASRSchemaASRManualEditTextClassified : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasOriginalAsrId; // ivar: _hasOriginalAsrId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *manualEdits; // ivar: _manualEdits
@property (retain, nonatomic) SISchemaUUID *originalAsrId; // ivar: _originalAsrId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)manualEditsAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addManualEdits:(id)arg0 ;
-(void)clearManualEdits;
-(void)deleteManualEdits;
-(void)deleteOriginalAsrId;
-(void)writeTo:(id)arg0 ;


@end


#endif