// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODMSIRISCHEMAODMDYNAMICDIMENSIONS_H
#define ODMSIRISCHEMAODMDYNAMICDIMENSIONS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaISOLocale.h"

@interface ODMSiriSchemaODMDynamicDimensions : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int audioInterface; // ivar: _audioInterface
@property (nonatomic) BOOL hasAudioInterface;
@property (nonatomic) BOOL hasSiriInputLocale; // ivar: _hasSiriInputLocale
@property (nonatomic) BOOL hasTaskType;
@property (nonatomic) BOOL hasViewMode;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale; // ivar: _siriInputLocale
@property (nonatomic) int taskType; // ivar: _taskType
@property (nonatomic) int viewMode; // ivar: _viewMode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAudioInterface;
-(void)deleteSiriInputLocale;
-(void)deleteTaskType;
-(void)deleteViewMode;
-(void)writeTo:(id)arg0 ;


@end


#endif