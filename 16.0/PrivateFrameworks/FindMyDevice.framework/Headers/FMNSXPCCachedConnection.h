// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMNSXPCCACHEDCONNECTION_H
#define FMNSXPCCACHEDCONNECTION_H

@class NSString;
@protocol FMNSXPCConnecting, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FMNSXPCConnection.h"

@interface FMNSXPCCachedConnection : NSObject <FMNSXPCConnecting>



@property (retain, nonatomic) FMNSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didInvalidate; // ivar: _didInvalidate
@property (copy, nonatomic) id *failureBlock; // ivar: _failureBlock
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


-(id)initWithFMNSXPCConnection:(id)arg0 ;
-(id)remoteObjectProxy;
-(void)_invalidate;
-(void)addFailureBlock:(id)arg0 ;
-(void)invalidate;


@end


#endif