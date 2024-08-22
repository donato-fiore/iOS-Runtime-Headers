// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAABCLIENTEVENT_H
#define SISCHEMAABCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "SISchemaABExperimentAllocationChanged.h"
#import "SISchemaABExperimentAssetRetrievalStatusChanged.h"
#import "SISchemaABExperimentClientFeatureTriggered.h"
#import "SISchemaABClientEventMetadata.h"

@interface SISchemaABClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaABExperimentAllocationChanged *allocationChanged; // ivar: _allocationChanged
@property (retain, nonatomic) SISchemaABExperimentAssetRetrievalStatusChanged *assetRetrievalStatusChanged; // ivar: _assetRetrievalStatusChanged
@property (retain, nonatomic) SISchemaABExperimentClientFeatureTriggered *clientFeatureTriggered; // ivar: _clientFeatureTriggered
@property (retain, nonatomic) SISchemaABClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasAllocationChanged; // ivar: _hasAllocationChanged
@property (nonatomic) BOOL hasAssetRetrievalStatusChanged; // ivar: _hasAssetRetrievalStatusChanged
@property (nonatomic) BOOL hasClientFeatureTriggered; // ivar: _hasClientFeatureTriggered
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (readonly, nonatomic) NSData *jsonData;
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