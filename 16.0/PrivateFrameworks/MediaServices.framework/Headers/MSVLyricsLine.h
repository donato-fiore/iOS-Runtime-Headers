// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVLYRICSLINE_H
#define MSVLYRICSLINE_H

@class NSString, NSArray;


#import "MSVLyricsTextElement.h"
#import "MSVLyricsLine.h"
#import "MSVLyricsSection.h"

@interface MSVLyricsLine : MSVLyricsTextElement

@property (nonatomic, getter=isInstrumentalBreak) BOOL instrumentalBreak; // ivar: _instrumentalBreak
@property (nonatomic) NSInteger lineIndex; // ivar: _lineIndex
@property (retain, nonatomic) MSVLyricsLine *nextLine; // ivar: _nextLine
@property (nonatomic) NSInteger originalLineIndex; // ivar: _originalLineIndex
@property (weak, nonatomic) MSVLyricsSection *parentSection; // ivar: _parentSection
@property (copy, nonatomic) NSString *translationKey; // ivar: _translationKey
@property (retain, nonatomic) NSArray *words; // ivar: _words


-(BOOL)containsTimeOffset:(CGFloat)arg0 withErrorMargin:(CGFloat)arg1 ;
-(id)description;
-(id)init;


@end


#endif