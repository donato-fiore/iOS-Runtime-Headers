// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKUSAGENOTIFICATIONCLIENT_H
#define PKUSAGENOTIFICATIONCLIENT_H

@protocol PKUsageNotificationClientExportedInterface;

#import <Foundation/Foundation.h>

#import "PKXPCService.h"

@interface PKUsageNotificationClient : NSObject <PKUsageNotificationClientExportedInterface>

 {
    PKXPCService *_connection;
    id *_handler;
    id *_paymentHandler;
    id *_paymentPassUsageHandler;
}




-(id)init;
-(void)setPassUsageHandler:(id)arg0 ;
-(void)setPaymentPassUsageHandler:(id)arg0 ;
-(void)setPaymentUsageHandler:(id)arg0 ;
-(void)usedPassFromSource:(NSInteger)arg0 withTypeIdentifier:(id)arg1 info:(id)arg2 ;
-(void)usedPaymentPassWithTransactionIdentifier:(id)arg0 info:(id)arg1 ;
-(void)usedPaymentPassWithUniqueIdentifier:(id)arg0 transactionIdentifier:(id)arg1 info:(id)arg2 ;


@end


#endif