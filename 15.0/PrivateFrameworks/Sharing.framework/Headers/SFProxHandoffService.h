// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPROXHANDOFFSERVICE_H
#define SFPROXHANDOFFSERVICE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFService.h"

@interface SFProxHandoffService : NSObject {
    BOOL _activateCalled;
    id *_activateCompletion;
    BOOL _invalidateCalled;
    SFService *_service;
    int _serviceState;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue


-(id)description;
-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_activated;
-(void)_cleanup;
-(void)_completedWithError:(id)arg0 ;
-(void)_serviceStart;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif