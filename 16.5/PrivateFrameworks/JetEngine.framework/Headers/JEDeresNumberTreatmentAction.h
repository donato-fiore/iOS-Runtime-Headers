// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JEDERESNUMBERTREATMENTACTION_H
#define JEDERESNUMBERTREATMENTACTION_H

@class NSArray;


#import "JETreatmentAction.h"

@interface JEDeresNumberTreatmentAction : JETreatmentAction {
    CGFloat _precision;
    NSArray *_buckets;
}




-(id)initWithField:(id)arg0 configuration:(id)arg1 ;
-(id)performAction:(id)arg0 context:(id)arg1 ;


@end


#endif