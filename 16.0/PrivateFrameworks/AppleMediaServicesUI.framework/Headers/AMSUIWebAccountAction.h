// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBACCOUNTACTION_H
#define AMSUIWEBACCOUNTACTION_H

@class ACAccount, NSDictionary, NSString;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"

@interface AMSUIWebAccountAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (copy, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSDictionary *accountObject; // ivar: _accountObject
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif