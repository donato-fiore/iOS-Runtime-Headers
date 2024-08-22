// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYLOGSERVICESTATE_H
#define SYLOGSERVICESTATE_H

@class PBCodable, NSDictionary, NSString, NSMutableArray;
@protocol NSCopying;


#import "SYLogEngineState.h"
#import "SYLogSessionState.h"
#import "SYLogDeviceState.h"

@interface SYLogServiceState : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSDictionary *cocoaTransportOptions;
@property (retain, nonatomic) SYLogEngineState *engine; // ivar: _engine
@property (nonatomic) int enqueuedSyncType; // ivar: _enqueuedSyncType
@property (readonly, nonatomic) BOOL hasEngine;
@property (readonly, nonatomic) BOOL hasPeerGenerationID;
@property (readonly, nonatomic) BOOL hasPeerID;
@property (nonatomic) BOOL hasServiceType;
@property (readonly, nonatomic) BOOL hasSession;
@property (readonly, nonatomic) BOOL hasTargetedDevice;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *peerGenerationID; // ivar: _peerGenerationID
@property (retain, nonatomic) NSString *peerID; // ivar: _peerID
@property (nonatomic) int serviceType; // ivar: _serviceType
@property (retain, nonatomic) SYLogSessionState *session; // ivar: _session
@property (nonatomic) BOOL sessionQueueRunning; // ivar: _sessionQueueRunning
@property (retain, nonatomic) SYLogDeviceState *targetedDevice; // ivar: _targetedDevice
@property (retain, nonatomic) NSMutableArray *transportOptions; // ivar: _transportOptions


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)enqueuedSyncTypeAsString:(int)arg0 ;
-(id)serviceTypeAsString:(int)arg0 ;
-(id)transportOptionsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsEnqueuedSyncType:(id)arg0 ;
-(int)StringAsServiceType:(id)arg0 ;
-(void)addTransportOptions:(id)arg0 ;
-(void)clearTransportOptions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif