// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUISUGGESTIONIMAGEUTILITIES_H
#define SEARCHUISUGGESTIONIMAGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface SearchUISuggestionImageUtilities : NSObject



+(NSUInteger)currentWebSuggestionIconPref;
+(id)appIconImageForBundleIdentifier:(id)arg0 ;
+(id)imageForSuggestionCardSection:(id)arg0 ;
+(id)suggestionSymbolImageWithSymbolName:(id)arg0 ;
+(id)symbolImageForSuggestionType:(int)arg0 ;
+(struct CGSize )maximumSize;
+(void)initialize;
+(void)resetSizes;


@end


#endif