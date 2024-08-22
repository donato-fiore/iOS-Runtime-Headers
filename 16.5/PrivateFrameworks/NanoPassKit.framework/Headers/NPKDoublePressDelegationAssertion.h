// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKDOUBLEPRESSDELEGATIONASSERTION_H
#define NPKDOUBLEPRESSDELEGATIONASSERTION_H

@protocol NPKDoublePressDelegationAssertionDelegate;


#import "NPKTransientAssertion.h"

@interface NPKDoublePressDelegationAssertion : NPKTransientAssertion

@property (weak, nonatomic) NSObject<NPKDoublePressDelegationAssertionDelegate> *delegate; // ivar: _delegate


-(id)initWithQueue:(id)arg0 ;
-(void)_resyncState;
-(void)handleDelegatedDoublePressEvent;
-(void)handleTerminalAuthenticationRequestedForPassWithUniqueID:(id)arg0 ;


@end


#endif