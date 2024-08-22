// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISAUTHENTICATIONCHALLENGE_H
#define ISAUTHENTICATIONCHALLENGE_H

@class NSURLAuthenticationChallenge, NSString;
@protocol NSURLAuthenticationChallengeSender;

#import <Foundation/Foundation.h>


@interface ISAuthenticationChallenge : NSObject {
    NSURLAuthenticationChallenge *_challenge;
}


@property (readonly) NSInteger failureCount;
@property (readonly) BOOL hasPassword;
@property (retain) NSString *localizedMessage; // ivar: _localizedMessage
@property (retain) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, retain) NSString *password;
@property (readonly) NSObject<NSURLAuthenticationChallengeSender> *sender;
@property (readonly, retain) NSString *user;
@property (readonly) BOOL userNameIsEditable;
@property (readonly) BOOL userNameIsEmail;


-(id)initWithAuthenticationChallenge:(id)arg0 ;
-(void)cancelAuthentication;
-(void)dealloc;
-(void)useCredential:(id)arg0 ;


@end


#endif