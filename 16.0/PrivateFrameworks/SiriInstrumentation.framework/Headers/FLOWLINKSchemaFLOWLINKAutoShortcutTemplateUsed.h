// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWLINKSCHEMAFLOWLINKAUTOSHORTCUTTEMPLATEUSED_H
#define FLOWLINKSCHEMAFLOWLINKAUTOSHORTCUTTEMPLATEUSED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWLINKSchemaFLOWLINKAutoShortcutTemplateUsed : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *autoshortcutTemplate; // ivar: _autoshortcutTemplate
@property (nonatomic) BOOL hasAutoshortcutTemplate; // ivar: _hasAutoshortcutTemplate
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAutoshortcutTemplate;
-(void)writeTo:(id)arg0 ;


@end


#endif