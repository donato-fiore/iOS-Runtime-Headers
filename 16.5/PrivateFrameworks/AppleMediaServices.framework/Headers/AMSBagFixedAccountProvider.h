// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBAGFIXEDACCOUNTPROVIDER_H
#define AMSBAGFIXEDACCOUNTPROVIDER_H

@class ACAccount, NSString;
@protocol AMSBagAccountProvider;

#import <Foundation/Foundation.h>


@interface AMSBagFixedAccountProvider : NSObject <AMSBagAccountProvider>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) BOOL bagLoadShouldUpdateAccountProperties;
@property (readonly, nonatomic) NSString *identity;


-(BOOL)associatedAccountIsEqualToAccount:(id)arg0 forMediaType:(id)arg1 ;
-(id)bagAccountForAccountMediaType:(id)arg0 ;
-(id)bagStorefrontForAccountMediaType:(id)arg0 ;
-(id)initWithAccount:(id)arg0 ;


@end


#endif