// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFOVERLAYVIEWSCONTROLLER_H
#define PDFOVERLAYVIEWSCONTROLLER_H

@class NSMapTable, NSMutableIndexSet;
@protocol PDFPageOverlayViewProvider;

#import <Foundation/Foundation.h>

#import "PDFDocument.h"
#import "PDFView.h"

@interface PDFOverlayViewsController : NSObject {
    NSMapTable *_pageToOverlayMap;
    BOOL _isTornDown;
    NSMutableIndexSet *_observedPageIndices;
}


@property (weak) PDFDocument *pdfDocument; // ivar: _pdfDocument
@property (weak) PDFView *pdfView; // ivar: _pdfView
@property (weak) NSObject<PDFPageOverlayViewProvider> *viewProvider; // ivar: _viewProvider


+(id)instanceForPlatformWithPDFView:(id)arg0 ;
-(id)_cachedOverlayViewForPage:(id)arg0 ;
-(id)_callOverlayViewForPage:(id)arg0 ;
-(id)initWithPDFView:(id)arg0 ;
-(void)_callWillEndDisplayingOverlayViewForPage:(id)arg0 ;
-(void)_installOverlayForPageView:(id)arg0 ofPage:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)_pageRotationChanged:(id)arg0 ;
-(void)_setupGestureRecognizersForView:(id)arg0 andDocument:(id)arg1 ;
-(void)_setupRotationNotificationObservationForPageAtIndex:(NSUInteger)arg0 ;
-(void)_teardown;
-(void)_teardownGestureRecognizersForView:(id)arg0 andDocument:(id)arg1 ;
-(void)_teardownRotationNotificationObservationForPageAtIndex:(NSUInteger)arg0 ;
-(void)_uninstallAllOverlays;
-(void)_uninstallOverlayForPageView:(id)arg0 ofPage:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)pdfView:(id)arg0 didAddView:(id)arg1 forPage:(id)arg2 atIndex:(NSUInteger)arg3 ;
-(void)pdfView:(id)arg0 didSetDocument:(id)arg1 ;
-(void)pdfView:(id)arg0 willRemoveView:(id)arg1 forPage:(id)arg2 atIndex:(NSUInteger)arg3 ;
-(void)pdfView:(id)arg0 willSetDocument:(id)arg1 ;
-(void)teardown;


@end


#endif