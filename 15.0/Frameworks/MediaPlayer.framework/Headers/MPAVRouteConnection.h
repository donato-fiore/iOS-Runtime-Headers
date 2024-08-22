// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPAVROUTECONNECTION_H
#define MPAVROUTECONNECTION_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPAVRouteConnection : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _invalidated;
    NSMutableArray *_pendingConnectionHandlers;
}


@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic, getter=isConnecting) BOOL connecting;
@property (readonly, nonatomic) *void externalDevice; // ivar: _externalDevice
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler


-(id)description;
-(id)initWithExternalDevice:(*void)arg0 ;
-(void)_connectionStateDidChange:(unsigned int)arg0 error:(id)arg1 ;
-(void)_externalDeviceConnectionStateDidChangeNotification:(id)arg0 ;
-(void)connectWithCompletion:(id)arg0 ;
-(void)connectWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)connectWithOptions:(NSUInteger)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)connectWithUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)sendCustomData:(id)arg0 ;
-(void)sendMediaRemoteCommand:(unsigned int)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif