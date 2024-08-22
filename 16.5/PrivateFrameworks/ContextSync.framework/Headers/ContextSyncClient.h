// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CONTEXTSYNCCLIENT_H
#define CONTEXTSYNCCLIENT_H

@class NSString, NSXPCConnection;
@protocol ContextSyncClientProtocol, OS_os_log;

#import <Foundation/Foundation.h>


@interface ContextSyncClient : NSObject <ContextSyncClientProtocol>



@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;


-(BOOL)registerForUpdates:(id)arg0 withIdentifier:(id)arg1 shouldWake:(BOOL)arg2 forDeviceTypes:(NSInteger)arg3 ;
-(BOOL)registerForUpdates:(id)arg0 withIdentifier:(id)arg1 shouldWake:(BOOL)arg2 forDeviceTypes:(NSInteger)arg3 withError:(*id)arg4 ;
-(BOOL)unregisterForUpdates:(id)arg0 withIdentifier:(id)arg1 forDeviceTypes:(NSInteger)arg2 ;
-(BOOL)unregisterForUpdates:(id)arg0 withIdentifier:(id)arg1 forDeviceTypes:(NSInteger)arg2 withError:(*id)arg3 ;
-(id)initWithClientName:(id)arg0 ;


@end


#endif