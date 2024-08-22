// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTLAYOUTBASELINECALCULATOR_H
#define _UITEXTLAYOUTBASELINECALCULATOR_H

@class _UITextLayoutControllerBase<_UITextLayoutController>, NSDictionary, NSString;
@protocol _UITextLayoutBaselineCalculator, UICoordinateSpace;

#import <Foundation/Foundation.h>


@interface _UITextLayoutBaselineCalculator : NSObject <_UITextLayoutBaselineCalculator>

 {
    _UITextLayoutControllerBase<_UITextLayoutController> *_textLayoutController;
    NSDictionary *_typingAttributes;
    id<UICoordinateSpace> *_coordinateSpace;
    CGFloat _scale;
    BOOL _usesLineFragmentOrigin;
    CGPoint _fallbackTextContainerOrigin;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat firstBaselineOffsetFromTop;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat lastBaselineOffsetFromBottom;
@property (readonly) Class superclass;


-(CGFloat)_baselineOffsetAtPosition:(id)arg0 ;
-(CGFloat)_convertOffset:(CGFloat)arg0 ;
-(id)initWithTextLayoutController:(id)arg0 typingAttributes:(id)arg1 usesLineFragmentOrigin:(BOOL)arg2 coordinateSpace:(id)arg3 scale:(CGFloat)arg4 fallbackTextContainerOrigin:(struct CGPoint )arg5 ;


@end


#endif