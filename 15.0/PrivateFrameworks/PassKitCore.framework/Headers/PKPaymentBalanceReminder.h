// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTBALANCEREMINDER_H
#define PKPAYMENTBALANCEREMINDER_H

@class NSDecimalNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentBalanceReminder : NSObject <NSSecureCoding>



@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSDecimalNumber *threshold; // ivar: _threshold


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithThreshold:(id)arg0 isEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif