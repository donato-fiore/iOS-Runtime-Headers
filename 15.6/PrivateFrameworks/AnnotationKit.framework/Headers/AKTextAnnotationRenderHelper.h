// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKTEXTANNOTATIONRENDERHELPER_H
#define AKTEXTANNOTATIONRENDERHELPER_H


#import <Foundation/Foundation.h>


@interface AKTextAnnotationRenderHelper : NSObject



+(BOOL)_hitTestPoint:(struct CGPoint )arg0 againstActualTextForAnnotation:(id)arg1 onPageController:(id)arg2 contextForVisualDebugging:(struct CGContext *)arg3 ;
+(BOOL)hitTestPoint:(struct CGPoint )arg0 againstActualTextForAnnotation:(id)arg1 onPageController:(id)arg2 ;
+(id)_sharedLayoutManager;
+(struct CGSize )unconstrainedSizeForText:(id)arg0 ;
+(void)getAnnotationRectangle:(struct CGRect *)arg0 textBounds:(struct CGRect *)arg1 containerSize:(struct CGSize *)arg2 exclusionPaths:(*id)arg3 isTextClipped:(*BOOL)arg4 forAnnotation:(id)arg5 onPageController:(id)arg6 orInContext:(struct CGContext *)arg7 shouldAlignToPixels:(BOOL)arg8 optionalText:(id)arg9 optionalCenter:(struct CGPoint )arg10 optionalProposedRectangle:(struct CGRect )arg11 ;
+(void)renderAnnotationText:(id)arg0 intoContext:(struct CGContext *)arg1 isForScreen:(BOOL)arg2 pageControllerOrNil:(id)arg3 ;


@end


#endif