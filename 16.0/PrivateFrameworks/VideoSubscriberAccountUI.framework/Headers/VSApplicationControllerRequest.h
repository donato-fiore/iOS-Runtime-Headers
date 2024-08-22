// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSAPPLICATIONCONTROLLERREQUEST_H
#define VSAPPLICATIONCONTROLLERREQUEST_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface VSApplicationControllerRequest : NSObject

@property (copy, nonatomic) NSString *SAMLRequest; // ivar: _SAMLRequest
@property (copy, nonatomic) NSArray *attributeNames; // ivar: _attributeNames
@property (copy, nonatomic) NSString *authenticationToken; // ivar: _authenticationToken
@property (copy, nonatomic) NSString *requestorVerificationToken; // ivar: _requestorVerificationToken
@property (nonatomic) NSInteger type; // ivar: _type




@end


#endif