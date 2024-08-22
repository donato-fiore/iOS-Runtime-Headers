// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSMESSAGECENTER_H
#define NMSMESSAGECENTER_H

@class NSString, NSMutableDictionary, NSDate, IDSService;
@protocol IDSServiceDelegate, OS_dispatch_source, OS_dispatch_queue, NMSMessageCenterDelegate, OS_os_activity;

#import <Foundation/Foundation.h>

#import "NMSPersistentDictionary.h"
#import "NMSWindowData.h"
#import "_NMSDispatchQueue.h"
#import "_SYMultiSuspendableQueue.h"

@interface NMSMessageCenter : NSObject <IDSServiceDelegate>

 {
    NSString *_serviceIdentifier;
    NSString *_launchNotification;
    *__CFString _loggingFacility;
    BOOL _resumed;
    NSMutableDictionary *_requestHandlers;
    NSMutableDictionary *_errorHandlers;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_pbMapping;
    NMSPersistentDictionary *_persistentContextStore;
    NSDate *_nextExpireTimerFireDate;
    NSObject<OS_dispatch_source> *_expireTimer;
    NSUInteger _currentBytesInFlight;
    NMSWindowData *_windowData;
    NSObject<OS_dispatch_source> *_windowTimeout;
    _NMSDispatchQueue *_windowQueue;
    BOOL _checkedForQWS;
    _SYMultiSuspendableQueue *_idsIncomingQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *actionQ;
@property (readonly, nonatomic, getter=_currentBytesInFlight) NSUInteger currentBytesInFlight;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NMSMessageCenterDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL delegateRequiresACKs; // ivar: _delegateRequiresACKs
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableTransmissionWindow; // ivar: _enableTransmissionWindow
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IDSService *idsService;
@property (nonatomic) NSUInteger maxBytesInFlight; // ivar: _maxBytesInFlight
@property (nonatomic) NSUInteger maxMessagesInFlight; // ivar: _maxMessagesInFlight
@property (nonatomic) NSUInteger minMessagesInFlight; // ivar: _minMessagesInFlight
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) IDSService *service; // ivar: _service
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_os_activity> *transportActivity; // ivar: _transportActivity
@property (nonatomic) CGFloat windowResponseTimeout; // ivar: _windowResponseTimeout


+(BOOL)messageWindowCountEnabled;
+(void)setMessageWindowCountEnabled:(BOOL)arg0 ;
-(BOOL)cancelMessageWithID:(id)arg0 error:(*id)arg1 ;
-(id)_buildDataForRequest:(id)arg0 options:(*id)arg1 ;
-(id)_buildDataForResponse:(id)arg0 options:(*id)arg1 ;
-(id)_decodeIncomingRequestData:(id)arg0 context:(id)arg1 ;
-(id)_pbMappingForMessageID:(unsigned short)arg0 ;
-(id)deviceIDFromDevice:(id)arg0 ;
-(id)errorHandlers;
-(id)init;
-(id)initWithIDSServiceIdentifier:(id)arg0 ;
-(id)initWithIDSServiceIdentifier:(id)arg0 launchOnDemandNotification:(id)arg1 cacheFolderPath:(id)arg2 ;
-(id)requestHandlers;
-(id)responseHandlers;
-(void)_checkForSwitch;
-(void)_expireMessages;
-(void)_handleError:(id)arg0 context:(id)arg1 ;
-(void)_obliterate;
-(void)_sendResponse:(id)arg0 ;
-(void)_setNextWindowTimeoutFireDate;
-(void)_timeoutWindowedMessages;
-(void)_updateExpireTimerWithDate:(id)arg0 ;
-(void)addErrorHandlerForMessageID:(unsigned short)arg0 usingBlock:(id)arg1 ;
-(void)addRequestHandlerForMessageID:(unsigned short)arg0 usingBlock:(id)arg1 ;
-(void)addResponseHandler:(unsigned short)arg0 usingBlock:(id)arg1 ;
-(void)dealloc;
-(void)dropExtantMessages;
-(void)mapPBRequest:(Class)arg0 toResponse:(Class)arg1 messageID:(unsigned short)arg2 ;
-(void)resume;
-(void)resumeIncomingMessages;
-(void)sendFile:(id)arg0 ;
-(void)sendRequest:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 hasBeenDeliveredWithContext:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingResourceAtURL:(id)arg2 metadata:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 connectedDevicesChanged:(id)arg1 ;
-(void)service:(id)arg0 didSwitchActivePairedDevice:(id)arg1 acknowledgementBlock:(id)arg2 ;
-(void)service:(id)arg0 nearbyDevicesChanged:(id)arg1 ;
-(void)suspendIncomingMessages;


@end


#endif