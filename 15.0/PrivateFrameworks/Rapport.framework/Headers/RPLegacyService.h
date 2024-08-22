// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPLEGACYSERVICE_H
#define RPLEGACYSERVICE_H

@class NSMutableDictionary, NSString, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPLegacyService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_requestMap;
    *BonjourAdvertiserPrivate _bonjourAdvertiser;
    int _listenerPort;
    int _tcpSockV4;
    int _tcpSockV6;
}


@property (nonatomic) unsigned int advertiseRate; // ivar: _advertiseRate
@property (nonatomic) unsigned char deviceActionType; // ivar: _deviceActionType
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *hidePINHandler; // ivar: _hidePINHandler
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) BOOL needsSetup; // ivar: _needsSetup
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (copy, nonatomic) id *sessionEndedHandler; // ivar: _sessionEndedHandler
@property (copy, nonatomic) id *sessionStartedHandler; // ivar: _sessionStartedHandler
@property (copy, nonatomic) id *showPINHandler; // ivar: _showPINHandler
@property (copy, nonatomic) NSDictionary *txtDictionary; // ivar: _txtDictionary


-(id)description;
-(id)init;
-(int)_bonjourUpdateService;
-(int)_bonjourUpdateTXT;
-(int)_tcpStart;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_cleanup;
-(void)_invalidate;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)registerRequestID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;


@end


#endif