// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIVERIFICATIONSESSIONCONTEXT_H
#define DIVERIFICATIONSESSIONCONTEXT_H

@class NSDictionary, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DIVerificationSessionContext : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *httpHeaders; // ivar: _httpHeaders
@property (nonatomic) NSUInteger invocationReason; // ivar: _invocationReason
@property (copy, nonatomic) NSArray *preferredLanguages; // ivar: _preferredLanguages
@property (copy, nonatomic) NSString *regionCode; // ivar: _regionCode
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, copy, nonatomic) NSString *serviceURL; // ivar: _serviceURL
@property (readonly, copy, nonatomic) NSString *tier; // ivar: _tier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 tier:(id)arg1 serviceUrl:(id)arg2 httpHeaders:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif