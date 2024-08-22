// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMACONVERSATIONTRACE_H
#define SISCHEMACONVERSATIONTRACE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaConversationTrace : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasPreviousTurnID; // ivar: _hasPreviousTurnID
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSData *previousTurnID; // ivar: _previousTurnID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif