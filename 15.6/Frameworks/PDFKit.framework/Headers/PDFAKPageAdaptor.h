// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFAKPAGEADAPTOR_H
#define PDFAKPAGEADAPTOR_H

@class AKPageModelController;

#import <Foundation/Foundation.h>

#import "PDFAKPageAdaptorPrivate.h"
#import "PDFPage.h"

@interface PDFAKPageAdaptor : NSObject {
    PDFAKPageAdaptorPrivate *_private;
}


@property (readonly, nonatomic) AKPageModelController *akPageModelController;
@property (readonly, weak, nonatomic) PDFPage *pdfPage;


-(id)initWithPDFPage:(id)arg0 ;
-(id)initWithPDFPage:(id)arg0 pageModelController:(id)arg1 ;
-(void)_annotationsWereAdded:(id)arg0 ;
-(void)_annotationsWereRemoved:(id)arg0 ;
-(void)_startObservingPageModel;
-(void)_stopObservingPageModel;
-(void)_teardown;
-(void)dealloc;
-(void)initializeExifAndScaleOnAnnotation:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pdfPage:(id)arg0 didAddAnnotation:(id)arg1 ;
-(void)pdfPage:(id)arg0 didRemoveAnnotation:(id)arg1 ;
-(void)pdfPageWasRotated:(id)arg0 ;
-(void)teardown;


@end


#endif