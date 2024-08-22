// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTACTION_H
#define PKACCOUNTACTION_H

@class NSDecimalNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccountAction : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger actionType; // ivar: _actionType
@property (retain, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (retain, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger redemptionType; // ivar: _redemptionType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif