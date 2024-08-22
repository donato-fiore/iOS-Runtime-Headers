// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSSCHEMAPROVISIONALSIRISTATETRANSITIONEVENT_H
#define SSSCHEMAPROVISIONALSIRISTATETRANSITIONEVENT_H

@class SISchemaInstrumentationMessage, NSData;



@interface SSSchemaProvisionalSiriStateTransitionEvent : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int currentState; // ivar: _currentState
@property (nonatomic) BOOL hasCurrentState;
@property (nonatomic) BOOL hasPreviousState;
@property (nonatomic) BOOL hasStateTransitionReason;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int previousState; // ivar: _previousState
@property (nonatomic) int stateTransitionReason; // ivar: _stateTransitionReason


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif