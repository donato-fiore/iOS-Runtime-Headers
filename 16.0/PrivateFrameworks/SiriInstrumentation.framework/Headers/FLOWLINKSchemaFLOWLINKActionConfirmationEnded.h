// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWLINKSCHEMAFLOWLINKACTIONCONFIRMATIONENDED_H
#define FLOWLINKSCHEMAFLOWLINKACTIONCONFIRMATIONENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWLINKSchemaFLOWLINKActionConfirmationEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsCorrectAction;
@property (nonatomic) BOOL isCorrectAction; // ivar: _isCorrectAction
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsCorrectAction;
-(void)writeTo:(id)arg0 ;


@end


#endif