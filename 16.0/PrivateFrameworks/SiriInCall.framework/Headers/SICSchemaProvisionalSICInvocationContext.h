// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SICSCHEMAPROVISIONALSICINVOCATIONCONTEXT_H
#define SICSCHEMAPROVISIONALSICINVOCATIONCONTEXT_H

@class SISchemaInstrumentationMessage, NSData;


#import "SICSchemaProvisionalSICInvocationCancelled.h"
#import "SICSchemaProvisionalSICInvocationEnded.h"
#import "SICSchemaProvisionalSICInvocationStarted.h"

@interface SICSchemaProvisionalSICInvocationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SICSchemaProvisionalSICInvocationCancelled *cancelled; // ivar: _cancelled
@property (retain, nonatomic) SICSchemaProvisionalSICInvocationEnded *ended; // ivar: _ended
@property (nonatomic) BOOL hasCancelled; // ivar: _hasCancelled
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SICSchemaProvisionalSICInvocationStarted *startedOrChanged; // ivar: _startedOrChanged
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