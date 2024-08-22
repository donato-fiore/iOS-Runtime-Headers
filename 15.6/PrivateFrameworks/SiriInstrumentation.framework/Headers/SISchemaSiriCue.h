// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMASIRICUE_H
#define SISCHEMASIRICUE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaSiriCue : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasSiriCueType;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int siriCueType; // ivar: _siriCueType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSiriCueType;
-(void)writeTo:(id)arg0 ;


@end


#endif