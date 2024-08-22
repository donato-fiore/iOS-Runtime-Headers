// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXEMAILADDITION_H
#define SXEMAILADDITION_H

@class NSString;


#import "SXAddition.h"

@interface SXEmailAddition : SXAddition

@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *to;


-(id)action;


@end


#endif