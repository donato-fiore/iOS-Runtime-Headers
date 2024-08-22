// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFAKOVERLAYADAPTOR_H
#define PDFAKOVERLAYADAPTOR_H


#import <Foundation/Foundation.h>

#import "PDFAKOverlayAdaptorPrivate.h"
#import "PDFView.h"

@interface PDFAKOverlayAdaptor : NSObject {
    PDFAKOverlayAdaptorPrivate *_private;
}


@property (readonly, weak, nonatomic) PDFView *pdfView;


+(id)instanceForPlatformWithPDFView:(id)arg0 ;
-(id)_annotationController;
-(id)initWithPDFView:(id)arg0 ;
-(void)_currentPageChanged:(id)arg0 ;
-(void)_installOverlayForPageView:(id)arg0 ofPage:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)_pageRotationChanged:(id)arg0 ;
-(void)_selectionChanged:(id)arg0 ;
-(void)_selectionDidEndChanging:(id)arg0 ;
-(void)_selectionWillBeginChanging:(id)arg0 ;
-(void)_setupGestureRecognizersForView:(id)arg0 andDocument:(id)arg1 ;
-(void)_setupRotationNotificationObservationForPageAtIndex:(NSUInteger)arg0 ;
-(void)_teardown;
-(void)_teardownGestureRecognizersForView:(id)arg0 andDocument:(id)arg1 ;
-(void)_teardownRotationNotificationObservationForPageAtIndex:(NSUInteger)arg0 ;
-(void)_uninstallAllOverlays;
-(void)_uninstallOverlayAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)pdfView:(id)arg0 didAddView:(id)arg1 forPage:(id)arg2 atIndex:(NSUInteger)arg3 ;
-(void)pdfView:(id)arg0 didSetDocument:(id)arg1 ;
-(void)pdfView:(id)arg0 willRemoveView:(id)arg1 forPage:(id)arg2 atIndex:(NSUInteger)arg3 ;
-(void)pdfView:(id)arg0 willSetDocument:(id)arg1 ;
-(void)teardown;


@end


#endif