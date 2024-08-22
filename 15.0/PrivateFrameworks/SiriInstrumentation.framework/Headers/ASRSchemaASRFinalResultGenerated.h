// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASRSCHEMAASRFINALRESULTGENERATED_H
#define ASRSCHEMAASRFINALRESULTGENERATED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ASRSchemaASRFinalResultGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *correctPartialResultIndexLists; // ivar: _correctPartialResultIndexLists
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *tokenSilenceStartTimeInNsLists; // ivar: _tokenSilenceStartTimeInNsLists


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)correctPartialResultIndexListCount;
-(NSUInteger)hash;
-(NSUInteger)tokenSilenceStartTimeInNsListAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)tokenSilenceStartTimeInNsListCount;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(int)correctPartialResultIndexListAtIndex:(NSUInteger)arg0 ;
-(void)addCorrectPartialResultIndexList:(int)arg0 ;
-(void)addTokenSilenceStartTimeInNsList:(NSUInteger)arg0 ;
-(void)clearCorrectPartialResultIndexList;
-(void)clearTokenSilenceStartTimeInNsList;
-(void)writeTo:(id)arg0 ;


@end


#endif