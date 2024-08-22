// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNVSCHEMACNVINTENTFINALEXECUTIONSTARTED_H
#define CNVSCHEMACNVINTENTFINALEXECUTIONSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CNVSchemaCNVIntentFinalExecutionStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasPlugin;
@property (nonatomic) BOOL hasStackDepth;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int plugin; // ivar: _plugin
@property (nonatomic) unsigned int stackDepth; // ivar: _stackDepth


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif