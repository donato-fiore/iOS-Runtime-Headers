// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASRSCHEMAASRMANUALEDITCLASSIFICATIONCONTEXT_H
#define ASRSCHEMAASRMANUALEDITCLASSIFICATIONCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "ASRSchemaASRManualEditClassificationEnded.h"
#import "ASRSchemaASRManualEditClassificationFailed.h"
#import "SISchemaUUID.h"
#import "ASRSchemaASRManualEditClassificationStarted.h"

@interface ASRSchemaASRManualEditClassificationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ASRSchemaASRManualEditClassificationEnded *ended; // ivar: _ended
@property (retain, nonatomic) ASRSchemaASRManualEditClassificationFailed *failed; // ivar: _failed
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasFailed; // ivar: _hasFailed
@property (nonatomic) BOOL hasOriginalAsrId; // ivar: _hasOriginalAsrId
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *originalAsrId; // ivar: _originalAsrId
@property (retain, nonatomic) ASRSchemaASRManualEditClassificationStarted *startedOrChanged; // ivar: _startedOrChanged
@property (readonly, nonatomic) NSUInteger whichContextevent; // ivar: _whichContextevent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEnded;
-(void)deleteFailed;
-(void)deleteOriginalAsrId;
-(void)deleteStartedOrChanged;
-(void)writeTo:(id)arg0 ;


@end


#endif