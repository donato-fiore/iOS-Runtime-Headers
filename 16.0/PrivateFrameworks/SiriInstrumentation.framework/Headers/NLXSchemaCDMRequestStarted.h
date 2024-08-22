// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLXSCHEMACDMREQUESTSTARTED_H
#define NLXSCHEMACDMREQUESTSTARTED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "NLXSchemaCDMTurnInput.h"

@interface NLXSchemaCDMRequestStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) NLXSchemaCDMTurnInput *currentTurnInput; // ivar: _currentTurnInput
@property (nonatomic) BOOL hasCurrentTurnInput; // ivar: _hasCurrentTurnInput
@property (nonatomic) BOOL hasLoggableSharedUserId; // ivar: _hasLoggableSharedUserId
@property (nonatomic) BOOL hasServiceGraphName;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *loggableSharedUserId; // ivar: _loggableSharedUserId
@property (nonatomic) int serviceGraphName; // ivar: _serviceGraphName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCurrentTurnInput;
-(void)deleteLoggableSharedUserId;
-(void)deleteServiceGraphName;
-(void)writeTo:(id)arg0 ;


@end


#endif