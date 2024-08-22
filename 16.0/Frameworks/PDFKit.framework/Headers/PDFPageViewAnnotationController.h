// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFPAGEVIEWANNOTATIONCONTROLLER_H
#define PDFPAGEVIEWANNOTATIONCONTROLLER_H


#import <Foundation/Foundation.h>

#import "PDFPageViewAnnotationControllerPrivate.h"

@interface PDFPageViewAnnotationController : NSObject {
    PDFPageViewAnnotationControllerPrivate *_private;
}




-(BOOL)_indexSet:(id)arg0 touchesIndexSet:(id)arg1 ;
-(id)_getIndexSetIntersectionBetween:(id)arg0 and:(id)arg1 ;
-(id)_markupAnnotationsForExactIndexSet:(id)arg0 ;
-(id)activeAnnotation;
-(id)initWithPDFPageView:(id)arg0 ;
-(id)markupAnnotationsForIndexSet:(id)arg0 ;
-(void)_addPopupForAnnotation:(id)arg0 ;
-(void)_didRotatePageNotification:(id)arg0 ;
-(void)_propagateNotesForIndexSet:(id)arg0 ;
-(void)_rotateActiveAnnotation;
-(void)addControlForAnnotation:(id)arg0 ;
-(void)addMarkupWithStyle:(NSUInteger)arg0 forIndexSet:(id)arg1 ;
-(void)dealloc;
-(void)removeControlForAnnotation:(id)arg0 ;


@end


#endif