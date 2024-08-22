// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKREMOTEBUTTONLISTENER_H
#define NPKREMOTEBUTTONLISTENER_H

@class NSString;
@protocol NPKDoublePressDelegationAssertionDelegate;


#import "NPKButtonListener.h"
#import "NPKDoublePressDelegationAssertion.h"

@interface NPKRemoteButtonListener : NPKButtonListener <NPKDoublePressDelegationAssertionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NPKDoublePressDelegationAssertion *delegationAssertion; // ivar: _delegationAssertion
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)doublePressDelegationAssertionDidReceiveDelegatedDoublePressEvent:(id)arg0 ;


@end


#endif