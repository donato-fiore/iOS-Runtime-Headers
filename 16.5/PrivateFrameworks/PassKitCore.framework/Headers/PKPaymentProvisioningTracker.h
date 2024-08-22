// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPROVISIONINGTRACKER_H
#define PKPAYMENTPROVISIONINGTRACKER_H

@class NSString;
@protocol PKCancelable;

#import <Foundation/Foundation.h>

#import "PKPaymentProvisioningController.h"

@interface PKPaymentProvisioningTracker : NSObject <PKCancelable>

 {
    PKPaymentProvisioningController *_controller;
}


@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPaymentProvisioningController:(id)arg0 ;
-(void)cancel;
-(void)dealloc;


@end


#endif