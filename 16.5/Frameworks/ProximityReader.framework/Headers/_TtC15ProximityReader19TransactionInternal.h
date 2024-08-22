// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15PROXIMITYREADER19TRANSACTIONINTERNAL_H
#define _TTC15PROXIMITYREADER19TRANSACTIONINTERNAL_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC15ProximityReader19TransactionInternal : NSObject <NSSecureCoding>

 {
    ? id;
    ? dataType;
    ? transactionType;
    ? amount;
    ? currencyCode;
    ? countryCode;
    ? preferredAID;
    ? vasMode;
    ? vasRequestName;
    ? vasMerchants;
    ? verificationReason;
}


@property (nonatomic, readonly) NSString *description;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif