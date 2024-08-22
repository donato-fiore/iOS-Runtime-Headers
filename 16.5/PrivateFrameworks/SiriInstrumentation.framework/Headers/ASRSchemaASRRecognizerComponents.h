// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASRSCHEMAASRRECOGNIZERCOMPONENTS_H
#define ASRSCHEMAASRRECOGNIZERCOMPONENTS_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ASRSchemaASRRecognizerComponents : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *decodable; // ivar: _decodable
@property (copy, nonatomic) NSString *decoder; // ivar: _decoder
@property (copy, nonatomic) NSString *frontend; // ivar: _frontend
@property (nonatomic) BOOL hasDecodable; // ivar: _hasDecodable
@property (nonatomic) BOOL hasDecoder; // ivar: _hasDecoder
@property (nonatomic) BOOL hasFrontend; // ivar: _hasFrontend
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDecodable;
-(void)deleteDecoder;
-(void)deleteFrontend;
-(void)writeTo:(id)arg0 ;


@end


#endif