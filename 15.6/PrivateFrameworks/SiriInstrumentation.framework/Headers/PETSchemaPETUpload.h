// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PETSCHEMAPETUPLOAD_H
#define PETSCHEMAPETUPLOAD_H

@class NSArray, NSData;


#import "SISchemaTopLevelUnionType.h"
#import "PETSchemaPETMetadata.h"

@interface PETSchemaPETUpload : SISchemaTopLevelUnionType {
    ? _has;
}


@property (copy, nonatomic) NSArray *aggregated_messages; // ivar: _aggregated_messages
@property (copy, nonatomic) NSData *compressed_data; // ivar: _compressed_data
@property (copy, nonatomic) NSData *compressed_messages; // ivar: _compressed_messages
@property (nonatomic) BOOL hasCompressed_data; // ivar: _hasCompressed_data
@property (nonatomic) BOOL hasCompressed_messages; // ivar: _hasCompressed_messages
@property (nonatomic) BOOL hasIs_compressed;
@property (nonatomic) BOOL hasMetadata; // ivar: _hasMetadata
@property (nonatomic) BOOL is_compressed; // ivar: _is_compressed
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) PETSchemaPETMetadata *metadata; // ivar: _metadata
@property (copy, nonatomic) NSArray *trial_messages; // ivar: _trial_messages
@property (copy, nonatomic) NSArray *unaggregated_messages; // ivar: _unaggregated_messages


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)aggregated_messagesAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(id)trial_messagesAtIndex:(NSUInteger)arg0 ;
-(id)unaggregated_messagesAtIndex:(NSUInteger)arg0 ;
-(int)getAnyEventType;
-(void)addAggregated_messages:(id)arg0 ;
-(void)addTrial_messages:(id)arg0 ;
-(void)addUnaggregated_messages:(id)arg0 ;
-(void)clearAggregated_messages;
-(void)clearTrial_messages;
-(void)deleteAggregated_messages;
-(void)deleteCompressed_data;
-(void)deleteCompressed_messages;
-(void)deleteIs_compressed;
-(void)deleteMetadata;
-(void)deleteTrial_messages;
-(void)writeTo:(id)arg0 ;


@end


#endif