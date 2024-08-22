// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DLXPCDISCONNECTHANDLER_H
#define DLXPCDISCONNECTHANDLER_H

@class NSMutableDictionary, NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface DLXPCDisconnectHandler : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain) NSMutableDictionary *disconnectCallbacks; // ivar: _disconnectCallbacks
@property NSInteger disconnectErrorCode; // ivar: _disconnectErrorCode
@property (retain) NSString *disconnectErrorDomain; // ivar: _disconnectErrorDomain
@property (retain) NSMutableDictionary *disconnectOptionCallbacks; // ivar: _disconnectOptionCallbacks
@property (retain) NSMutableDictionary *disconnectResultCallbacks; // ivar: _disconnectResultCallbacks
@property BOOL isDisconnected; // ivar: _isDisconnected
@property (readonly) NSObject<OS_os_log> *logger; // ivar: _logger
@property (retain) NSString *name; // ivar: _name


-(id)createDaemonDisconnectedError;
-(id)initWithName:(id)arg0 errorDomain:(id)arg1 errorCode:(NSInteger)arg2 logger:(id)arg3 ;
-(id)randomCallbackIdentifier;
-(id)registerCallback:(id)arg0 ;
-(id)registerOptionResultCallback:(id)arg0 ;
-(id)registerResultCallback:(id)arg0 ;
-(void)configureHandlersForConnection:(id)arg0 ;
-(void)handleInterruption;
-(void)unregisterCallback:(id)arg0 ;
-(void)unregisterOptionResultCallback:(id)arg0 ;
-(void)unregisterResultCallback:(id)arg0 ;


@end


#endif