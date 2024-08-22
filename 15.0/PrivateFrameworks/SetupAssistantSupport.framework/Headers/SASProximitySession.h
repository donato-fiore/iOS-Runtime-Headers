// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASPROXIMITYSESSION_H
#define SASPROXIMITYSESSION_H

@class CUMessageSession;
@protocol OS_dispatch_queue, SASProximitySessionDelegate;

#import <Foundation/Foundation.h>

#import "SASProximitySessionTransport.h"

@interface SASProximitySession : NSObject

@property (retain) NSObject<OS_dispatch_queue> *actionQueue; // ivar: _actionQueue
@property (getter=isConnected) BOOL connected; // ivar: _connected
@property NSObject<SASProximitySessionDelegate> *delegate; // ivar: _delegate
@property (retain) CUMessageSession *sharingMessageSession;
@property (retain) SASProximitySessionTransport *transport; // ivar: _transport


-(id)actionFromData:(id)arg0 ;
-(id)init;
-(id)sendAction:(id)arg0 ;
-(void)activate;
-(void)handleAction:(id)arg0 ;
-(void)invalidate;
-(void)receivedAction:(id)arg0 response:(id)arg1 ;


@end


#endif