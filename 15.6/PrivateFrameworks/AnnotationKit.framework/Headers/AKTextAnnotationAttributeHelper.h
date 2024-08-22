// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKTEXTANNOTATIONATTRIBUTEHELPER_H
#define AKTEXTANNOTATIONATTRIBUTEHELPER_H


#import <Foundation/Foundation.h>


@interface AKTextAnnotationAttributeHelper : NSObject



+(id)actualOrPlaceholderTextOfAnnotation:(id)arg0 ;
+(id)font:(id)arg0 byApplyingScaleFactor:(CGFloat)arg1 ;
+(id)fontsOfAnnotations:(id)arg0 ;
+(id)fontsOfEditor:(id)arg0 ;
+(id)newTextStorage:(id)arg0 byApplyingScaleFactor:(CGFloat)arg1 ;
+(id)newTextStorageOriginalFontSavvyWithAttributedString:(id)arg0 ;
+(id)newTextStorageOriginalFontSavvyWithString:(id)arg0 attributes:(id)arg1 ;
+(id)placeholderTextOfAnnotation:(id)arg0 ;
+(id)textAttributesOfAnnotations:(id)arg0 ;
+(id)textAttributesOfEditor:(id)arg0 ;
+(id)typingAttributes:(id)arg0 byApplyingScaleFactor:(CGFloat)arg1 ;
+(void)adjustAnnotationBoundsToFitText:(id)arg0 ;
+(void)adjustBoundsOfAnnotation:(id)arg0 toFitOptionalText:(id)arg1 onPageController:(id)arg2 ;
+(void)enumerateFontAttributesOfAttributedString:(id)arg0 usingBlock:(id)arg1 ;
+(void)resolvedAlignmentAndDirection:(id)arg0 locale:(id)arg1 alignment:(*NSInteger)arg2 direction:(*NSInteger)arg3 ;
+(void)setFont:(id)arg0 ofAnnotation:(id)arg1 ;
+(void)setTextAlignment:(NSInteger)arg0 ofAnnotation:(id)arg1 ;
+(void)setTextAttributes:(id)arg0 ofAnnotation:(id)arg1 ;


@end


#endif