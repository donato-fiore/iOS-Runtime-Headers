// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMASPEECHRESULTSELECTED_H
#define SISCHEMASPEECHRESULTSELECTED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaSpeechResultSelected : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasResultCandidateId; // ivar: _hasResultCandidateId
@property (nonatomic) BOOL hasSource;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *resultCandidateId; // ivar: _resultCandidateId
@property (nonatomic) int source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif