// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCGETWEBTOKENOPERATION_H
#define FCGETWEBTOKENOPERATION_H



#import "FCOperation.h"
#import "FCNewsletterEndpointConnection.h"

@interface FCGetWebTokenOperation : FCOperation

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) FCNewsletterEndpointConnection *endpointConnection; // ivar: _endpointConnection


-(id)initWithEndpointConnection:(id)arg0 completion:(id)arg1 ;
-(void)performOperation;


@end


#endif