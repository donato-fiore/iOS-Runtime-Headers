// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKREMOTEBUTTONLISTENER_H
#define NPKREMOTEBUTTONLISTENER_H

@class NSString;
@protocol NPKDoublePressDelegationAssertionDelegate, OS_dispatch_queue, NPKRemoteButtonListenerDelegate;


#import "NPKButtonListener.h"
#import "NPKDoublePressDelegationAssertion.h"

@interface NPKRemoteButtonListener : NPKButtonListener <NPKDoublePressDelegationAssertionDelegate>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKRemoteButtonListenerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NPKDoublePressDelegationAssertion *delegationAssertion; // ivar: _delegationAssertion
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)doublePressDelegationAssertion:(id)arg0 didReceiveTerminalAuthenticationRequestForPassWithUniqueID:(id)arg1 ;
-(void)doublePressDelegationAssertionDidReceiveDelegatedDoublePressEvent:(id)arg0 ;


@end


#endif