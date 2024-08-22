// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLOWSCHEMAFLOWSMSTEXTCONTENTMETADATA_H
#define FLOWSCHEMAFLOWSMSTEXTCONTENTMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWKeyboardUsageMetadata.h"

@interface FLOWSchemaFLOWSmsTextContentMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) FLOWSchemaFLOWKeyboardUsageMetadata *flowKeyboardUsageMetadata; // ivar: _flowKeyboardUsageMetadata
@property (nonatomic) BOOL hasFlowKeyboardUsageMetadata; // ivar: _hasFlowKeyboardUsageMetadata
@property (nonatomic) BOOL hasMessageCharLength;
@property (nonatomic) BOOL hasMessageWordLength;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int messageCharLength; // ivar: _messageCharLength
@property (nonatomic) unsigned int messageWordLength; // ivar: _messageWordLength


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif