// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMSCHEMACAMCLIENTEVENTMETADATA_H
#define CAMSCHEMACAMCLIENTEVENTMETADATA_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface CAMSchemaCAMClientEventMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaUUID *camId; // ivar: _camId
@property (nonatomic) int feature; // ivar: _feature
@property (nonatomic) BOOL hasCamId; // ivar: _hasCamId
@property (nonatomic) BOOL hasFeature;
@property (nonatomic) BOOL hasResultCandidateId; // ivar: _hasResultCandidateId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *resultCandidateId; // ivar: _resultCandidateId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCamId;
-(void)deleteFeature;
-(void)deleteResultCandidateId;
-(void)writeTo:(id)arg0 ;


@end


#endif