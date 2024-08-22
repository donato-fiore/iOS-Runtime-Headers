// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACTIVITYEVENTTRANSACTION_H
#define PKACTIVITYEVENTTRANSACTION_H



#import "PKActivityEvent.h"
#import "PKPaymentTransaction.h"

@interface PKActivityEventTransaction : PKActivityEvent

@property (readonly, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction


-(BOOL)isEqualToActivityEvent:(id)arg0 ;
-(NSUInteger)hash;
-(id)eventType;
-(id)initWithTransaction:(id)arg0 unread:(BOOL)arg1 ;


@end


#endif