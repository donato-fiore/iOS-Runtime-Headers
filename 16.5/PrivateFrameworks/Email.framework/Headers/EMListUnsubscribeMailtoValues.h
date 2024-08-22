// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMLISTUNSUBSCRIBEMAILTOVALUES_H
#define EMLISTUNSUBSCRIBEMAILTOVALUES_H

@class NSString;
@protocol NSSecureCoding, EDReceivingAccount;

#import <Foundation/Foundation.h>


@interface EMListUnsubscribeMailtoValues : NSObject <NSSecureCoding>

 {
    id<EDReceivingAccount> *_account;
    NSString *_accountIdentifier;
}


@property (readonly, nonatomic) NSObject<EDReceivingAccount> *account;
@property (readonly, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) NSString *body; // ivar: _body
@property (readonly, nonatomic) NSString *subject; // ivar: _subject


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithAddresss:(id)arg0 subject:(id)arg1 body:(id)arg2 account:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif