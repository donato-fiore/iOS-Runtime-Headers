// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NETSCHEMANETCLIENTEVENT_H
#define NETSCHEMANETCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "NETSchemaNETDebugNetworkConnectionStatePreparationSnapshotCaptured.h"
#import "NETSchemaNETDebugNetworkConnectionStateReadySnapshotCaptured.h"
#import "NETSchemaNETDebugSessionConnectionSnapshotCaptured.h"
#import "NETSchemaNETClientEventMetadata.h"
#import "NETSchemaNETNetworkConnectionStatePreparationSnapshotCaptured.h"
#import "NETSchemaNETNetworkConnectionStateReadySnapshotCaptured.h"
#import "NETSchemaNETPeerConnectionFailed.h"
#import "NETSchemaNETSessionConnectionFailed.h"
#import "NETSchemaNETSessionConnectionHttpHeaderCreated.h"
#import "NETSchemaNETSessionConnectionSnapshotCaptured.h"

@interface NETSchemaNETClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) NETSchemaNETDebugNetworkConnectionStatePreparationSnapshotCaptured *debugNetworkConnectionStatePreparationSnapshotCaptured; // ivar: _debugNetworkConnectionStatePreparationSnapshotCaptured
@property (retain, nonatomic) NETSchemaNETDebugNetworkConnectionStateReadySnapshotCaptured *debugNetworkConnectionStateReadySnapshotCaptured; // ivar: _debugNetworkConnectionStateReadySnapshotCaptured
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionSnapshotCaptured *debugSessionConnectionSnapshotCaptured; // ivar: _debugSessionConnectionSnapshotCaptured
@property (retain, nonatomic) NETSchemaNETClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasDebugNetworkConnectionStatePreparationSnapshotCaptured; // ivar: _hasDebugNetworkConnectionStatePreparationSnapshotCaptured
@property (nonatomic) BOOL hasDebugNetworkConnectionStateReadySnapshotCaptured; // ivar: _hasDebugNetworkConnectionStateReadySnapshotCaptured
@property (nonatomic) BOOL hasDebugSessionConnectionSnapshotCaptured; // ivar: _hasDebugSessionConnectionSnapshotCaptured
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasNetworkConnectionStatePreparationSnapshotCaptured; // ivar: _hasNetworkConnectionStatePreparationSnapshotCaptured
@property (nonatomic) BOOL hasNetworkConnectionStateReadySnapshotCaptured; // ivar: _hasNetworkConnectionStateReadySnapshotCaptured
@property (nonatomic) BOOL hasPeerConnectionFailed; // ivar: _hasPeerConnectionFailed
@property (nonatomic) BOOL hasSessionConnectionFailed; // ivar: _hasSessionConnectionFailed
@property (nonatomic) BOOL hasSessionConnectionHttpHeaderCreated; // ivar: _hasSessionConnectionHttpHeaderCreated
@property (nonatomic) BOOL hasSessionConnectionSnapshotCaptured; // ivar: _hasSessionConnectionSnapshotCaptured
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) NETSchemaNETNetworkConnectionStatePreparationSnapshotCaptured *networkConnectionStatePreparationSnapshotCaptured; // ivar: _networkConnectionStatePreparationSnapshotCaptured
@property (retain, nonatomic) NETSchemaNETNetworkConnectionStateReadySnapshotCaptured *networkConnectionStateReadySnapshotCaptured; // ivar: _networkConnectionStateReadySnapshotCaptured
@property (retain, nonatomic) NETSchemaNETPeerConnectionFailed *peerConnectionFailed; // ivar: _peerConnectionFailed
@property (retain, nonatomic) NETSchemaNETSessionConnectionFailed *sessionConnectionFailed; // ivar: _sessionConnectionFailed
@property (retain, nonatomic) NETSchemaNETSessionConnectionHttpHeaderCreated *sessionConnectionHttpHeaderCreated; // ivar: _sessionConnectionHttpHeaderCreated
@property (retain, nonatomic) NETSchemaNETSessionConnectionSnapshotCaptured *sessionConnectionSnapshotCaptured; // ivar: _sessionConnectionSnapshotCaptured
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)getAnyEventType;
-(void)deleteDebugNetworkConnectionStatePreparationSnapshotCaptured;
-(void)deleteDebugNetworkConnectionStateReadySnapshotCaptured;
-(void)deleteDebugSessionConnectionSnapshotCaptured;
-(void)deleteEventMetadata;
-(void)deleteNetworkConnectionStatePreparationSnapshotCaptured;
-(void)deleteNetworkConnectionStateReadySnapshotCaptured;
-(void)deletePeerConnectionFailed;
-(void)deleteSessionConnectionFailed;
-(void)deleteSessionConnectionHttpHeaderCreated;
-(void)deleteSessionConnectionSnapshotCaptured;
-(void)writeTo:(id)arg0 ;


@end


#endif