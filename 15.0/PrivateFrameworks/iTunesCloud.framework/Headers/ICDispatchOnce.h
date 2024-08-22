// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDISPATCHONCE_H
#define ICDISPATCHONCE_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "ICDispatchOnce.h"

@interface ICDispatchOnce : NSObject {
    id *_booleanHandler;
    atomic_flag _didFire;
    NSObject<OS_dispatch_queue> *_queue;
    id *_objectHandler;
    ICDispatchOnce *_strongSelf;
    CGFloat _timeout;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}




-(id)initWithBooleanHandler:(id)arg0 ;
-(id)initWithObjectHandler:(id)arg0 ;
-(void)_invalidate;
-(void)failWithError:(id)arg0 ;
-(void)finishWithBooleanResult:(BOOL)arg0 error:(id)arg1 ;
-(void)finishWithObjectResult:(id)arg0 error:(id)arg1 ;
-(void)startWithTimeout:(CGFloat)arg0 ;
-(void)startWithTimeout:(CGFloat)arg0 queue:(id)arg1 ;


@end


#endif