// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCXPCDISCONNECTIONHANDLER_H
#define DCXPCDISCONNECTIONHANDLER_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface DCXPCDisconnectionHandler : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain) NSMutableDictionary *disconnectionCallbacks; // ivar: _disconnectionCallbacks
@property NSInteger disconnectionErrorCode; // ivar: _disconnectionErrorCode
@property (retain) NSString *disconnectionErrorDomain; // ivar: _disconnectionErrorDomain
@property (retain) NSMutableDictionary *disconnectionOptionCallbacks; // ivar: _disconnectionOptionCallbacks
@property (retain) NSMutableDictionary *disconnectionResultCallbacks; // ivar: _disconnectionResultCallbacks
@property BOOL isDisconnected; // ivar: _isDisconnected
@property (retain) NSString *name; // ivar: _name


-(id)createDaemonDisconnectedError;
-(id)initWithName:(id)arg0 errorDomain:(id)arg1 errorCode:(NSInteger)arg2 ;
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