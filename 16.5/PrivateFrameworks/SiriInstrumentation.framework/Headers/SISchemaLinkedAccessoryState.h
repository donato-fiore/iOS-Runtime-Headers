// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMALINKEDACCESSORYSTATE_H
#define SISCHEMALINKEDACCESSORYSTATE_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface SISchemaLinkedAccessoryState : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *accessoryId; // ivar: _accessoryId
@property (copy, nonatomic) NSArray *gradingOptInStateChanges; // ivar: _gradingOptInStateChanges
@property (nonatomic) BOOL hasAccessoryId; // ivar: _hasAccessoryId
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)gradingOptInStateChangesAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addGradingOptInStateChanges:(id)arg0 ;
-(void)clearGradingOptInStateChanges;
-(void)deleteAccessoryId;
-(void)deleteGradingOptInStateChanges;
-(void)writeTo:(id)arg0 ;


@end


#endif