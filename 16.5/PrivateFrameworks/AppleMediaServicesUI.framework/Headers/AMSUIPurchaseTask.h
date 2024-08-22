// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIPURCHASETASK_H
#define AMSUIPURCHASETASK_H

@class AMSPurchaseTask;
@protocol AMSUIPurchaseDelegate;



@interface AMSUIPurchaseTask : AMSPurchaseTask

@property (weak, nonatomic) NSObject<AMSUIPurchaseDelegate> *delegate;


-(Class)paymentSheetTaskClass;


@end


#endif