// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTTRANSACTIONPRESENTATIONINFORMATION_H
#define PKPAYMENTTRANSACTIONPRESENTATIONINFORMATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKPaymentTransactionPresentationInformation : NSObject

@property (nonatomic) BOOL destructiveSecondaryString; // ivar: _destructiveSecondaryString
@property (retain, nonatomic) NSString *primaryString; // ivar: _primaryString
@property (retain, nonatomic) NSString *rewardsString; // ivar: _rewardsString
@property (retain, nonatomic) NSString *secondaryString; // ivar: _secondaryString
@property (nonatomic) BOOL shouldGrayValue; // ivar: _shouldGrayValue
@property (nonatomic) BOOL shouldShowDisclosure; // ivar: _shouldShowDisclosure
@property (nonatomic) BOOL shouldStrikeValue; // ivar: _shouldStrikeValue
@property (retain, nonatomic) NSString *tertiaryString; // ivar: _tertiaryString
@property (retain, nonatomic) NSString *valueString; // ivar: _valueString




@end


#endif