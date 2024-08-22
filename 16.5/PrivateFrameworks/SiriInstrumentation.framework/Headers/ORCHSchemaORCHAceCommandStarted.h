// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ORCHSCHEMAORCHACECOMMANDSTARTED_H
#define ORCHSCHEMAORCHACECOMMANDSTARTED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ORCHSchemaORCHAceCommandStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *aceCommandName; // ivar: _aceCommandName
@property (nonatomic) int aceCommandType; // ivar: _aceCommandType
@property (nonatomic) BOOL hasAceCommandName; // ivar: _hasAceCommandName
@property (nonatomic) BOOL hasAceCommandType;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAceCommandName;
-(void)deleteAceCommandType;
-(void)writeTo:(id)arg0 ;


@end


#endif