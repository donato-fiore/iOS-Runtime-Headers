// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKQUICKPAYMENTSESSIONCLEANUPDELEGATE_H
#define NPKQUICKPAYMENTSESSIONCLEANUPDELEGATE_H

@class NSString;
@protocol NPKQuickPaymentSessionDelegate;

#import <Foundation/Foundation.h>


@interface NPKQuickPaymentSessionCleanupDelegate : NSObject <NPKQuickPaymentSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_saveTransactionFromContext:(id)arg0 ;
-(void)paymentSession:(id)arg0 didCompleteForReason:(NSUInteger)arg1 withTransactionContext:(id)arg2 ;
-(void)paymentSession:(id)arg0 didCompleteTransactionWithContext:(id)arg1 ;


@end


#endif