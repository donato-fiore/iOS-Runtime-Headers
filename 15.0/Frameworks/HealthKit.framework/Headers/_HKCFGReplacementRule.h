// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKCFGREPLACEMENTRULE_H
#define _HKCFGREPLACEMENTRULE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _HKCFGReplacementRule : NSObject {
    NSString *_description;
}


@property (readonly, nonatomic) NSUInteger lengthIncrease; // ivar: _lengthIncrease
@property (readonly, copy, nonatomic) id *nodeEvaluator; // ivar: _nodeEvaluator
@property (copy, nonatomic) NSArray *rightHandSide; // ivar: _rightHandSide


+(id)ruleWithLHS:(id)arg0 RHS:(id)arg1 nodeEvaluator:(id)arg2 ;
-(id)description;


@end


#endif