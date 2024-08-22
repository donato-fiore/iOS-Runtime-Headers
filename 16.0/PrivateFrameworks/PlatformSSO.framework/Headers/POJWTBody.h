// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POJWTBODY_H
#define POJWTBODY_H

@class NSDictionary, NSString, NSArray, NSMutableDictionary, NSDate, NSNumber, NSMutableData;

#import <Foundation/Foundation.h>


@interface POJWTBody : NSObject

@property (readonly) NSDictionary *allData;
@property (readonly) NSString *assertion;
@property (readonly) NSString *aud;
@property (readonly) NSArray *audArray;
@property (readonly) NSString *azp;
@property (readonly) NSString *client_id;
@property (retain) NSMutableDictionary *data; // ivar: _data
@property (readonly) NSDate *exp;
@property (readonly) NSNumber *expires_in;
@property (readonly) NSDate *expires_on;
@property (readonly) NSString *grant_type;
@property (readonly) NSDate *iat;
@property (readonly) NSString *id_token;
@property (readonly) NSString *iss;
@property (readonly) NSDate *nbf;
@property (readonly) NSString *nonce;
@property (readonly) NSMutableData *password;
@property (retain) NSMutableData *passwordData; // ivar: _passwordData
@property (readonly) NSString *refresh_token;
@property (readonly) NSNumber *refresh_token_expires_in;
@property (readonly) NSString *request_nonce;
@property (readonly) NSString *scope;
@property (readonly) NSString *sub;
@property (readonly) NSString *token_type;
@property (readonly) NSString *use;
@property (readonly) NSString *username;


-(id)description;
-(id)init;
-(id)initWithJWTData:(id)arg0 ;
-(id)mutableCopy;
-(void)dealloc;
-(void)zeroPassword;


@end


#endif