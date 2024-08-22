// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMLISTUNSUBSCRIBECOMMAND_H
#define EMLISTUNSUBSCRIBECOMMAND_H

@class NSString;
@protocol NSSecureCoding, EDReceivingAccount;

#import <Foundation/Foundation.h>

#import "EMListUnsubscribeCommandMessageHeaders.h"

@interface EMListUnsubscribeCommand : NSObject <NSSecureCoding>

 {
    id<EDReceivingAccount> *_account;
    NSString *_accountIdentifier;
}


@property (readonly, nonatomic) NSObject<EDReceivingAccount> *account;
@property (readonly, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) NSString *body; // ivar: _body
@property (readonly, nonatomic) EMListUnsubscribeCommandMessageHeaders *originalMessageHeaders; // ivar: _originalMessageHeaders
@property (readonly, nonatomic) NSString *subject; // ivar: _subject


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_accountWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithAddress:(id)arg0 subject:(id)arg1 body:(id)arg2 account:(id)arg3 headers:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_commonInitWithAddress:(id)arg0 subject:(id)arg1 body:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif