// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKADDPAYMENTPASSCONTROLLER_H
#define PKADDPAYMENTPASSCONTROLLER_H

@protocol PKAddPaymentPassControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKAddPaymentPassRequestConfiguration.h"

@interface PKAddPaymentPassController : NSObject

@property (retain, nonatomic) PKAddPaymentPassRequestConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) NSObject<PKAddPaymentPassControllerDelegate> *delegate; // ivar: _delegate


+(BOOL)canAddPaymentPass;
+(Class)_desiredClass;
-(id)init;
-(id)initWithRequestConfiguration:(id)arg0 delegate:(id)arg1 ;
-(void)dismissWithCompletion:(id)arg0 ;
-(void)presentWithCompletion:(id)arg0 ;


@end


#endif