// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXVOICEMAILCONTROLLERHOST_H
#define CXVOICEMAILCONTROLLERHOST_H

@class NSMutableSet, NSString, NSMutableDictionary, NSXPCListener;
@protocol NSXPCListenerDelegate, CXVoicemailControllerHostConnectionDelegate, CXVoicemailControllerHostDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CXVoicemailControllerHost : NSObject <NSXPCListenerDelegate, CXVoicemailControllerHostConnectionDelegate>



@property (retain, nonatomic) NSMutableSet *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXVoicemailControllerHostDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *voicemailUUIDToVoicemailMap; // ivar: _voicemailUUIDToVoicemailMap
@property (retain, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_voicemailsForVoicemailControllerHostConnection:(id)arg0 ;
-(id)init;
-(id)initWithVoicemails:(id)arg0 delegate:(id)arg1 queue:(id)arg2 ;
-(void)_performDelegateCallback:(id)arg0 ;
-(void)addOrUpdateVoicemails:(id)arg0 ;
-(void)removeVoicemails:(id)arg0 ;
-(void)voicemailControllerHostConnection:(id)arg0 requestTransaction:(id)arg1 completion:(id)arg2 ;
-(void)voicemailControllerHostConnection:(id)arg0 requestVoicemails:(id)arg1 ;
-(void)voicemailControllerHostConnectionInvalidated:(id)arg0 ;


@end


#endif