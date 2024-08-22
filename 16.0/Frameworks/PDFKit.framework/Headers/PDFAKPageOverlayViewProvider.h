// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFAKPAGEOVERLAYVIEWPROVIDER_H
#define PDFAKPAGEOVERLAYVIEWPROVIDER_H

@class AKController, NSString;
@protocol PDFPageOverlayViewProviderPrivate;

#import <Foundation/Foundation.h>

#import "PDFDocument.h"
#import "PDFView.h"

@interface PDFAKPageOverlayViewProvider : NSObject <PDFPageOverlayViewProviderPrivate>

 {
    PDFDocument *_pdfDocument;
    AKController *_akController;
    PDFView *_pdfView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldVerticallyFlipOverlayViews;
@property (readonly) Class superclass;


-(id)initWithPDFDocument:(id)arg0 pdfView:(id)arg1 andAKController:(id)arg2 ;
-(id)pdfView:(id)arg0 overlayViewForPage:(id)arg1 ;
-(void)overlayViewInstalledForPage:(id)arg0 ;
-(void)overlayViewWillBeUninstalledForPage:(id)arg0 ;
-(void)pdfView:(id)arg0 willEndDisplayingOverlayView:(id)arg1 forPage:(id)arg2 ;
-(void)setupGestureRecognizersForView:(id)arg0 ;
-(void)teardownGestureRecognizersForView:(id)arg0 ;


@end


#endif