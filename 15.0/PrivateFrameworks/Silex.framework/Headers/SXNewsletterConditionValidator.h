// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXNEWSLETTERCONDITIONVALIDATOR_H
#define SXNEWSLETTERCONDITIONVALIDATOR_H

@class NSString;
@protocol SXConditionValidating;

#import <Foundation/Foundation.h>


@interface SXNewsletterConditionValidator : NSObject <SXConditionValidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)validateCondition:(id)arg0 context:(id)arg1 ;


@end


#endif