// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBBOOKMARKTITLEWORDTOKENIZER_H
#define WEBBOOKMARKTITLEWORDTOKENIZER_H

@class NSString, TIWordTokenizer;

#import <Foundation/Foundation.h>


@interface WebBookmarkTitleWordTokenizer : NSObject {
    NSString *_string;
    NSUInteger _stringLength;
    TIWordTokenizer *_wordTokenizer;
    _NSRange _rangeOfNextToken;
    NSUInteger _startOfUnclassifiedRangeBeforeNextToken;
}




+(void)initialize;
-(id)init;
-(struct _NSRange )advanceToNextToken;
-(void)setString:(id)arg0 ;


@end


#endif