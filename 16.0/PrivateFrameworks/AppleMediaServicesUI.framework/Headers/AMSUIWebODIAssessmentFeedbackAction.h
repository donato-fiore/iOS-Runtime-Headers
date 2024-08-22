// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBODIASSESSMENTFEEDBACKACTION_H
#define AMSUIWEBODIASSESSMENTFEEDBACKACTION_H

@class NSString;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"

@interface AMSUIWebODIAssessmentFeedbackAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (retain, nonatomic) NSString *cacheIdentifier; // ivar: _cacheIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger outcome; // ivar: _outcome
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif