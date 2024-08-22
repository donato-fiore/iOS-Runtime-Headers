// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GRRSCHEMAGRRCLIENTEVENTMETADATA_H
#define GRRSCHEMAGRRCLIENTEVENTMETADATA_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface GRRSchemaGRRClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *grrId; // ivar: _grrId
@property (nonatomic) BOOL hasGrrId; // ivar: _hasGrrId
@property (nonatomic) BOOL hasResultCandidateId; // ivar: _hasResultCandidateId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *resultCandidateId; // ivar: _resultCandidateId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif