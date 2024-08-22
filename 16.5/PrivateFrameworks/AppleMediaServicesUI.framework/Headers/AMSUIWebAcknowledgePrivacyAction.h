// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBACKNOWLEDGEPRIVACYACTION_H
#define AMSUIWEBACKNOWLEDGEPRIVACYACTION_H

@class ACAccount, NSString;


#import "AMSUIWebAction.h"

@interface AMSUIWebAcknowledgePrivacyAction : AMSUIWebAction

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSString *privacyIdentifier; // ivar: _privacyIdentifier


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif