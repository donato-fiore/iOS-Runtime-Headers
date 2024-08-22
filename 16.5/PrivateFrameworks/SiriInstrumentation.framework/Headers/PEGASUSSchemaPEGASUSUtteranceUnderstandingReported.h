// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PEGASUSSCHEMAPEGASUSUTTERANCEUNDERSTANDINGREPORTED_H
#define PEGASUSSCHEMAPEGASUSUTTERANCEUNDERSTANDINGREPORTED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PEGASUSSchemaPEGASUSUtteranceUnderstandingReported : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *topKGSAIntentsMetadatas; // ivar: _topKGSAIntentsMetadatas
@property (copy, nonatomic) NSArray *topU2IntentsMetadatas; // ivar: _topU2IntentsMetadatas


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)topKGSAIntentsMetadataCount;
-(NSUInteger)topU2IntentsMetadataCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)topKGSAIntentsMetadataAtIndex:(NSUInteger)arg0 ;
-(id)topU2IntentsMetadataAtIndex:(NSUInteger)arg0 ;
-(void)addTopKGSAIntentsMetadata:(id)arg0 ;
-(void)addTopU2IntentsMetadata:(id)arg0 ;
-(void)clearTopKGSAIntentsMetadata;
-(void)clearTopU2IntentsMetadata;
-(void)deleteLinkId;
-(void)deleteTopKGSAIntentsMetadata;
-(void)deleteTopU2IntentsMetadata;
-(void)writeTo:(id)arg0 ;


@end


#endif