// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSITAPPLETAMOUNT_H
#define PKTRANSITAPPLETAMOUNT_H

@class NSDecimalNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKTransitAppletAmount : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (copy, nonatomic) NSString *balanceIdentifier; // ivar: _balanceIdentifier
@property (copy, nonatomic) NSString *currency; // ivar: _currency
@property (nonatomic) NSInteger exponent; // ivar: _exponent


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAmount:(id)arg0 currency:(id)arg1 exponent:(NSInteger)arg2 identifier:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif