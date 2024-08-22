// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFTIMECONDITIONNATURALLANGUAGEOPTIONS_H
#define HFTIMECONDITIONNATURALLANGUAGEOPTIONS_H



#import "HFConditionNaturalLanguageOptions.h"

@interface HFTimeConditionNaturalLanguageOptions : HFConditionNaturalLanguageOptions

@property (nonatomic) NSUInteger timeContext; // ivar: _timeContext
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)initWithFormattingContext:(NSInteger)arg0 formattingStyle:(NSInteger)arg1 ;
-(id)initWithFormattingContext:(NSInteger)arg0 formattingStyle:(NSInteger)arg1 type:(NSUInteger)arg2 ;


@end


#endif