// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SUICSTREAMINGWORD_H
#define _SUICSTREAMINGWORD_H

@class UIImage, NSArray, CALayer;

#import <Foundation/Foundation.h>

#import "_SUICStreamingWord.h"

@interface _SUICStreamingWord : NSObject

@property (retain, nonatomic) UIImage *beginImage; // ivar: _beginImage
@property (retain, nonatomic) NSArray *emojiRangesInText; // ivar: _emojiRangesInText
@property (retain, nonatomic) UIImage *endImage; // ivar: _endImage
@property (nonatomic) CGFloat glyphLocationInWordX; // ivar: _glyphLocationInWordX
@property (nonatomic) NSInteger insertType; // ivar: _insertType
@property (retain, nonatomic) _SUICStreamingWord *previous; // ivar: _previous
@property (nonatomic) _NSRange textRange; // ivar: _textRange
@property (retain, nonatomic) CALayer *wordLayer; // ivar: _wordLayer


-(id)init;


@end


#endif