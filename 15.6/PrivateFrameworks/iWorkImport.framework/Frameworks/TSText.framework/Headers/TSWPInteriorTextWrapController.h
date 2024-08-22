// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPINTERIORTEXTWRAPCONTROLLER_H
#define TSWPINTERIORTEXTWRAPCONTROLLER_H

@protocol TSWPTextWrap;

#import <Foundation/Foundation.h>


@interface TSWPInteriorTextWrapController : NSObject <TSWPTextWrap>





+(id)sharedInteriorTextWrapController;
-(BOOL)checkForUnobstructedSpan:(struct CGRect )arg0 wrappableAttachments:(id)arg1 userInfo:(id)arg2 ;
-(CGFloat)nextUnobstructedSpanStartingAt:(struct CGRect )arg0 wrappableAttachments:(id)arg1 userInfo:(id)arg2 ;
-(id)beginWrappingToColumn:(id)arg0 columnTransformFromWP:(struct CGAffineTransform )arg1 target:(id)arg2 hasWrappables:(*BOOL)arg3 ;
-(void)splitLine:(struct CGRect )arg0 lineSegmentRects:(id)arg1 wrappableAttachments:(id)arg2 ignoreFloatingGraphics:(BOOL)arg3 canvasCausedWrap:(*BOOL)arg4 skipHint:(*CGFloat)arg5 userInfo:(id)arg6 ;


@end


#endif