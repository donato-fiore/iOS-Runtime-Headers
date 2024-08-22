// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSLINEMETRICS_H
#define _NSLINEMETRICS_H

@class NSAttributedString;

#import <Foundation/Foundation.h>


@interface _NSLineMetrics : NSObject {
    NSAttributedString *_attributedString;
    _NSRange _lineRange;
    *__CTLine _line;
    *CGFloat _positions;
    *__CFArray _runsBuf;
    *CGSize _advancesBuf;
    *NSInteger _stringIndicesBuf;
    NSUInteger _glyphCapacity;
}




-(CGFloat)widthOfSubstringToIndex:(NSUInteger)arg0 ;
-(CGFloat)widthOfSubstringWithRange:(struct _NSRange )arg0 ;
-(NSUInteger)suggestedLineBreakAfterIndex:(NSUInteger)arg0 withWidth:(CGFloat)arg1 ;
-(id)initWithAttributedString:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)initWithAttributedString:(id)arg0 range:(struct _NSRange )arg1 line:(struct __CTLine *)arg2 ;
-(void)_calculatePositions;
-(void)_ensureGlyphCapacity:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)setAttributedString:(id)arg0 range:(struct _NSRange )arg1 line:(struct __CTLine *)arg2 ;


@end


#endif