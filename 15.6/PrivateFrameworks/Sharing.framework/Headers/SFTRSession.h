// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFTRSESSION_H
#define SFTRSESSION_H

@class TRAnisetteDataHandler, NSMutableDictionary, TRSession;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"

@interface SFTRSession : NSObject {
    BOOL _activateCalled;
    TRAnisetteDataHandler *_anisetteDataHandler;
    BOOL _invalidateCalled;
    NSMutableDictionary *_handlerMap;
}


@property (nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (copy, nonatomic) id *disconnectHandler; // ivar: _disconnectHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *sendEventImpHandler; // ivar: _sendEventImpHandler
@property (copy, nonatomic) id *sendRequestImpHandler; // ivar: _sendRequestImpHandler
@property (retain, nonatomic) SFSession *session; // ivar: _session
@property (readonly, nonatomic) TRSession *trSession;


-(id)_decodeTRMessageData:(id)arg0 kindOfClass:(Class)arg1 ;
-(id)init;
-(void)_cleanup;
-(void)activate;
-(void)dealloc;
-(void)disconnect;
-(void)handleEvent:(id)arg0 flags:(unsigned int)arg1 ;
-(void)handleRequest:(id)arg0 flags:(unsigned int)arg1 responseHandler:(id)arg2 ;
-(void)invalidate;
-(void)sendEvent:(id)arg0 ;
-(void)sendRequest:(id)arg0 withResponseHandler:(id)arg1 ;
// -(void)setEventHandler:(id)arg0 forEventClass:(unk)arg1  ;
// -(void)setRequestHandler:(id)arg0 forRequestClass:(unk)arg1  ;


@end


#endif