// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAUISTATETRANSITION_H
#define SISCHEMAUISTATETRANSITION_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUIStateDismissed.h"
#import "SISchemaUIStatePresenting.h"

@interface SISchemaUIStateTransition : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int currentState; // ivar: _currentState
@property (nonatomic) int dismissalReason; // ivar: _dismissalReason
@property (retain, nonatomic) SISchemaUIStateDismissed *dismissed; // ivar: _dismissed
@property (nonatomic) BOOL hasCurrentState;
@property (nonatomic) BOOL hasDismissalReason;
@property (nonatomic) BOOL hasDismissed; // ivar: _hasDismissed
@property (nonatomic) BOOL hasPresenting; // ivar: _hasPresenting
@property (nonatomic) BOOL hasPreviousState;
@property (nonatomic) BOOL hasSiriPresentationType;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUIStatePresenting *presenting; // ivar: _presenting
@property (nonatomic) int previousState; // ivar: _previousState
@property (nonatomic) int siriPresentationType; // ivar: _siriPresentationType
@property (readonly, nonatomic) NSUInteger whichPresentationstate; // ivar: _whichPresentationstate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCurrentState;
-(void)deleteDismissalReason;
-(void)deleteDismissed;
-(void)deletePresenting;
-(void)deletePreviousState;
-(void)deleteSiriPresentationType;
-(void)writeTo:(id)arg0 ;


@end


#endif