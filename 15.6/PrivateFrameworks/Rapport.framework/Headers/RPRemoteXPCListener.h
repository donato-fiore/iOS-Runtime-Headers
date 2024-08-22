// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPREMOTEXPCLISTENER_H
#define RPREMOTEXPCLISTENER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPRemoteXPCListener : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}


@property (copy, nonatomic) id *acceptHandler; // ivar: _acceptHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName


-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif