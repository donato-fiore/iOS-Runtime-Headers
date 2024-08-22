// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKDOMXPATHEXPRESSION_H
#define IKDOMXPATHEXPRESSION_H

@protocol IKJSDOMXPathExpression;


#import "IKJSObject.h"

@interface IKDOMXPathExpression : IKJSObject <IKJSDOMXPathExpression>



@property (copy, nonatomic) id *evaluatingBlock; // ivar: _evaluatingBlock


-(id)evaluate:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 evaluatingBlock:(id)arg1 ;


@end


#endif