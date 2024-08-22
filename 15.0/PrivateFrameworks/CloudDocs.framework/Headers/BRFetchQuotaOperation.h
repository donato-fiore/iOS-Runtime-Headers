// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRFETCHQUOTAOPERATION_H
#define BRFETCHQUOTAOPERATION_H



#import "BROperation.h"

@interface BRFetchQuotaOperation : BROperation

@property (copy) id *fetchQuotaCompletionBlock; // ivar: _fetchQuotaCompletionBlock


-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif