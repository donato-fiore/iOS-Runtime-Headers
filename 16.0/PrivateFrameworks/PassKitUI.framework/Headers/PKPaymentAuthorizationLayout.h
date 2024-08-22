// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTAUTHORIZATIONLAYOUT_H
#define PKPAYMENTAUTHORIZATIONLAYOUT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKPaymentAuthorizationLayout : NSObject

@property (readonly, nonatomic) CGFloat contentHorizontalMargin; // ivar: _contentHorizontalMargin
@property (readonly, nonatomic) CGFloat glyphDimension; // ivar: _glyphDimension
@property (readonly, nonatomic) BOOL isAMPPayment; // ivar: _isAMPPayment
@property (readonly, nonatomic) BOOL isInstallment; // ivar: _isInstallment
@property (readonly, nonatomic) BOOL isPaymentSummaryPinned; // ivar: _isPaymentSummaryPinned
@property (readonly, nonatomic) NSString *localizedNavigationTitle; // ivar: _localizedNavigationTitle
@property (readonly, nonatomic) NSUInteger requestType; // ivar: _requestType
@property (readonly, nonatomic) NSUInteger requestor; // ivar: _requestor
@property (readonly, nonatomic) BOOL shouldSuppressTotal; // ivar: _shouldSuppressTotal
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly, nonatomic) CGFloat valueLeftMargin; // ivar: _valueLeftMargin


-(id)initWithStyle:(NSInteger)arg0 paymentRequest:(id)arg1 ;


@end


#endif