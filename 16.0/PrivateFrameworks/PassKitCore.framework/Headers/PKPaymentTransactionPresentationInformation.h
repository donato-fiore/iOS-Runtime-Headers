// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTTRANSACTIONPRESENTATIONINFORMATION_H
#define PKPAYMENTTRANSACTIONPRESENTATIONINFORMATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKPaymentTransactionPresentationInformation : NSObject

@property (retain, nonatomic) NSString *badgeString; // ivar: _badgeString
@property (nonatomic) BOOL destructiveSecondaryString; // ivar: _destructiveSecondaryString
@property (retain, nonatomic) NSString *primaryString; // ivar: _primaryString
@property (retain, nonatomic) NSString *secondaryString; // ivar: _secondaryString
@property (nonatomic) BOOL shouldGrayValue; // ivar: _shouldGrayValue
@property (nonatomic) BOOL shouldShowBonus; // ivar: _shouldShowBonus
@property (nonatomic) BOOL shouldShowDisclosure; // ivar: _shouldShowDisclosure
@property (nonatomic) BOOL shouldStrikeValue; // ivar: _shouldStrikeValue
@property (retain, nonatomic) NSString *tertiaryString; // ivar: _tertiaryString
@property (retain, nonatomic) NSString *valueString; // ivar: _valueString


-(BOOL)isEqual:(id)arg0 ;


@end


#endif