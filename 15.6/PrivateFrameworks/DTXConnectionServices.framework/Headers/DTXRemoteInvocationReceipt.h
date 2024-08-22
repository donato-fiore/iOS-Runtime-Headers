// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTXREMOTEINVOCATIONRECEIPT_H
#define DTXREMOTEINVOCATIONRECEIPT_H


#import <Foundation/Foundation.h>


@interface DTXRemoteInvocationReceipt : NSObject {
    id *_returnValue;
    id *_completionHandler;
    id *_waiterChain;
    os_unfair_lock_s _guard;
    BOOL _valueState;
    BOOL _completionState;
    BOOL _reserved;
}




-(id)init;
-(void)_checkedAssign:(id)arg0 ;
-(void)handleCompletion:(id)arg0 ;
-(void)invokeCompletionWithReturnValue:(id)arg0 error:(id)arg1 ;
-(void)waitForFulfillment;


@end


#endif