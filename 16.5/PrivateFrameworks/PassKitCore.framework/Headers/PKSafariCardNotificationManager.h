// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSAFARICARDNOTIFICATIONMANAGER_H
#define PKSAFARICARDNOTIFICATIONMANAGER_H


#import <Foundation/Foundation.h>

#import "PKPaymentService.h"

@interface PKSafariCardNotificationManager : NSObject {
    PKPaymentService *_paymentService;
}




-(id)init;
-(void)_eligibleToCheckWithCompletion:(id)arg0 ;
-(void)userDidPerformAction:(NSInteger)arg0 withCard:(id)arg1 ;


@end


#endif