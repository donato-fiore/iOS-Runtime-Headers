// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIACTIONCOMMERCEINTERRUPTEDTRANSACTIONMANAGER_H
#define VUIACTIONCOMMERCEINTERRUPTEDTRANSACTIONMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VUIActionCommerceInterruptedTransactionManager : NSObject {
    NSDictionary *interruptedOfferDetails;
}




+(id)sharedInstance;
-(id)getLastInterruptedOfferDetails;
-(void)setLastInterruptedOfferDetails:(id)arg0 ;


@end


#endif