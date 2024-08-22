// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CWFXPCEVENTPROXY_H
#define CWFXPCEVENTPROXY_H

@class NSMutableDictionary;
@protocol CWFXPCEventProtocolPrivate, CWFXPCEventProtocolPublic, OS_dispatch_queue, CWFXPCEventProxyDelegate;

#import <Foundation/Foundation.h>


@interface CWFXPCEventProxy : NSObject <CWFXPCEventProtocolPrivate, CWFXPCEventProtocolPublic>

 {
    NSObject<OS_dispatch_queue> *_mutex;
    NSMutableDictionary *_mutableEventAckMap;
}


@property (retain) NSObject<CWFXPCEventProxyDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)__acknowledgeEventWithUUID:(id)arg0 ;
-(void)receivedAcknowledgedXPCEvent:(id)arg0 reply:(id)arg1 ;
-(void)receivedXPCEvent:(id)arg0 ;


@end


#endif