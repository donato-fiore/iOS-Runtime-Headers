// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCONCRETEIDSMESSAGEDIDRECEIVESUBSCRIPTION_H
#define CRKCONCRETEIDSMESSAGEDIDRECEIVESUBSCRIPTION_H

@protocol CRKResumable, CRKCancelable, CRKConcreteIDSMessageDidReceiveSubscriptionDelegate;

#import <Foundation/Foundation.h>


@interface CRKConcreteIDSMessageDidReceiveSubscription : NSObject <CRKResumable, CRKCancelable>



@property (weak, nonatomic) NSObject<CRKConcreteIDSMessageDidReceiveSubscriptionDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (nonatomic, getter=isResumed) BOOL resumed; // ivar: _resumed


-(id)initWithHandler:(id)arg0 ;
-(void)cancel;
-(void)receiveMessage:(id)arg0 senderAppleID:(id)arg1 senderAddress:(id)arg2 ;
-(void)resume;


@end


#endif