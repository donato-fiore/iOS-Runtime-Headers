// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPINSTSCHEMACLPCDMREPLAYSAMPLECONTEXT_H
#define CLPINSTSCHEMACLPCDMREPLAYSAMPLECONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "CLPInstSchemaCLPCDMReplaySampleEnded.h"
#import "CLPInstSchemaCLPCDMReplaySampleFailed.h"
#import "CLPInstSchemaCLPCDMReplaySampleStarted.h"

@interface CLPInstSchemaCLPCDMReplaySampleContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId; // ivar: _contextId
@property (retain, nonatomic) CLPInstSchemaCLPCDMReplaySampleEnded *ended; // ivar: _ended
@property (retain, nonatomic) CLPInstSchemaCLPCDMReplaySampleFailed *failed; // ivar: _failed
@property (nonatomic) BOOL hasContextId; // ivar: _hasContextId
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasFailed; // ivar: _hasFailed
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) CLPInstSchemaCLPCDMReplaySampleStarted *startedOrChanged; // ivar: _startedOrChanged
@property (readonly, nonatomic) NSUInteger whichContextevent; // ivar: _whichContextevent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteContextId;
-(void)deleteEnded;
-(void)deleteFailed;
-(void)deleteStartedOrChanged;
-(void)writeTo:(id)arg0 ;


@end


#endif