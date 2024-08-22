// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLUSSCHEMAPLUSCONTACTSUGGESTERREQUESTMETADATAREPORTED_H
#define PLUSSCHEMAPLUSCONTACTSUGGESTERREQUESTMETADATAREPORTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PLUSSchemaPLUSContactSuggesterRequestMetadataReported : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsForcePromptUsed;
@property (nonatomic) BOOL hasIsPlusContactSuggesterEnabled;
@property (nonatomic) BOOL isForcePromptUsed; // ivar: _isForcePromptUsed
@property (nonatomic) BOOL isPlusContactSuggesterEnabled; // ivar: _isPlusContactSuggesterEnabled
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsForcePromptUsed;
-(void)deleteIsPlusContactSuggesterEnabled;
-(void)writeTo:(id)arg0 ;


@end


#endif