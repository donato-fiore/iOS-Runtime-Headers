// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCGETNEWSLETTERSUBSCRIPTIONOPERATION_H
#define FCGETNEWSLETTERSUBSCRIPTIONOPERATION_H



#import "FCOperation.h"
#import "FCNewsletterEndpointConnection.h"

@interface FCGetNewsletterSubscriptionOperation : FCOperation

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) FCNewsletterEndpointConnection *endpointConnection; // ivar: _endpointConnection


-(id)initWithEndpointConnection:(id)arg0 completion:(id)arg1 ;
-(void)performOperation;


@end


#endif