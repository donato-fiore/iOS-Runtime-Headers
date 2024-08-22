// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPTEXTWRAPCONTROLLER_H
#define TPTEXTWRAPCONTROLLER_H

@protocol TSWPTextWrap;

#import <Foundation/Foundation.h>

#import "TPDocumentRoot.h"

@interface TPTextWrapController : NSObject <TSWPTextWrap>

 {
    CGAffineTransform _canvasSpaceToWrapSpace;
    CGAffineTransform _wrapSpaceToCanvasSpace;
}


@property (readonly, weak, nonatomic) TPDocumentRoot *documentRoot; // ivar: _documentRoot


-(BOOL)checkForUnobstructedSpan:(struct CGRect )arg0 wrappableAttachments:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)p_shouldTextFlowAroundWrappable:(id)arg0 inTarget:(id)arg1 inColumn:(id)arg2 ;
-(CGFloat)nextUnobstructedSpanStartingAt:(struct CGRect )arg0 wrappableAttachments:(id)arg1 userInfo:(id)arg2 ;
-(id)beginWrappingToColumn:(id)arg0 columnTransformFromWP:(struct CGAffineTransform )arg1 target:(id)arg2 hasWrappables:(*BOOL)arg3 ;
-(id)initWithDocumentRoot:(id)arg0 ;
-(id)p_groupInfoContainingWrappable:(id)arg0 ;
-(id)p_wrapDrawables:(id)arg0 userInfo:(id)arg1 ;
-(void)p_splitLine:(struct CGRect )arg0 lineSegmentRects:(id)arg1 wrappable:(id)arg2 cookie:(id)arg3 skipHint:(*CGFloat)arg4 ;
-(void)setUpCanvasToWrapSpaceAffineTransformation:(struct CGAffineTransform )arg0 ;
-(void)splitLine:(struct CGRect )arg0 lineSegmentRects:(id)arg1 wrappableAttachments:(id)arg2 ignoreFloatingGraphics:(BOOL)arg3 canvasCausedWrap:(*BOOL)arg4 skipHint:(*CGFloat)arg5 userInfo:(id)arg6 ;


@end


#endif