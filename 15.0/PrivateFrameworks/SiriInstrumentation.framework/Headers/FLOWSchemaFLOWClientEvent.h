// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLOWSCHEMAFLOWCLIENTEVENT_H
#define FLOWSCHEMAFLOWCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "FLOWSchemaFLOWEventMetadata.h"
#import "FLOWSchemaFLOWEntityContextTier1.h"
#import "FLOWSchemaFLOWStep.h"
#import "FLOWSchemaFLOWSmsAttachmentMetadataTier1.h"

@interface FLOWSchemaFLOWClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) FLOWSchemaFLOWEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (retain, nonatomic) FLOWSchemaFLOWEntityContextTier1 *flowEntityContextTier1; // ivar: _flowEntityContextTier1
@property (retain, nonatomic) FLOWSchemaFLOWStep *flowStep; // ivar: _flowStep
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasFlowEntityContextTier1; // ivar: _hasFlowEntityContextTier1
@property (nonatomic) BOOL hasFlowStep; // ivar: _hasFlowStep
@property (nonatomic) BOOL hasSmsAttachmentMetadataTier1; // ivar: _hasSmsAttachmentMetadataTier1
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) FLOWSchemaFLOWSmsAttachmentMetadataTier1 *smsAttachmentMetadataTier1; // ivar: _smsAttachmentMetadataTier1
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(int)getAnyEventType;
-(void)writeTo:(id)arg0 ;


@end


#endif