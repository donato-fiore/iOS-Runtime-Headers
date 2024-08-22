// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISSTOREAUTHENTICATIONCHALLENGE_H
#define ISSTOREAUTHENTICATIONCHALLENGE_H

@class NSString;
@protocol NSURLAuthenticationChallengeSender;


#import "ISAuthenticationChallenge.h"

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge

@property NSInteger failureCount; // ivar: _failureCount
@property BOOL hasPassword; // ivar: _hasPassword
@property (retain) NSString *password; // ivar: _password
@property NSObject<NSURLAuthenticationChallengeSender> *sender; // ivar: _sender
@property (retain) NSString *user; // ivar: _user
@property BOOL userNameIsEditable; // ivar: _userNameIsEditable


-(id)init;
-(void)dealloc;


@end


#endif