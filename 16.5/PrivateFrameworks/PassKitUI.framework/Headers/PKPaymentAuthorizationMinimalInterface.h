// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAUTHORIZATIONMINIMALINTERFACE_H
#define PKPAYMENTAUTHORIZATIONMINIMALINTERFACE_H

@class NSString, UIViewController;
@protocol PKPaymentAuthorizationInterface;

#import <Foundation/Foundation.h>


@interface PKPaymentAuthorizationMinimalInterface : NSObject <PKPaymentAuthorizationInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *primaryViewController; // ivar: _primaryViewController
@property (readonly) Class superclass;


-(id)initWithPrimaryViewController:(id)arg0 ;


@end


#endif