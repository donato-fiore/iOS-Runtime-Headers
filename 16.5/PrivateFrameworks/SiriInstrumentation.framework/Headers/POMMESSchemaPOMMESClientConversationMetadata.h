// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POMMESSCHEMAPOMMESCLIENTCONVERSATIONMETADATA_H
#define POMMESSCHEMAPOMMESCLIENTCONVERSATIONMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "POMMESSchemaPOMMESOnDeviceMetadata.h"

@interface POMMESSchemaPOMMESClientConversationMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasDisplayHints; // ivar: _hasDisplayHints
@property (nonatomic) BOOL hasHasDisplayHints;
@property (nonatomic) BOOL hasHasPromptContext;
@property (nonatomic) BOOL hasOnDeviceMetadata; // ivar: _hasOnDeviceMetadata
@property (nonatomic) BOOL hasPromptContext; // ivar: _hasPromptContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) POMMESSchemaPOMMESOnDeviceMetadata *onDeviceMetadata; // ivar: _onDeviceMetadata


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteHasDisplayHints;
-(void)deleteHasPromptContext;
-(void)deleteOnDeviceMetadata;
-(void)writeTo:(id)arg0 ;


@end


#endif