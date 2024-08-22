// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXPSIRISCHEMAEXPCLIENTSIRIREQUESTEXPERIMENTTRIGGEREDTIER1_H
#define EXPSIRISCHEMAEXPCLIENTSIRIREQUESTEXPERIMENTTRIGGEREDTIER1_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface EXPSiriSchemaEXPClientSiriRequestExperimentTriggeredTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *allocations; // ivar: _allocations
@property (retain, nonatomic) SISchemaUUID *codepathId; // ivar: _codepathId
@property (nonatomic) BOOL hasCodepathId; // ivar: _hasCodepathId
@property (nonatomic) BOOL hasRequestId; // ivar: _hasRequestId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *requestId; // ivar: _requestId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)allocationCount;
-(NSUInteger)hash;
-(id)allocationAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAllocation:(id)arg0 ;
-(void)clearAllocation;
-(void)deleteAllocation;
-(void)deleteCodepathId;
-(void)deleteRequestId;
-(void)writeTo:(id)arg0 ;


@end


#endif