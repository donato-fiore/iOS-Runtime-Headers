// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIDECARSESSION_H
#define SIDECARSESSION_H

@class NSUUID;
@protocol SidecarSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SidecarDevice.h"
#import "SidecarService.h"

@interface SidecarSession : NSObject {
    SidecarDevice *_device;
    SidecarService *_service;
    NSInteger _transport;
    NSInteger _dataLink;
    NSInteger _handle;
    BOOL _isRemote;
    uint8_t _state;
}


@property (readonly, nonatomic) int dataLink;
@property (weak) NSObject<SidecarSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) SidecarDevice *device;
@property (readonly) NSInteger handle;
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) SidecarService *service;
@property (readonly, nonatomic) NSInteger transport;
@property (readonly) NSUUID *uuid; // ivar: _uuid


-(id)description;
-(id)init;
-(id)initWithRemote:(id)arg0 device:(id)arg1 dataLink:(int)arg2 service:(id)arg3 error:(*id)arg4 ;
-(id)initWithService:(id)arg0 device:(id)arg1 ;
-(void)_closeWithError:(id)arg0 ;
-(void)closeWithError:(id)arg0 completion:(id)arg1 ;
-(void)connectWithTransport:(NSInteger)arg0 reconnectToSession:(id)arg1 ;
-(void)dealloc;
-(void)listenForStreamType:(NSInteger)arg0 flags:(NSUInteger)arg1 identifier:(id)arg2 processUniqueID:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)openStreamForType:(NSInteger)arg0 flags:(NSUInteger)arg1 identifier:(id)arg2 processUniqueID:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)sendMessage:(id)arg0 completion:(id)arg1 ;
-(void)timeSyncWithCompletion:(id)arg0 ;


@end


#endif