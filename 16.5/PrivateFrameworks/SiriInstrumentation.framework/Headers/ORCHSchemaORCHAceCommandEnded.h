// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ORCHSCHEMAORCHACECOMMANDENDED_H
#define ORCHSCHEMAORCHACECOMMANDENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ORCHSchemaORCHAceCommandEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int aceCommandType; // ivar: _aceCommandType
@property (nonatomic) BOOL exists; // ivar: _exists
@property (nonatomic) BOOL hasAceCommandType;
@property (nonatomic) BOOL hasExists;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAceCommandType;
-(void)deleteExists;
-(void)writeTo:(id)arg0 ;


@end


#endif