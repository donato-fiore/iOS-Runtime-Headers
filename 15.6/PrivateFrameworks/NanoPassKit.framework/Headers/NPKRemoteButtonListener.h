// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKREMOTEBUTTONLISTENER_H
#define NPKREMOTEBUTTONLISTENER_H

@class NSString;
@protocol NPKDoublePressDelegationAssertionDelegate, NPKRemoteButtonListenerDelegate;


#import "NPKButtonListener.h"
#import "NPKDoublePressDelegationAssertion.h"

@interface NPKRemoteButtonListener : NPKButtonListener <NPKDoublePressDelegationAssertionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKRemoteButtonListenerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NPKDoublePressDelegationAssertion *delegationAssertion; // ivar: _delegationAssertion
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)doublePressDelegationAssertion:(id)arg0 didReceiveTerminalAuthenticationRequestForPassWithUniqueID:(id)arg1 ;
-(void)doublePressDelegationAssertionDidReceiveDelegatedDoublePressEvent:(id)arg0 ;


@end


#endif