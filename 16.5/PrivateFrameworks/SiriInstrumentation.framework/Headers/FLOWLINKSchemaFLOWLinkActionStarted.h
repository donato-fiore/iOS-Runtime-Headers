// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWLINKSCHEMAFLOWLINKACTIONSTARTED_H
#define FLOWLINKSCHEMAFLOWLINKACTIONSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWLINKSchemaFLOWLINKAction.h"

@interface FLOWLINKSchemaFLOWLinkActionStarted : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKAction *currentAction; // ivar: _currentAction
@property (nonatomic) BOOL hasCurrentAction; // ivar: _hasCurrentAction
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCurrentAction;
-(void)writeTo:(id)arg0 ;


@end


#endif