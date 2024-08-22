// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GKNSPREDICATERULE_H
#define _GKNSPREDICATERULE_H

@protocol NSObject;


#import "GKNSPredicateRule.h"

@interface _GKNSPredicateRule : GKNSPredicateRule {
    id<NSObject> *_fact;
    float _grade;
    BOOL _asserting;
}




-(id)initWithPredicate:(id)arg0 fact:(id)arg1 grade:(float)arg2 asserting:(BOOL)arg3 ;
-(void)performActionWithSystem:(id)arg0 ;


@end


#endif