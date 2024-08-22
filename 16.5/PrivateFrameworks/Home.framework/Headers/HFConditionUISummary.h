// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCONDITIONUISUMMARY_H
#define HFCONDITIONUISUMMARY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HFCondition.h"

@interface HFConditionUISummary : NSObject

@property (readonly, nonatomic) HFCondition *condition; // ivar: _condition
@property (readonly, nonatomic) NSString *conditionDescription; // ivar: _conditionDescription
@property (readonly, nonatomic) NSString *conditionTitle; // ivar: _conditionTitle


-(id)initWithCondition:(id)arg0 title:(id)arg1 description:(id)arg2 ;


@end


#endif