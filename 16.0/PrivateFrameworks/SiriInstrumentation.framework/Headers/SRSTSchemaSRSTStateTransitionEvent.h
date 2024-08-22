// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRSTSCHEMASRSTSTATETRANSITIONEVENT_H
#define SRSTSCHEMASRSTSTATETRANSITIONEVENT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SRSTSchemaSRSTStateTransitionEvent : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int currentState; // ivar: _currentState
@property (nonatomic) BOOL hasCurrentState;
@property (nonatomic) BOOL hasPreviousState;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int previousState; // ivar: _previousState
@property (nonatomic) int reason; // ivar: _reason


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCurrentState;
-(void)deletePreviousState;
-(void)deleteReason;
-(void)writeTo:(id)arg0 ;


@end


#endif