// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFB389NFCPROMPTSESSION_H
#define SFB389NFCPROMPTSESSION_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFB389NFCPromptConfiguration.h"

@interface SFB389NFCPromptSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFB389NFCPromptConfiguration *_config;
    NSXPCConnection *_xpcCnx;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *userResponseHandler; // ivar: _userResponseHandler


-(id)_getRemoteObjectProxy;
-(id)init;
-(id)initWithInitialConfiguration:(id)arg0 ;
-(void)_ensureXPCStarted;
-(void)activate;
-(void)dealloc;
-(void)invalidate;
-(void)updateCardConfiguration:(id)arg0 ;


@end


#endif