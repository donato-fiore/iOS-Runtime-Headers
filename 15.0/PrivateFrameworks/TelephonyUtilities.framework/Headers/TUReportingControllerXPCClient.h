// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUREPORTINGCONTROLLERXPCCLIENT_H
#define TUREPORTINGCONTROLLERXPCCLIENT_H

@class NSString, NSXPCConnection;
@protocol TUReportingControllerXPCServer, TUReportingControllerDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUReportingControllerXPCClient : NSObject <TUReportingControllerXPCServer, TUReportingControllerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)asynchronousServer;
+(id)reportingControllerServerXPCInterface;
+(id)synchronousServer;
+(void)setAsynchronousServer:(id)arg0 ;
+(void)setSynchronousServer:(id)arg0 ;
-(id)init;
-(id)serverWithErrorHandler:(id)arg0 ;
-(id)synchronousServerWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)didCleanUpForStream:(NSInteger)arg0 reply:(id)arg1 ;
-(void)didReceiveResultsForStream:(NSInteger)arg0 withTransactionID:(id)arg1 reply:(id)arg2 ;
-(void)didStartRequestForStream:(NSInteger)arg0 withTransactionID:(id)arg1 reply:(id)arg2 ;
-(void)registeredStream:(NSInteger)arg0 withAvailability:(int)arg1 reply:(id)arg2 ;


@end


#endif