// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MHSCHEMAMHASSISTANTDAEMONAUDIOTWOSHOTTRANSITIONENDED_H
#define MHSCHEMAMHASSISTANTDAEMONAUDIOTWOSHOTTRANSITIONENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHAssistantDaemonAudioTwoShotTransitionEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasSuppresedAlert;
@property (nonatomic) BOOL hasTimedOut;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL suppresedAlert; // ivar: _suppresedAlert
@property (nonatomic) BOOL timedOut; // ivar: _timedOut


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSuppresedAlert;
-(void)deleteTimedOut;
-(void)writeTo:(id)arg0 ;


@end


#endif