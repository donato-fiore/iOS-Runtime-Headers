// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HMFCFHTTPSERVER_H
#define _HMFCFHTTPSERVER_H

@class NSMutableArray, NSString;
@protocol HMFLogging, OS_dispatch_queue, _HMFCFHTTPServerDelegate;


#import "HMFObject.h"

@interface _HMFCFHTTPServer : HMFObject <HMFLogging>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property CGFloat connectionIdleTimeout;
@property (readonly, nonatomic) NSMutableArray *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<_HMFCFHTTPServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *_CFHTTPServer internal; // ivar: _internal
@property (readonly, nonatomic) NSUInteger port; // ivar: _port
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(id)logCategory;
-(CGFloat)watchdogTimeout;
-(id)init;
-(id)initWithPort:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)logIdentifier;
-(void)dealloc;
-(void)invalidate;
-(void)setWatchdogTimeout:(CGFloat)arg0 ;


@end


#endif