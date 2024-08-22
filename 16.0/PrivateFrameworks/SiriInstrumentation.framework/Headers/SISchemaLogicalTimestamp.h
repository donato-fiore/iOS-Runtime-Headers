// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMALOGICALTIMESTAMP_H
#define SISCHEMALOGICALTIMESTAMP_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface SISchemaLogicalTimestamp : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaUUID *clockIdentifier; // ivar: _clockIdentifier
@property (nonatomic) BOOL hasClockIdentifier; // ivar: _hasClockIdentifier
@property (nonatomic) BOOL hasTimestampInNanoseconds;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSInteger timestampInNanoseconds; // ivar: _timestampInNanoseconds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteClockIdentifier;
-(void)deleteTimestampInNanoseconds;
-(void)writeTo:(id)arg0 ;


@end


#endif