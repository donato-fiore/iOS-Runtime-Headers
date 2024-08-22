// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFDEVICESETUPWHASERVICE_H
#define SFDEVICESETUPWHASERVICE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFService.h"
#import "SFSession.h"
#import "SFDeviceOperationHandlerCDPSetup.h"

@interface SFDeviceSetupWHAService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _prefCDPEnabled;
    SFService *_sfService;
    SFSession *_sfSession;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) BOOL needsCDPRepair; // ivar: _needsCDPRepair
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler


-(id)init;
-(void)_cleanup;
-(void)_handleInfoExchange:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleRequest:(id)arg0 flags:(unsigned int)arg1 session:(id)arg2 responseHandler:(id)arg3 ;
-(void)_handleSessionEnded:(id)arg0 ;
-(void)_handleSessionStarted:(id)arg0 ;
-(void)_sfServiceStart;
-(void)activate;
-(void)dealloc;
-(void)invalidate;


@end


#endif