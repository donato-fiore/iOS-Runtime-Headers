// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBVERIFYCREDENTIALSACTION_H
#define AMSUIWEBVERIFYCREDENTIALSACTION_H

@class ACAccount, NSString;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"
#import "AMSUIWebClientContext.h"

@interface AMSUIWebVerifyCredentialsAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSString *authenticationType; // ivar: _authenticationType
@property (retain, nonatomic) NSString *buttonText; // ivar: _buttonText
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL ephemeral; // ivar: _ephemeral
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (nonatomic) NSInteger serviceType; // ivar: _serviceType
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL usernameEditable; // ivar: _usernameEditable


+(NSInteger)_serviceTypeFromType:(NSInteger)arg0 ;
+(id)_authenticationTypeFromStringedType:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif