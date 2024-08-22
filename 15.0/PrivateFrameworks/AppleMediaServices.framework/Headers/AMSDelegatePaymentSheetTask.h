// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSDELEGATEPAYMENTSHEETTASK_H
#define AMSDELEGATEPAYMENTSHEETTASK_H



#import "AMSPaymentSheetTask.h"
#import "AMSPromise.h"
#import "AMSDelegatePaymentSheetRequest.h"

@interface AMSDelegatePaymentSheetTask : AMSPaymentSheetTask

@property (retain, nonatomic) AMSPromise *paymentSheetPromise;
@property (retain, nonatomic) AMSDelegatePaymentSheetRequest *request; // ivar: _request


-(id)initWithRequest:(id)arg0 bag:(id)arg1 ;
-(id)perform;


@end


#endif