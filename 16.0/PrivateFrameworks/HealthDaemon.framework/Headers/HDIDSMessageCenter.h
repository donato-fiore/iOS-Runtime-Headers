// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDIDSMESSAGECENTER_H
#define HDIDSMESSAGECENTER_H

@class NSString, NSUUID, IDSService, NSMutableDictionary;
@protocol IDSServiceDelegate, OS_dispatch_source, OS_dispatch_queue, HDIDSMessageCenterDelegate;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"
#import "HDIDSPersistentDictionary.h"

@interface HDIDSMessageCenter : NSObject <IDSServiceDelegate>

 {
    HDDaemon *_daemon;
    NSString *_shortServiceIdentifier;
    NSUUID *_pairingUUID;
    IDSService *_service;
    NSMutableDictionary *_requestHandlers;
    NSMutableDictionary *_errorHandlers;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_pbMapping;
    HDIDSPersistentDictionary *_persistentContextStore;
    CGFloat _nextExpireTimerFireDate;
    NSObject<OS_dispatch_source> *_expireTimer;
    uint8_t _invalidated;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDIDSMessageCenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IDSService *idsService;
@property (readonly, copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (readonly) Class superclass;


+(id)createPersistentDictionaryWithURL:(id)arg0 ;
-(id)deviceForFromID:(id)arg0 ;
-(id)initWithIDSServiceIdentifier:(id)arg0 persistentDictionary:(id)arg1 queue:(id)arg2 daemon:(id)arg3 ;
-(id)nanoSyncDevices;
-(void)addErrorHandler:(SEL)arg0 forMessageID:(unsigned short)arg1 ;
-(void)addRequestHandler:(SEL)arg0 forMessageID:(unsigned short)arg1 ;
-(void)addResponseHandler:(SEL)arg0 forMessageID:(unsigned short)arg1 ;
-(void)cancelPendingRequestsWithMessageID:(unsigned short)arg0 device:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)mapPBRequest:(Class)arg0 toResponse:(Class)arg1 messageID:(unsigned short)arg2 ;
-(void)obliterateWithReason:(id)arg0 preserveCopy:(BOOL)arg1 ;
-(void)resume;
-(void)sendRequest:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 didSwitchActivePairedDevice:(id)arg1 acknowledgementBlock:(id)arg2 ;


@end


#endif