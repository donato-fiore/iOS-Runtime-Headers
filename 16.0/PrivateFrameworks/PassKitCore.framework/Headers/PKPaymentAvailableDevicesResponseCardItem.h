// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTAVAILABLEDEVICESRESPONSECARDITEM_H
#define PKPAYMENTAVAILABLEDEVICESRESPONSECARDITEM_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface PKPaymentAvailableDevicesResponseCardItem : NSObject

@property (copy, nonatomic) NSString *cardType; // ivar: _cardType
@property (copy, nonatomic) NSNumber *cardTypeCode; // ivar: _cardTypeCode
@property (copy, nonatomic) NSString *currentStatus; // ivar: _currentStatus
@property (nonatomic) BOOL supportsInApp; // ivar: _supportsInApp


-(id)initWithDictionary:(id)arg0 ;


@end


#endif