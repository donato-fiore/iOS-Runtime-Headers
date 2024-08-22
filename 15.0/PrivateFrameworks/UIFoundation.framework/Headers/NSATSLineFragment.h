// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSATSLINEFRAGMENT_H
#define NSATSLINEFRAGMENT_H


#import <Foundation/Foundation.h>

#import "NSATSTypesetter.h"

@interface NSATSLineFragment : NSObject {
    *void _line;
    NSATSTypesetter *_typesetter;
    _NSRange _glyphRange;
    _NSRange _characterRange;
    CGFloat _minPosition;
    CGFloat _maxPosition;
    NSInteger _elasticCharIndex;
    CGFloat _elasticRangeWidth;
    unsigned int _hyphenGlyph;
    CGFloat _hyphenGlyphWidth;
    ? _flags;
}




-(void)dealloc;
-(void)finalize;


@end


#endif