// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWSPROTOCOLSNAPSHOT_H
#define NWSPROTOCOLSNAPSHOT_H

@class NSString, NSDate, NSData;


#import "NWSSnapshot.h"

@interface NWSProtocolSnapshot : NWSSnapshot

@property (readonly) BOOL countsIncludeHeaderOverhead; // ivar: _countsIncludeHeaderOverhead
@property (readonly) int epid; // ivar: _epid
@property (readonly) NSUInteger eupid; // ivar: _eupid
@property (readonly) NSString *euuid; // ivar: _euuid
@property (readonly) NSUInteger eventFlags; // ivar: _eventFlags
@property (readonly) CGFloat flowDuration; // ivar: _flowDuration
@property (readonly) NSUInteger flowStartContinuousTime; // ivar: _flowStartContinuousTime
@property (readonly) NSDate *flowStartTimestamp; // ivar: _flowStartTimestamp
@property (readonly) NSString *fuuid; // ivar: _fuuid
@property (readonly) BOOL interfaceAWDL; // ivar: _interfaceAWDL
@property (readonly) BOOL interfaceCellular; // ivar: _interfaceCellular
@property (readonly) BOOL interfaceCellularViaFallback; // ivar: _interfaceCellularViaFallback
@property (readonly) BOOL interfaceCellularViaPreferredFallback; // ivar: _interfaceCellularViaPreferredFallback
@property (readonly) BOOL interfaceCompanionLink; // ivar: _interfaceCompanionLink
@property (readonly) BOOL interfaceExpensive; // ivar: _interfaceExpensive
@property (readonly) unsigned int interfaceIndex; // ivar: _interfaceIndex
@property (readonly) BOOL interfaceLoopback; // ivar: _interfaceLoopback
@property (readonly) BOOL interfaceUnknown; // ivar: _interfaceUnknown
@property (readonly) BOOL interfaceWifi; // ivar: _interfaceWifi
@property (readonly) BOOL interfaceWired; // ivar: _interfaceWired
@property (readonly) NSData *localAddress; // ivar: _localAddress
@property (readonly) NSUInteger networkActivityMapPart1; // ivar: _networkActivityMapPart1
@property (readonly) NSUInteger networkActivityMapPart2; // ivar: _networkActivityMapPart2
@property (readonly) NSUInteger networkActivityMapStartTime; // ivar: _networkActivityMapStartTime
@property (readonly) int processID; // ivar: _processID
@property (readonly) NSString *processName; // ivar: _processName
@property (readonly) unsigned int receiveBufferSize; // ivar: _receiveBufferSize
@property (readonly) unsigned int receiveBufferUsed; // ivar: _receiveBufferUsed
@property (readonly) NSData *remoteAddress; // ivar: _remoteAddress
@property (readonly) unsigned int trafficClass; // ivar: _trafficClass
@property (readonly) NSUInteger uniqueProcessID; // ivar: _uniqueProcessID
@property (readonly) NSString *uuid; // ivar: _uuid
@property (readonly) NSString *vuuid; // ivar: _vuuid


+(void)initialize;
-(CGFloat)_intervalWithContinuousTime:(NSUInteger)arg0 ;
-(CGFloat)_referenceIntervalWithContinuousTime:(NSUInteger)arg0 ;
-(id)_createNSUUIDForBytes:(unsigned char)arg0 ;
-(id)_dateWithContinuousTime:(NSUInteger)arg0 ;


@end


#endif