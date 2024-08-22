// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSAMSREQUEST_H
#define VSAMSREQUEST_H

@class NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VSAuditToken.h"

@interface VSAMSRequest : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) VSAuditToken *auditToken; // ivar: _auditToken
@property (copy, nonatomic) NSString *methodName; // ivar: _methodName
@property (copy, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (copy, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (nonatomic) NSUInteger requestType; // ivar: _requestType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif