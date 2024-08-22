// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWHOMECOMMUNICATIONSENDORREPLY_H
#define FLOWSCHEMAFLOWHOMECOMMUNICATIONSENDORREPLY_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWHomeCommunicationSendOrReply : SISchemaInstrumentationMessage

@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *targetTypes; // ivar: _targetTypes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)targetTypeCount;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(int)targetTypeAtIndex:(NSUInteger)arg0 ;
-(void)addTargetType:(int)arg0 ;
-(void)clearTargetType;
-(void)deleteTargetType;
-(void)writeTo:(id)arg0 ;


@end


#endif