// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCSCHEMASCCLIENTEVENT_H
#define SCSCHEMASCCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "SCSchemaSCCorrectionChecked.h"
#import "SCSchemaSCClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "SCSchemaSCUndoChecked.h"
#import "SCSchemaSCUndoSet.h"

@interface SCSchemaSCClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) SCSchemaSCCorrectionChecked *correctionChecked; // ivar: _correctionChecked
@property (retain, nonatomic) SCSchemaSCClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasCorrectionChecked; // ivar: _hasCorrectionChecked
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasUndoChecked; // ivar: _hasUndoChecked
@property (nonatomic) BOOL hasUndoSet; // ivar: _hasUndoSet
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SCSchemaSCUndoChecked *undoChecked; // ivar: _undoChecked
@property (retain, nonatomic) SCSchemaSCUndoSet *undoSet; // ivar: _undoSet
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


+(int)joinability;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)getComponentId;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)componentName;
-(int)getAnyEventType;
-(void)deleteCorrectionChecked;
-(void)deleteEventMetadata;
-(void)deleteUndoChecked;
-(void)deleteUndoSet;
-(void)writeTo:(id)arg0 ;


@end


#endif