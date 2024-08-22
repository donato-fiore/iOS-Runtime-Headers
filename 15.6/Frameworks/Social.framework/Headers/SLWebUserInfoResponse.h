// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLWEBUSERINFORESPONSE_H
#define SLWEBUSERINFORESPONSE_H

@class NSString, NSArray, NSError, NSDictionary;

#import <Foundation/Foundation.h>


@interface SLWebUserInfoResponse : NSObject

@property (readonly) NSString *displayName; // ivar: _displayName
@property (readonly) NSString *emailAddress;
@property (readonly) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly) NSError *error; // ivar: _error
@property (readonly) NSString *errorMessage; // ivar: _errorMessage
@property (readonly) NSInteger statusCode; // ivar: _statusCode
@property (readonly) NSDictionary *userInfo; // ivar: _userInfo


-(id)initWithData:(id)arg0 urlResponse:(id)arg1 error:(id)arg2 ;


@end


#endif