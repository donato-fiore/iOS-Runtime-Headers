// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSFDSREQUEST_H
#define AMSFDSREQUEST_H

@class ACAccount, NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSFDSOptions.h"

@interface AMSFDSRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (copy, nonatomic) NSString *logKey; // ivar: _logKey
@property (readonly, nonatomic) AMSFDSOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSNumber *purchaseIdentifier; // ivar: _purchaseIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPurchaseIdentifier:(id)arg0 account:(id)arg1 options:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif