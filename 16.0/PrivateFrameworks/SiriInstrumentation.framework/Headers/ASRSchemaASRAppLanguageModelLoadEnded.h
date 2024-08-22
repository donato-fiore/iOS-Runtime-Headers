// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASRSCHEMAASRAPPLANGUAGEMODELLOADENDED_H
#define ASRSCHEMAASRAPPLANGUAGEMODELLOADENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ASRSchemaASRAppLanguageModelLoadEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger foregroundCheckTimeInNs; // ivar: _foregroundCheckTimeInNs
@property (nonatomic) BOOL hasForegroundCheckTimeInNs;
@property (nonatomic) BOOL hasLoadTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger loadTimeInNs; // ivar: _loadTimeInNs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteForegroundCheckTimeInNs;
-(void)deleteLoadTimeInNs;
-(void)writeTo:(id)arg0 ;


@end


#endif