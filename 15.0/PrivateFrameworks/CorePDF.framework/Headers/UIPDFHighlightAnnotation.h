// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPDFHIGHLIGHTANNOTATION_H
#define UIPDFHIGHLIGHTANNOTATION_H



#import "UIPDFMarkupAnnotation.h"

@interface UIPDFHighlightAnnotation : UIPDFMarkupAnnotation {
    *CGColor _highLightColor;
}




-(BOOL)recognizeGestures;
-(Class)viewClass;
-(int)annotationType;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawLayerRotated:(id)arg0 inContext:(struct CGContext *)arg1 selection:(id)arg2 rectangles:(NSUInteger)arg3 ;
-(void)drawLayerUpright:(id)arg0 inContext:(struct CGContext *)arg1 selection:(id)arg2 rectangles:(NSUInteger)arg3 ;


@end


#endif