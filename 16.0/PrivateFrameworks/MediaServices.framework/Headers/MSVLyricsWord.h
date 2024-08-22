// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVLYRICSWORD_H
#define MSVLYRICSWORD_H



#import "MSVLyricsTextElement.h"
#import "MSVLyricsWord.h"
#import "MSVLyricsLine.h"

@interface MSVLyricsWord : MSVLyricsTextElement

@property (retain, nonatomic) MSVLyricsWord *nextWord; // ivar: _nextWord
@property (weak, nonatomic) MSVLyricsLine *parentLine; // ivar: _parentLine


-(id)init;


@end


#endif