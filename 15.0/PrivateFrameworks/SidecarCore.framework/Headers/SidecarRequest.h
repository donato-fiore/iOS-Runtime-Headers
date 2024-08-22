// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIDECARREQUEST_H
#define SIDECARREQUEST_H

@class NSArray, NSProgress, NSError, NSData, NSString, NSUUID;
@protocol SidecarTransferDelegate, SidecarSessionDelegate, NSProgressReporting, SidecarRequestDelegate, SidecarMessage;

#import <Foundation/Foundation.h>

#import "SidecarDevice.h"
#import "SidecarSession.h"
#import "SidecarService.h"
#import "SidecarTransferReceiver.h"
#import "SidecarMapTable.h"

@interface SidecarRequest : NSObject <SidecarTransferDelegate, SidecarSessionDelegate, NSProgressReporting>

 {
    os_unfair_lock_s _lock;
    NSArray *_devices_deprecated;
    SidecarDevice *_device;
    SidecarSession *_session;
    SidecarSession *_sessionZombie;
    NSArray *_items;
    NSProgress *_progress;
    SidecarService *_service;
    SidecarTransferReceiver *_transferReceiver;
    SidecarMapTable *_sendTransfers;
    NSError *_error;
    uint8_t _state;
}


@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<SidecarRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SidecarDevice *device;
@property (copy) NSArray *devices;
@property (readonly, nonatomic) BOOL didStart;
@property (retain) NSError *error;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *items;
@property (readonly) NSString *localizedDescription;
@property (readonly) NSString *localizedItemName;
@property (readonly, nonatomic) NSObject<SidecarMessage> *message; // ivar: _message
@property (readonly) NSProgress *progress;
@property (readonly) SidecarService *service;
@property (readonly, nonatomic) SidecarSession *session;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeAccept; // ivar: _timeAccept
@property (nonatomic) CGFloat timeFinish; // ivar: _timeFinish
@property (nonatomic) CGFloat timeStart; // ivar: _timeStart
@property (nonatomic) CGFloat timeTransfer; // ivar: _timeTransfer
@property (readonly) NSString *uniformTypeIdentifier;
@property (readonly) NSUUID *uuid; // ivar: _uuid


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(id)initWithService:(id)arg0 device:(id)arg1 ;
-(id)initWithSession:(id)arg0 message:(id)arg1 ;
-(id)sessionForDevice:(id)arg0 ;
-(void)_registerStreamListeners;
-(void)_sendMessage:(id)arg0 ;
-(void)_willConnect;
-(void)accept;
-(void)cancel;
-(void)dealloc;
-(void)listenForStreamType:(NSInteger)arg0 flags:(NSUInteger)arg1 identifier:(id)arg2 processUniqueID:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)listenForStreamType:(NSInteger)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)listenForStreamType:(NSInteger)arg0 identifier:(id)arg1 processUniqueID:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)openStreamForType:(NSInteger)arg0 flags:(NSUInteger)arg1 identifier:(id)arg2 processUniqueID:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)openStreamForType:(NSInteger)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)openStreamForType:(NSInteger)arg0 identifier:(id)arg1 processUniqueID:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)sendItems:(id)arg0 ;
-(void)sendItems:(id)arg0 complete:(BOOL)arg1 ;
-(void)sidecarServiceTerminate;
-(void)sidecarSession:(id)arg0 closedWithError:(id)arg1 ;
-(void)sidecarSession:(id)arg0 receivedMessage:(id)arg1 ;
-(void)sidecarSessionStarted:(id)arg0 ;
-(void)sidecarTransfer:(id)arg0 didComplete:(id)arg1 ;
-(void)sidecarTransfer:(id)arg0 receivedItems:(id)arg1 messageType:(NSInteger)arg2 ;
-(void)start;
-(void)startWithTransport:(NSInteger)arg0 ;
-(void)startWithTransport:(NSInteger)arg0 reconnectToRequest:(id)arg1 ;


@end


#endif