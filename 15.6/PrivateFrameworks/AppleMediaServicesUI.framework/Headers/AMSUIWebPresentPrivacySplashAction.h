// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBPRESENTPRIVACYSPLASHACTION_H
#define AMSUIWEBPRESENTPRIVACYSPLASHACTION_H

@class NSString;


#import "AMSUIWebAction.h"

@interface AMSUIWebPresentPrivacySplashAction : AMSUIWebAction

@property (retain, nonatomic) NSString *privacyIdentifier; // ivar: _privacyIdentifier


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif