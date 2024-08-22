// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCONCRETEIDSMESSAGEDIDSENDSUBSCRIPTION_H
#define CRKCONCRETEIDSMESSAGEDIDSENDSUBSCRIPTION_H

@protocol CRKResumable, CRKCancelable, CRKConcreteIDSMessageDidSendSubscriptionDelegate;

#import <Foundation/Foundation.h>


@interface CRKConcreteIDSMessageDidSendSubscription : NSObject <CRKResumable, CRKCancelable>



@property (weak, nonatomic) NSObject<CRKConcreteIDSMessageDidSendSubscriptionDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (nonatomic, getter=isResumed) BOOL resumed; // ivar: _resumed


-(id)initWithHandler:(id)arg0 ;
-(void)cancel;
-(void)receiveMessageIdentifier:(id)arg0 didSucceed:(BOOL)arg1 error:(id)arg2 ;
-(void)resume;


@end


#endif