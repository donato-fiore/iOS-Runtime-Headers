// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKTEXTBOXANNOTATION_H
#define AKTEXTBOXANNOTATION_H

@class UIColor;


#import "AKRectangularShapeAnnotation.h"

@interface AKTextBoxAnnotation : AKRectangularShapeAnnotation {
    UIColor *_highlightColor;
}




+(BOOL)deleteAfterEditingIfEmpty;
+(id)defaultPlaceholderText;
-(id)displayName;
-(id)highlightColor;
-(id)init;
-(id)keysForValuesToObserveForRedrawing;
-(struct CGRect )hitTestBounds;
-(void)setHighlightColor:(id)arg0 ;


@end


#endif