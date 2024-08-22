// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POMMESSCHEMAPOMMESCLIENTEVENTMETADATA_H
#define POMMESSCHEMAPOMMESCLIENTEVENTMETADATA_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface POMMESSchemaPOMMESClientEventMetadata : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasPommesId; // ivar: _hasPommesId
@property (nonatomic) BOOL hasResultCandidateId; // ivar: _hasResultCandidateId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *pommesId; // ivar: _pommesId
@property (copy, nonatomic) NSString *resultCandidateId; // ivar: _resultCandidateId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deletePommesId;
-(void)deleteResultCandidateId;
-(void)writeTo:(id)arg0 ;


@end


#endif