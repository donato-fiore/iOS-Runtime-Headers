// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTEXTTANGIERTEXTWRAPPER_H
#define SXTEXTTANGIERTEXTWRAPPER_H

@class NSArray, NSMutableArray;
@protocol TSWPTextWrap;

#import <Foundation/Foundation.h>


@interface SXTextTangierTextWrapper : NSObject <TSWPTextWrap>



@property (nonatomic) CGAffineTransform canvasSpaceToWrapSpace; // ivar: _canvasSpaceToWrapSpace
@property (retain, nonatomic) NSArray *exclusionPaths; // ivar: _exclusionPaths
@property (retain, nonatomic) NSMutableArray *tangierExclusionPaths; // ivar: _tangierExclusionPaths
@property (nonatomic) CGAffineTransform wrapSpaceToCanvasSpace; // ivar: _wrapSpaceToCanvasSpace


-(BOOL)textShouldFlowAroundWrappable:(id)arg0 inTarget:(id)arg1 inColumn:(id)arg2 ;
-(CGFloat)nextUnobstructedSpanStartingAt:(struct CGRect )arg0 wrappableAttachments:(id)arg1 userInfo:(id)arg2 ;
-(NSUInteger)intersectRects:(struct CGRect *)arg0 rects1Count:(NSUInteger)arg1 rects2:(struct CGRect *)arg2 rects2Count:(NSUInteger)arg3 minSize:(CGFloat)arg4 ;
-(NSUInteger)splitLineRect:(struct CGRect )arg0 lineSegmentRects:(struct CGRect )arg1 wrappable:(id)arg2 wrapContext:(id)arg3 ;
-(NSUInteger)splitLineRect:(struct CGRect )arg0 lineSegmentRects:(struct CGRect )arg1 wrappableRect:(struct CGRect )arg2 ;
-(id)beginWrappingToColumn:(id)arg0 target:(id)arg1 hasWrapables:(*BOOL)arg2 ;
-(id)collectWrappables:(id)arg0 target:(id)arg1 ;
-(id)groupInfoContainingWrappable:(id)arg0 ;
-(unsigned int)splitLine:(struct CGRect )arg0 lineSegmentRects:(struct CGRect )arg1 wrappableAttachments:(id)arg2 ignoreFloatingGraphics:(BOOL)arg3 floatingCausedWrap:(*BOOL)arg4 skipHint:(*CGFloat)arg5 userInfo:(id)arg6 ;


@end


#endif