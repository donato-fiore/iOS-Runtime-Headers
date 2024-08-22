// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AXMSEMANTICTEXTCURSOR_H
#define _AXMSEMANTICTEXTCURSOR_H

@class NSAttributedString, NSDictionary;

#import <Foundation/Foundation.h>

#import "AXMSemanticText.h"

@interface _AXMSemanticTextCursor : NSObject {
    NSAttributedString *_text;
    AXMSemanticText *_semanticText;
    NSUInteger _length;
    NSUInteger _currentIndex;
}


@property (readonly, nonatomic) NSDictionary *currentAttributes;
@property (readonly, nonatomic) BOOL isCustomPattern;
@property (readonly, nonatomic) BOOL isDataDetector;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isInLexicon;
@property (readonly, nonatomic) BOOL isOtherWord;
@property (readonly, nonatomic) BOOL isProperNoun;
@property (readonly, nonatomic) BOOL isPunctuation;
@property (readonly, nonatomic) BOOL isSentenceTerminator;
@property (readonly, nonatomic) BOOL isWhitespace;
@property (readonly, nonatomic) _NSRange remainingRange;


-(BOOL)processAttribute:(id)arg0 getSubstring:(*id)arg1 advanceCursor:(BOOL)arg2 markAsSemanticError:(BOOL)arg3 error:(*id)arg4 ;
-(id)initWithText:(id)arg0 semanticText:(id)arg1 ;
-(void)advance;
-(void)markCurrentIndexAsSemanticErrorAndAdvanceCursor;


@end


#endif