// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBSENDSMSACTION_H
#define AMSUIWEBSENDSMSACTION_H

@class NSString;


#import "AMSUIWebAction.h"

@interface AMSUIWebSendSMSAction : AMSUIWebAction

@property (retain, nonatomic) NSString *body; // ivar: _body
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSString *digits; // ivar: _digits


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;
-(id)telephonyAccessPatterns;


@end


#endif