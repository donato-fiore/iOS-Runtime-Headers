// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTHISTORICALBALANCE_H
#define PKACCOUNTHISTORICALBALANCE_H

@class NSDecimalNumber, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccountHistoricalBalance : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDecimalNumber *balance; // ivar: _balance
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBalance:(id)arg0 date:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif