// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFPRESENCECONDITIONNATURALLANGUAGEOPTIONS_H
#define HFPRESENCECONDITIONNATURALLANGUAGEOPTIONS_H

@class HMHome;


#import "HFConditionNaturalLanguageOptions.h"

@interface HFPresenceConditionNaturalLanguageOptions : HFConditionNaturalLanguageOptions

@property (retain, nonatomic) HMHome *home; // ivar: _home


-(id)initWithFormattingContext:(NSInteger)arg0 formattingStyle:(NSInteger)arg1 ;
-(id)initWithHome:(id)arg0 formattingContext:(NSInteger)arg1 formattingStyle:(NSInteger)arg2 ;


@end


#endif