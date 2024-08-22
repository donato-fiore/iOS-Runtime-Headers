// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ORCHSCHEMAORCHASRBRIDGECONTEXT_H
#define ORCHSCHEMAORCHASRBRIDGECONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "ORCHSchemaORCHASRCallEnded.h"
#import "ORCHSchemaORCHASRCallFailed.h"
#import "ORCHSchemaORCHASRCallStarted.h"

@interface ORCHSchemaORCHASRBridgeContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHASRCallEnded *ended; // ivar: _ended
@property (retain, nonatomic) ORCHSchemaORCHASRCallFailed *failed; // ivar: _failed
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasFailed; // ivar: _hasFailed
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) ORCHSchemaORCHASRCallStarted *startedOrChanged; // ivar: _startedOrChanged
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