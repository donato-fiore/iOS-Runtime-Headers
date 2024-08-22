// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENCREDENTIALS_H
#define ENCREDENTIALS_H

@class NSString, NSDate;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface ENCredentials : NSObject <NSCoding>



@property (copy, nonatomic) NSString *authenticationToken; // ivar: _authenticationToken
@property (copy, nonatomic) NSString *edamUserId; // ivar: _edamUserId
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSString *host; // ivar: _host
@property (copy, nonatomic) NSString *noteStoreUrl; // ivar: _noteStoreUrl
@property (copy, nonatomic) NSString *webApiUrlPrefix; // ivar: _webApiUrlPrefix


-(BOOL)areValid;
-(BOOL)saveToKeychain;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHost:(id)arg0 authenticationResult:(id)arg1 ;
-(id)initWithHost:(id)arg0 edamUserId:(id)arg1 noteStoreUrl:(id)arg2 webApiUrlPrefix:(id)arg3 authenticationToken:(id)arg4 expirationDate:(id)arg5 ;
-(id)keychainQuery;
-(void)deleteFromKeychain;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif