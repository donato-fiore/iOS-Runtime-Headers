// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFAKOVERLAYADAPTOR_IOS_H
#define PDFAKOVERLAYADAPTOR_IOS_H



#import "PDFAKOverlayAdaptor.h"
#import "PDFAKOverlayAdaptorPrivate_ios.h"

@interface PDFAKOverlayAdaptor_ios : PDFAKOverlayAdaptor {
    PDFAKOverlayAdaptorPrivate_ios *_privateIOS;
}




-(NSUInteger)_scrollViewMinimumNumberOfTouches;
-(NSUInteger)pageIndexForAnnotation:(id)arg0 ;
-(id)_scrollViewRecognizersForPageAtIndex:(NSUInteger)arg0 ;
-(id)initWithPDFView:(id)arg0 ;
-(void)_adjustScrollViewWithAnimationProperties:(struct ? )arg0 delta:(CGFloat)arg1 ;
-(void)_installOverlayForPageView:(id)arg0 ofPage:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)_resetAnimationProperties;
-(void)_setupGestureRecognizersForPageAtIndex:(NSUInteger)arg0 ;
-(void)_setupGestureRecognizersForView:(id)arg0 andDocument:(id)arg1 ;
-(void)_teardownGestureRecognizersForPageAtIndex:(NSUInteger)arg0 ;
-(void)_teardownGestureRecognizersForView:(id)arg0 andDocument:(id)arg1 ;
-(void)_uninstallOverlayAtIndex:(NSUInteger)arg0 ;
-(void)addDrawingGestureRecognizer:(id)arg0 forPageAtIndex:(NSUInteger)arg1 ;
-(void)adjustScrollViewForKeyboardNotification:(id)arg0 ;
-(void)annotationDidEndEditing:(id)arg0 ;
-(void)annotationWillBeginEditing:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeDrawingGestureRecognizer:(id)arg0 forPageAtIndex:(NSUInteger)arg1 ;
-(void)updateDrawingGestureRecognizer:(id)arg0 forPageAtIndex:(NSUInteger)arg1 withPriority:(BOOL)arg2 ;
-(void)updatePDFScrollViewMinimumNumberOfTouches;


@end


#endif