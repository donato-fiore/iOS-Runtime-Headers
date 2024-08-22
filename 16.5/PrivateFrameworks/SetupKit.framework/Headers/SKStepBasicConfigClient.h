// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKSTEPBASICCONFIGCLIENT_H
#define SKSTEPBASICCONFIGCLIENT_H

@class NSString;
@protocol SKStepable, OS_dispatch_queue, CUMessaging;

#import <Foundation/Foundation.h>

#import "SKSetupBase.h"

@interface SKStepBasicConfigClient : NSObject <SKStepable>

 {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _responseReceived;
    int _runState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *skCompletionHandler; // ivar: _skCompletionHandler
@property (retain, nonatomic) NSObject<CUMessaging> *skMessaging; // ivar: _skMessaging
@property (weak, nonatomic) SKSetupBase *skSetupObject; // ivar: _skSetupObject
@property (readonly) Class superclass;


-(BOOL)_runBasicConfigStart;
-(id)init;
-(void)_completeWithError:(id)arg0 ;
-(void)_invalidated;
-(void)_run;
-(void)activate;
-(void)invalidate;


@end


#endif