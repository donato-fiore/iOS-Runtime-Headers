// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKSMARTCARDSLOTENGINE_H
#define TKSMARTCARDSLOTENGINE_H

@class NSXPCConnection, NSXPCListener, NSHashTable, NSMutableArray, NSMapTable, NSString, NSXPCListenerEndpoint;
@protocol TKProtocolSmartCardSlot, NSXPCListenerDelegate, OS_dispatch_source, OS_os_log, TKSmartCardSlotEngineDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TKSmartCardATR.h"
#import "TKPowerMonitor.h"
#import "TKSmartCardSessionEngine.h"

@interface TKSmartCardSlotEngine : NSObject <TKProtocolSmartCardSlot, NSXPCListenerDelegate>

 {
    NSUInteger _lastId;
    NSInteger _state;
    NSInteger _powerState;
    NSInteger _previousState;
    TKSmartCardATR *_atr;
    NSUInteger _protocol;
    NSObject<OS_dispatch_source> *_idlePowerDownSource;
    NSXPCConnection *_registrationConnection;
    NSXPCListener *_listener;
    NSHashTable *_clients;
    NSMutableArray *_sessionRequests;
    NSMapTable *_stateRequests;
    NSMapTable *_reservations;
    TKPowerMonitor *_powerMonitor;
    NSObject<OS_os_log> *_log;
}


@property BOOL apduSentSinceLastReset; // ivar: _apduSentSinceLastReset
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TKSmartCardSlotEngineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSInteger maxInputLength; // ivar: _maxInputLength
@property NSInteger maxOutputLength; // ivar: _maxOutputLength
@property (readonly) NSString *name; // ivar: _name
@property (retain) NSObject<OS_dispatch_queue> *powerRequestsQueue; // ivar: _powerRequestsQueue
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property BOOL securePINChangeSupported; // ivar: _securePINChangeSupported
@property BOOL securePINVerificationSupported; // ivar: _securePINVerificationSupported
@property (retain) NSXPCListenerEndpoint *serverEndpoint; // ivar: _serverEndpoint
@property (weak) TKSmartCardSessionEngine *session; // ivar: _session
@property (readonly) Class superclass;


-(BOOL)_setupWithName:(id)arg0 delegate:(id)arg1 ;
-(BOOL)connectCardSessionWithParameters:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)reset;
-(BOOL)setProtocol:(NSUInteger)arg0 ;
-(BOOL)setupWithName:(id)arg0 delegate:(id)arg1 ;
-(id)_findReservation:(id)arg0 connection:(id)arg1 ;
-(id)_getReservationId;
-(id)dictionaryForState:(NSInteger)arg0 ;
-(id)init;
-(id)slotRegistryWithErrorHandler:(id)arg0 ;
-(void)cardPresent:(BOOL)arg0 ;
-(void)changeStateTo:(NSInteger)arg0 powerState:(NSInteger)arg1 ;
-(void)dealloc;
-(void)getAttrib:(unsigned int)arg0 reply:(id)arg1 ;
-(void)leaveSession:(id)arg0 ;
-(void)logWithBytes:(id)arg0 handler:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)powerDownWithEject:(BOOL)arg0 ;
-(void)reserveProtocols:(id)arg0 reservationId:(id)arg1 exclusive:(BOOL)arg2 reply:(id)arg3 ;
-(void)runUserInteraction:(id)arg0 reply:(id)arg1 ;
-(void)scheduleIdlePowerDown;
-(void)sendControl:(id)arg0 data:(id)arg1 expectedLength:(unsigned int)arg2 reply:(id)arg3 ;
-(void)sessionWithParameters:(id)arg0 reply:(id)arg1 ;
-(void)setAttrib:(unsigned int)arg0 data:(id)arg1 reply:(id)arg2 ;
-(void)setupSlotWithReply:(id)arg0 ;
-(void)terminate;
-(void)waitForNextState:(NSInteger)arg0 reply:(id)arg1 ;


@end


#endif