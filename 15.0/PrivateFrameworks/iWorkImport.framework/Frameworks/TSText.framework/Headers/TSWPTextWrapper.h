// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPTEXTWRAPPER_H
#define TSWPTEXTWRAPPER_H


#import <Foundation/Foundation.h>


@interface TSWPTextWrapper : NSObject



+(CGFloat)p_skipHintForRect:(struct CGRect )arg0 wrapSegments:(id)arg1 type:(int)arg2 ;
+(CGFloat)unobstructedSpanForWrapSegments:(id)arg0 startingSpan:(struct CGRect )arg1 columnBounds:(struct CGRect )arg2 ;
+(id)horizontalIntersectionsOfRectList:(id)arg0 withRectList:(id)arg1 minWidth:(CGFloat)arg2 ;
+(id)modifyLineSegments:(id)arg0 lineRect:(struct CGRect )arg1 textAdornments:(id)arg2 skipHint:(*CGFloat)arg3 ;
+(void)splitLine:(struct CGRect )arg0 lineSegmentRects:(id)arg1 wrapSegments:(id)arg2 type:(int)arg3 skipHint:(*CGFloat)arg4 ;


@end


#endif