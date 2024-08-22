// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBODIASSESSMENTACTION_H
#define AMSUIWEBODIASSESSMENTACTION_H

@class NSDictionary, NSString;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"

@interface AMSUIWebODIAssessmentAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (retain, nonatomic) NSDictionary *additionalAttributes; // ivar: _additionalAttributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *rawAccountType; // ivar: _rawAccountType
@property (retain, nonatomic) NSString *rawBundleIdentifer; // ivar: _rawBundleIdentifer
@property (retain, nonatomic) NSString *rawSessionIdentifer; // ivar: _rawSessionIdentifer
@property (readonly) Class superclass;


-(NSUInteger)accountTypeForString:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;
-(id)sessionIdentifierForString:(id)arg0 ;


@end


#endif