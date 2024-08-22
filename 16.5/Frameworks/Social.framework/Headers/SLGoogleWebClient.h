// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLGOOGLEWEBCLIENT_H
#define SLGOOGLEWEBCLIENT_H

@class NSString, NSArray;
@protocol SLWebClient;

#import <Foundation/Foundation.h>


@interface SLGoogleWebClient : NSObject <SLWebClient>

 {
    NSString *_clientID;
}


@property (readonly, nonatomic) NSString *authRequestURL;
@property (readonly, nonatomic) NSString *clientID;
@property (readonly, nonatomic) NSString *clientRedirect;
@property (readonly, nonatomic) NSString *clientRedirectForAppOpenURL;
@property (readonly, nonatomic) NSString *clientSecret;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *defaultScope;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *emailScope;
@property (readonly, nonatomic) NSString *fallbackUserInfoURL;
@property (readonly, nonatomic) Class fallbackWebUserInfoResponseClass;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *source;
@property (readonly) Class superclass;
@property (readonly, nonatomic) Class tokenRequestClass;
@property (readonly, nonatomic) Class tokenResponseClass;
@property (readonly, nonatomic) NSString *tokenURL;
@property (readonly, nonatomic) NSString *userInfoURL;
@property (readonly, nonatomic) Class webAuthRequestClass;
@property (readonly, nonatomic) Class webUserInfoResponseClass;
@property (readonly, nonatomic) NSArray *youTubeScope;


+(BOOL)supportsSecureCoding;
-(id)initWithClientID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif