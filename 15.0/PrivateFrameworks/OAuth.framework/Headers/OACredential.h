// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OACREDENTIAL_H
#define OACREDENTIAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OACredential : NSObject

@property (copy, nonatomic) NSString *consumerKey; // ivar: _consumerKey
@property (copy, nonatomic) NSString *consumerSecret; // ivar: _consumerSecret
@property (copy, nonatomic) NSString *oauthToken; // ivar: _oauthToken
@property (copy, nonatomic) NSString *oauthTokenSecret; // ivar: _oauthTokenSecret


-(id)signingKey;
-(void)dealloc;


@end


#endif