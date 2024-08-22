// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMATVREMOTEINVOCATIONCONTEXT_H
#define SISCHEMATVREMOTEINVOCATIONCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaTVRemoteInvocationContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasRemoteType;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int remoteType; // ivar: _remoteType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteRemoteType;
-(void)writeTo:(id)arg0 ;


@end


#endif