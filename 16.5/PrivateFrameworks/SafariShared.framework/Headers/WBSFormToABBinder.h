// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSFORMTOABBINDER_H
#define WBSFORMTOABBINDER_H


#import <Foundation/Foundation.h>


@interface WBSFormToABBinder : NSObject



+(NSUInteger)indexOfBestMatchForString:(id)arg0 inArray:(id)arg1 startingPosition:(*NSUInteger)arg2 ;
+(id)allSynonymsForMatch:(id)arg0 formAppearsToBeChinese:(BOOL)arg1 ;
+(id)specifierForAutocompleteToken:(id)arg0 ;
+(id)specifierForLabel:(id)arg0 ;
+(struct __WBSFieldLabelPatternMatcherArray *)addressBookFieldLabelPatternMatchers;
+(struct __WBSFieldLabelPatternMatcherArray *)emailFieldLabelPatternMatchers;


@end


#endif