// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMLISTUNSUBSCRIBECOMMAND_H
#define EMLISTUNSUBSCRIBECOMMAND_H

@class NSString, NSURL;
@protocol NSSecureCoding, EFPubliclyDescribable, EDReceivingAccount;

#import <Foundation/Foundation.h>

#import "EMListUnsubscribeCommandMessageHeaders.h"

@interface EMListUnsubscribeCommand : NSObject <NSSecureCoding, EFPubliclyDescribable>

 {
    id<EDReceivingAccount> *_account;
    NSString *_accountIdentifier;
}


@property (readonly, nonatomic) NSObject<EDReceivingAccount> *account;
@property (readonly, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) NSString *body; // ivar: _body
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger headerFlags; // ivar: _headerFlags
@property (nonatomic) BOOL isMailtoOperation; // ivar: _isMailtoOperation
@property (readonly, nonatomic) NSURL *oneClickURL; // ivar: _oneClickURL
@property (readonly, nonatomic) EMListUnsubscribeCommandMessageHeaders *originalMessageHeaders; // ivar: _originalMessageHeaders
@property (readonly, nonatomic) NSString *postContent; // ivar: _postContent
@property (readonly, nonatomic) NSString *subject; // ivar: _subject
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)mailtoUnsubscribeCommandWithAddress:(id)arg0 subject:(id)arg1 body:(id)arg2 account:(id)arg3 headers:(id)arg4 headerFlags:(NSInteger)arg5 ;
+(id)oneClickUnsubscribeCommandWithURL:(id)arg0 postContent:(id)arg1 account:(id)arg2 headers:(id)arg3 headerFlags:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_accountWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithAddress:(id)arg0 subject:(id)arg1 body:(id)arg2 URL:(id)arg3 postContent:(id)arg4 account:(id)arg5 headers:(id)arg6 headerFlags:(NSInteger)arg7 isMailto:(BOOL)arg8 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_commonInitWithAddress:(id)arg0 subject:(id)arg1 body:(id)arg2 URL:(id)arg3 postContent:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif