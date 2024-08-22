// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVLYRICSTEXTELEMENT_H
#define MSVLYRICSTEXTELEMENT_H

@class NSAttributedString;


#import "MSVLyricsElement.h"

@interface MSVLyricsTextElement : MSVLyricsElement

@property (nonatomic) BOOL keepParentheses; // ivar: _keepParentheses
@property (copy, nonatomic) NSAttributedString *lyricsText; // ivar: _lyricsText


-(id)description;
-(id)init;


@end


#endif