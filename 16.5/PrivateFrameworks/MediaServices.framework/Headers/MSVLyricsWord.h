// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVLYRICSWORD_H
#define MSVLYRICSWORD_H

@class NSArray;


#import "MSVLyricsTextElement.h"
#import "MSVLyricsWord.h"
#import "MSVLyricsLine.h"

@interface MSVLyricsWord : MSVLyricsTextElement

@property (nonatomic) _NSRange characterRange; // ivar: _characterRange
@property (retain, nonatomic) MSVLyricsWord *nextWord; // ivar: _nextWord
@property (weak, nonatomic) MSVLyricsLine *parentLine; // ivar: _parentLine
@property (weak, nonatomic) MSVLyricsWord *parentWord; // ivar: _parentWord
@property (retain, nonatomic) NSArray *subwords; // ivar: _subwords
@property (nonatomic) NSInteger wordIndex; // ivar: _wordIndex


-(id)agent;
-(id)init;


@end


#endif