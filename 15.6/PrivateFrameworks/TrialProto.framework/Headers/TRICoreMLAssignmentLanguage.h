// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRICOREMLASSIGNMENTLANGUAGE_H
#define TRICOREMLASSIGNMENTLANGUAGE_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRICoreMLAssignmentLanguage : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *ruleArray;
@property (readonly, nonatomic) NSUInteger ruleArray_Count;


+(id)descriptor;


@end


#endif