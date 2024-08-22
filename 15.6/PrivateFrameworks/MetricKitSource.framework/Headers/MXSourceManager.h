// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXSOURCEMANAGER_H
#define MXSOURCEMANAGER_H

@class NSXPCConnection;
@protocol MXSourceXPCClient, OS_os_log;

#import <Foundation/Foundation.h>


@interface MXSourceManager : NSObject <MXSourceXPCClient>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<OS_os_log> *sourceManagerLogHandle; // ivar: _sourceManagerLogHandle


+(id)sharedManager;
-(id)_createXPCConnection;
-(id)init;
-(void)sendDiagnostic:(id)arg0 forDate:(id)arg1 andSourceID:(NSInteger)arg2 ;
-(void)sendMetrics:(id)arg0 forDate:(id)arg1 andSourceID:(NSInteger)arg2 ;
-(void)simulatePayloadDeliveryForClient:(id)arg0 ;


@end


#endif