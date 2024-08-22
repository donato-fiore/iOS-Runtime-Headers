// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTLAYOUTBASELINECALCULATOR_H
#define _UITEXTLAYOUTBASELINECALCULATOR_H

@class NSDictionary, NSString;
@protocol _UITextLayoutBaselineCalculator, UICoordinateSpace;

#import <Foundation/Foundation.h>

#import "_UITextLayoutController.h"

@interface _UITextLayoutBaselineCalculator : NSObject <_UITextLayoutBaselineCalculator>

 {
    _UITextLayoutController *_textLayoutController;
    NSDictionary *_typingAttributes;
    id<UICoordinateSpace> *_coordinateSpace;
    CGFloat _scale;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat firstBaselineOffsetFromTop;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat lastBaselineOffsetFromBottom;
@property (readonly) Class superclass;


-(CGFloat)_baselineOffsetAtPosition:(id)arg0 ;
-(CGFloat)_convertOffset:(CGFloat)arg0 ;
-(id)initWithTextLayoutController:(id)arg0 typingAttributes:(id)arg1 coordinateSpace:(id)arg2 scale:(CGFloat)arg3 ;


@end


#endif