// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POMUTABLEJWTBODY_H
#define POMUTABLEJWTBODY_H

@class NSString, NSArray, NSDate, NSNumber, NSMutableData;


#import "POJWTBody.h"

@interface POMutableJWTBody : POJWTBody

@property (retain) NSString *assertion;
@property (retain) NSString *aud;
@property (retain) NSArray *audArray;
@property (retain) NSString *azp;
@property (retain) NSString *client_id;
@property (retain) NSDate *exp;
@property (retain) NSNumber *expires_in;
@property (retain) NSDate *expires_on;
@property (retain) NSString *grant_type;
@property (retain) NSDate *iat;
@property (retain) NSString *id_token;
@property (retain) NSString *iss;
@property (retain) NSDate *nbf;
@property (retain) NSString *nonce;
@property (retain) NSMutableData *password;
@property (retain) NSString *refresh_token;
@property (retain) NSNumber *refresh_token_expires_in;
@property (retain) NSString *request_nonce;
@property (retain) NSString *scope;
@property (retain) NSString *sub;
@property (retain) NSString *token_type;
@property (retain) NSString *use;
@property (retain) NSString *username;


-(void)addCustomClaims:(id)arg0 ;


@end


#endif