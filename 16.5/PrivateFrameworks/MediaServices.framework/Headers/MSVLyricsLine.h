// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVLYRICSLINE_H
#define MSVLYRICSLINE_H

@class NSAttributedString, NSString, NSArray;


#import "MSVLyricsTextElement.h"
#import "MSVLyricsWord.h"
#import "MSVLyricsLine.h"
#import "MSVLyricsSection.h"

@interface MSVLyricsLine : MSVLyricsTextElement

@property (retain, nonatomic) MSVLyricsWord *backgroundVocals; // ivar: _backgroundVocals
@property (nonatomic) BOOL hasBackgroundVocal; // ivar: _hasBackgroundVocal
@property (nonatomic, getter=isInstrumentalBreak) BOOL instrumentalBreak; // ivar: _instrumentalBreak
@property (nonatomic) NSInteger lineIndex; // ivar: _lineIndex
@property (retain, nonatomic) MSVLyricsLine *nextLine; // ivar: _nextLine
@property (nonatomic) NSInteger originalLineIndex; // ivar: _originalLineIndex
@property (weak, nonatomic) MSVLyricsSection *parentSection; // ivar: _parentSection
@property (copy, nonatomic) NSAttributedString *primaryVocalText; // ivar: _primaryVocalText
@property (copy, nonatomic) NSString *translationKey; // ivar: _translationKey
@property (retain, nonatomic) NSArray *words; // ivar: _words


-(BOOL)containsTimeOffset:(CGFloat)arg0 withErrorMargin:(CGFloat)arg1 ;
-(id)agent;
-(id)description;
-(id)init;


@end


#endif