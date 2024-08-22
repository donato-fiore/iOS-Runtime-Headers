// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPPRODUCTCONFIGURATION_H
#define PKPAYMENTSETUPPRODUCTCONFIGURATION_H

@class NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupProductConfiguration : NSObject <NSCopying>



@property (copy, nonatomic) NSString *dirtyStateIdentifier; // ivar: _dirtyStateIdentifier
@property (copy, nonatomic) NSString *discoveryCardIdentifier; // ivar: _discoveryCardIdentifier
@property (nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (retain, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (copy, nonatomic) NSString *notificationMessage; // ivar: _notificationMessage
@property (copy, nonatomic) NSString *notificationTitle; // ivar: _notificationTitle
@property (copy, nonatomic) NSString *partnerIdentifier; // ivar: _partnerIdentifier
@property (copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProductDictionary:(id)arg0 ;


@end


#endif