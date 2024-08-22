// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSSERVICEACCOUNT_H
#define MSSERVICEACCOUNT_H

@class NSString, NSURL, NSArray, NSUUID, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSServiceAccount : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accountName; // ivar: _accountName
@property (copy, nonatomic) NSString *authorizationScope; // ivar: _authorizationScope
@property (copy, nonatomic) NSURL *authorizationTokenURL; // ivar: _authorizationTokenURL
@property (copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (copy, nonatomic) NSString *clientSecret; // ivar: _clientSecret
@property (copy, nonatomic) NSURL *configurationURL; // ivar: _configurationURL
@property (readonly, copy, nonatomic) NSArray *intentExamples; // ivar: _intentExamples
@property (copy, nonatomic) NSUUID *serviceID; // ivar: _serviceID
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, copy, nonatomic) NSSet *supportedMediaIntents; // ivar: _supportedMediaIntents


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 accountName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif