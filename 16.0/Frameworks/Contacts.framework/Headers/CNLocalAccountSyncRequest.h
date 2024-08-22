// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNLOCALACCOUNTSYNCREQUEST_H
#define CNLOCALACCOUNTSYNCREQUEST_H

@protocol NSCopying, NSSecureCoding;


#import "CNAccountSyncRequest.h"

@interface CNLocalAccountSyncRequest : CNAccountSyncRequest <NSCopying, NSSecureCoding>



@property BOOL clearify; // ivar: _clearify
@property BOOL resetStandby; // ivar: _resetStandby
@property NSUInteger retryCount; // ivar: _retryCount
@property BOOL standby; // ivar: _standby


+(BOOL)supportsSecureCoding;
+(id)argumentsForRequest:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif