// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASRSCHEMAASRAPPLANGUAGEMODELLOADFAILED_H
#define ASRSCHEMAASRAPPLANGUAGEMODELLOADFAILED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ASRSchemaASRAppLanguageModelLoadFailed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger foregroundCheckTimeInNs; // ivar: _foregroundCheckTimeInNs
@property (nonatomic) BOOL hasForegroundCheckTimeInNs;
@property (nonatomic) BOOL hasLoadTimeInNs;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger loadTimeInNs; // ivar: _loadTimeInNs
@property (nonatomic) int reason; // ivar: _reason


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteForegroundCheckTimeInNs;
-(void)deleteLoadTimeInNs;
-(void)deleteReason;
-(void)writeTo:(id)arg0 ;


@end


#endif