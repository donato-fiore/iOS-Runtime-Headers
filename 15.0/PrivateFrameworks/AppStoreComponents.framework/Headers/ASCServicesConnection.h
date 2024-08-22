// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCSERVICESCONNECTION_H
#define ASCSERVICESCONNECTION_H

@class NSXPCConnection, NSString;
@protocol ASCServices, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ASCServicesConnection : NSObject <ASCServices>



@property (readonly, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSXPCConnection *connectionIfValid; // ivar: _connectionIfValid
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)log;
+(id)sharedConnection;
-(id)init;
-(id)lockupFetcherService;
-(id)metricsService;
-(id)offerStateServiceWithDelegate:(id)arg0 ;
-(id)serviceWithBlock:(id)arg0 ;
-(id)testConnection;


@end


#endif