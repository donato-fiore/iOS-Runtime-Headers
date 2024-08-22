// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIJSAPPLEACCOUNT_H
#define SKUIJSAPPLEACCOUNT_H

@class ACAccount, NSString;
@protocol SKUIJSAppleAccount;

#import <Foundation/Foundation.h>


@interface SKUIJSAppleAccount : NSObject <SKUIJSAppleAccount>

 {
    ACAccount *_account;
}


@property (readonly, nonatomic) NSString *DSID;
@property (readonly, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) ACAccount *nativeAccount; // ivar: _nativeAccount
@property (readonly, nonatomic) NSString *username;


-(id)initWithACAccount:(id)arg0 ;


@end


#endif