// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGPATTERNMETRICS_H
#define SGPATTERNMETRICS_H


#import <Foundation/Foundation.h>

#import "SGMSelfIdPatternMatched.h"

@interface SGPatternMetrics : NSObject

@property (retain, nonatomic) SGMSelfIdPatternMatched *selfIdPatternMatched; // ivar: _selfIdPatternMatched


+(id)instance;
+(void)recordSelfIdMatchWithPatternType:(struct SGMSIPatternType_ )arg0 patternHash:(id)arg1 nameTokenCount:(NSUInteger)arg2 nameClassification:(struct SGMSINameClassification_ )arg3 messageIndex:(NSUInteger)arg4 ;
-(id)init;


@end


#endif