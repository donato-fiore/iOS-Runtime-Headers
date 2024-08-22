// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXDEFAULTHOMESCREENITEMONBOARDINGSTACKS_H
#define ATXDEFAULTHOMESCREENITEMONBOARDINGSTACKS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ATXDefaultWidgetStack.h"

@interface ATXDefaultHomeScreenItemOnboardingStacks : NSObject

@property (readonly, nonatomic) NSArray *sortedThirdPartyWidgets; // ivar: _sortedThirdPartyWidgets
@property (readonly, nonatomic) ATXDefaultWidgetStack *stack1; // ivar: _stack1
@property (readonly, nonatomic) ATXDefaultWidgetStack *stack2; // ivar: _stack2


-(id)initWithOnboardingStack1:(id)arg0 stack2:(id)arg1 sortedThirdPartyWidgets:(id)arg2 ;


@end


#endif