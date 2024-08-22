// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMSELFIDPATTERNMATCHED_H
#define SGMSELFIDPATTERNMATCHED_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMSelfIdPatternMatched : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 patternType:(struct SGMSIPatternType_ )arg1 patternHash:(id)arg2 nameTokens:(NSUInteger)arg3 nameClass:(struct SGMSINameClassification_ )arg4 messageIndex:(NSUInteger)arg5 ;


@end


#endif