// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DUSCHEMADUEVENT_H
#define DUSCHEMADUEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "DUSchemaDUContent.h"
#import "DUSchemaDUEventMetadata.h"
#import "DUSchemaDUSearchSessionRecord.h"
#import "DUSchemaDUSpeechAudioRecord.h"

@interface DUSchemaDUEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) DUSchemaDUContent *content; // ivar: _content
@property (nonatomic) BOOL hasContent; // ivar: _hasContent
@property (nonatomic) BOOL hasMetadata; // ivar: _hasMetadata
@property (nonatomic) BOOL hasSearchSessionRecord; // ivar: _hasSearchSessionRecord
@property (nonatomic) BOOL hasSpeechAudioRecord; // ivar: _hasSpeechAudioRecord
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) DUSchemaDUEventMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) DUSchemaDUSearchSessionRecord *searchSessionRecord; // ivar: _searchSessionRecord
@property (retain, nonatomic) DUSchemaDUSpeechAudioRecord *speechAudioRecord; // ivar: _speechAudioRecord
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)getAnyEventType;
-(void)deleteContent;
-(void)deleteMetadata;
-(void)deleteSearchSessionRecord;
-(void)deleteSpeechAudioRecord;
-(void)writeTo:(id)arg0 ;


@end


#endif