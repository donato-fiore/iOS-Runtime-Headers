// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPREFERENCECARDENTRY_H
#define PKPAYMENTPREFERENCECARDENTRY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PKPaymentPass.h"
#import "PKPaymentApplication.h"
#import "PKRemotePaymentInstrument.h"

@interface PKPaymentPreferenceCardEntry : NSObject

@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (copy, nonatomic) NSString *availabilityString; // ivar: _availabilityString
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL insetsSeparatorByTextOffset; // ivar: _insetsSeparatorByTextOffset
@property (nonatomic) BOOL isSelectable; // ivar: _isSelectable
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (retain, nonatomic) PKPaymentApplication *paymentApplication; // ivar: _paymentApplication
@property (retain, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument; // ivar: _remotePaymentInstrument
@property (nonatomic) BOOL shouldShowCardUI; // ivar: _shouldShowCardUI




@end


#endif