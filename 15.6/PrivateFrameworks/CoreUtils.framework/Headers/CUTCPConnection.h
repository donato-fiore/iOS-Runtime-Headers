// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUTCPCONNECTION_H
#define CUTCPCONNECTION_H

@class NSMutableArray, NSString;
@protocol CUReadWriteRequestable, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUReadRequest.h"
#import "CUWriteRequest.h"
#import "CUNetLinkEndpoint.h"
#import "CUWiFiManager.h"
#import "CUBonjourDevice.h"
#import "CUNANDataSession.h"
#import "CUNetLinkManager.h"

@interface CUTCPConnection : NSObject <CUReadWriteRequestable>

 {
    *AsyncConnection _connector;
    NSObject<OS_dispatch_source> *_readSource;
    unsigned char _readSuspended;
    CUReadRequest *_readRequestCurrent;
    NSMutableArray *_readRequests;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSuspended;
    CUWriteRequest *_writeRequestCurrent;
    NSMutableArray *_writeRequests;
    BOOL _activateCalled;
    id *_activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    _opaque_pthread_mutex_t _mutex;
    NSObject<OS_dispatch_source> *_socketEventsSource;
    CUNetLinkEndpoint *_netLinkEndpoint;
    unsigned int _trafficFlagsApplied;
    BOOL _trafficFlagsPending;
    *LogCategory _ucat;
    CUWiFiManager *_wifiTrafficManager;
    NSUInteger _ifExtendedFlags;
    unsigned int _ifFlags;
    unsigned int _ifIndex;
    unsigned int _ifMedia;
    char _ifName;
}


@property (nonatomic) CGFloat connectTimeoutSecs; // ivar: _connectTimeoutSecs
@property (nonatomic) CGFloat dataTimeoutSecs; // ivar: _dataTimeoutSecs
@property (nonatomic) int defaultPort; // ivar: _defaultPort
@property (retain, nonatomic) CUBonjourDevice *destinationBonjour; // ivar: _destinationBonjour
@property (copy, nonatomic) NSString *destinationString; // ivar: _destinationString
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (copy, nonatomic) id *flowControlChangedHandler; // ivar: _flowControlChangedHandler
@property (readonly, nonatomic) int flowControlState; // ivar: _flowControlState
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) int keepAliveIdleSeconds; // ivar: _keepAliveIdleSeconds
@property (nonatomic) int keepAliveIntervalSeconds; // ivar: _keepAliveIntervalSeconds
@property (nonatomic) int keepAliveMaxCount; // ivar: _keepAliveMaxCount
@property (nonatomic) int keepAliveSeconds; // ivar: _keepAliveSeconds
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) CUNANDataSession *nanDataSession; // ivar: _nanDataSession
@property (retain, nonatomic) CUNetLinkManager *netLinkManager; // ivar: _netLinkManager
@property (readonly, nonatomic) unsigned int netTransportType; // ivar: _netTransportType
@property (readonly, nonatomic) unk peerAddr; // ivar: _peerAddr
@property (readonly, nonatomic) unk selfAddr; // ivar: _selfAddr
@property (copy, nonatomic) id *serverInvalidationHandler; // ivar: _serverInvalidationHandler
@property (copy, nonatomic) id *socketEventHandler; // ivar: _socketEventHandler
@property (nonatomic) int socketFD; // ivar: _socketFD
@property (nonatomic) unsigned int trafficFlags; // ivar: _trafficFlags


-(BOOL)_activateDirectAndReturnError:(*id)arg0 ;
-(BOOL)_prepareWriteRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)_readStatus;
-(BOOL)_readableData;
-(BOOL)_setupIOAndReturnError:(*id)arg0 ;
-(BOOL)_startConnectingToBonjourDevice:(id)arg0 error:(*id)arg1 ;
-(BOOL)_startConnectingToDestination:(id)arg0 error:(*id)arg1 ;
-(BOOL)activateDirectAndReturnError:(*id)arg0 ;
-(id)description;
-(id)init;
-(void)_abortReadsWithError:(id)arg0 ;
-(void)_abortWritesWithError:(id)arg0 ;
-(void)_completeReadRequest:(id)arg0 error:(id)arg1 ;
-(void)_completeWriteRequest:(id)arg0 error:(id)arg1 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_netLinkStateChanged;
-(void)_prepareReadRequest:(id)arg0 ;
-(void)_processReads:(BOOL)arg0 ;
-(void)_processSocketEvents;
-(void)_processWrites:(BOOL)arg0 ;
-(void)_updateTrafficRegistration;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)readWithRequest:(id)arg0 ;
-(void)writeEndOfDataWithCompletion:(id)arg0 ;
-(void)writeWithRequest:(id)arg0 ;


@end


#endif