// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HALSCHEMAHALFORCEFETCHCONTEXT_H
#define HALSCHEMAHALFORCEFETCHCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "HALSchemaHALForceFetchEnded.h"
#import "HALSchemaHALForceFetchFailed.h"
#import "HALSchemaHALForceFetchStarted.h"

@interface HALSchemaHALForceFetchContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId; // ivar: _contextId
@property (retain, nonatomic) HALSchemaHALForceFetchEnded *ended; // ivar: _ended
@property (retain, nonatomic) HALSchemaHALForceFetchFailed *failed; // ivar: _failed
@property (nonatomic) BOOL hasContextId; // ivar: _hasContextId
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasFailed; // ivar: _hasFailed
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) HALSchemaHALForceFetchStarted *startedOrChanged; // ivar: _startedOrChanged
@property (readonly, nonatomic) NSUInteger whichContextevent; // ivar: _whichContextevent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif