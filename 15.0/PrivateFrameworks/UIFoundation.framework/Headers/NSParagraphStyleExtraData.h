// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPARAGRAPHSTYLEEXTRADATA_H
#define NSPARAGRAPHSTYLEEXTRADATA_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface NSParagraphStyleExtraData : NSObject {
    CGFloat _lineHeightMultiple;
    CGFloat _paragraphSpacingBefore;
    CGFloat _hyphenationFactor;
    CGFloat _tighteningFactor;
    NSInteger _headerLevel;
    NSArray *_textBlocks;
    NSArray *_textLists;
    NSUInteger _lineBoundsOptions;
    NSUInteger _lineBreakStrategy;
    BOOL _usesDefaultHyphenation;
    NSInteger _compositionLanguage;
    NSArray *_presentationIntents;
    NSInteger _listIntentOrdinal;
    NSString *_codeBlockIntentLanguageHint;
}




-(void)dealloc;


@end


#endif