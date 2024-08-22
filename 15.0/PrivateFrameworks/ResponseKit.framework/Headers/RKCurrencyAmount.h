// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RKCURRENCYAMOUNT_H
#define RKCURRENCYAMOUNT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RKCurrencyAmount : NSObject <NSSecureCoding>



@property (readonly) NSString *currency; // ivar: _currency
@property (readonly) NSString *string; // ivar: _string
@property (readonly) CGFloat value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 currency:(id)arg1 value:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif