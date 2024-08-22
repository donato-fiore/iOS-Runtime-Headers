// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIBASEXPCHANDLER_H
#define DIBASEXPCHANDLER_H

@class NSXPCConnection, NSError;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface DIBaseXPCHandler : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) BOOL isPrivileged; // ivar: _isPrivileged
@property (retain, nonatomic) id *remoteProxy; // ivar: _remoteProxy
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore
@property (retain, nonatomic) NSError *xpcError; // ivar: _xpcError


-(BOOL)completeCommandWithError:(*id)arg0 ;
-(BOOL)connectWithError:(*id)arg0 ;
-(BOOL)dupStderrWithError:(*id)arg0 ;
-(id)init;
-(id)remoteObjectInterface;
-(id)serviceName;
-(void)closeConnection;
-(void)createConnection;
-(void)dealloc;
-(void)signalCommandCompletedWithXpcError:(id)arg0 ;


@end


#endif