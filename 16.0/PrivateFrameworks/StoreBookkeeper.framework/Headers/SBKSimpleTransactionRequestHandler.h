// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBKSIMPLETRANSACTIONREQUESTHANDLER_H
#define SBKSIMPLETRANSACTIONREQUESTHANDLER_H



#import "SBKRequestHandler.h"
#import "SBKTransactionController.h"

@interface SBKSimpleTransactionRequestHandler : SBKRequestHandler

@property (readonly, nonatomic) BOOL canceled; // ivar: _canceled
@property (readonly, nonatomic) SBKTransactionController *transactionController; // ivar: _transactionController


-(id)initWithBagContext:(id)arg0 ;
-(void)cancel;
-(void)cancelWithError:(id)arg0 ;
-(void)scheduleTransaction:(id)arg0 finishedBlock:(id)arg1 ;
-(void)timeout;


@end


#endif