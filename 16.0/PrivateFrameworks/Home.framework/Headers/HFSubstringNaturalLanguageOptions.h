// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSUBSTRINGNATURALLANGUAGEOPTIONS_H
#define HFSUBSTRINGNATURALLANGUAGEOPTIONS_H



#import "HFNaturalLanguageOptions.h"

@interface HFSubstringNaturalLanguageOptions : HFNaturalLanguageOptions

@property (nonatomic) NSInteger formattingContext; // ivar: _formattingContext
@property (nonatomic) NSInteger formattingStyle; // ivar: _formattingStyle


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFormattingContext:(NSInteger)arg0 formattingStyle:(NSInteger)arg1 ;


@end


#endif