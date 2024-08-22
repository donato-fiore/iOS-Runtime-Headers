// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMNSXPCCONNECTION_H
#define FMNSXPCCONNECTION_H

@class NSXPCConnection, NSString, FMFuture;
@protocol FMNSXPCConnecting;

#import <Foundation/Foundation.h>


@interface FMNSXPCConnection : NSObject <FMNSXPCConnecting>



@property (nonatomic) BOOL _testMockConnection; // ivar: __testMockConnection
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FMFuture *future; // ivar: _future
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 exportedObject:(id)arg1 ;
-(id)remoteObjectProxy;
-(void)addFailureBlock:(id)arg0 ;
-(void)dealloc;
-(void)destroyXPCConnection;
-(void)invalidate;


@end


#endif