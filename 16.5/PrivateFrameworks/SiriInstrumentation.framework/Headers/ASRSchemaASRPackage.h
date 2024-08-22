// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASRSCHEMAASRPACKAGE_H
#define ASRSCHEMAASRPACKAGE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "ASRSchemaASRRecognitionResult.h"

@interface ASRSchemaASRPackage : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasPostItn; // ivar: _hasPostItn
@property (nonatomic) BOOL hasRawRecognition; // ivar: _hasRawRecognition
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) ASRSchemaASRRecognitionResult *postItn; // ivar: _postItn
@property (retain, nonatomic) ASRSchemaASRRecognitionResult *rawRecognition; // ivar: _rawRecognition


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deletePostItn;
-(void)deleteRawRecognition;
-(void)writeTo:(id)arg0 ;


@end


#endif