// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKOSTRANSACTIONTOKEN_H
#define CRKOSTRANSACTIONTOKEN_H

@protocol CRKCancelable, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface CRKOSTransactionToken : NSObject <CRKCancelable>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSObject<OS_os_transaction> *underlyingTransaction; // ivar: _underlyingTransaction


-(id)initWithReason:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancel;
-(void)dealloc;


@end


#endif