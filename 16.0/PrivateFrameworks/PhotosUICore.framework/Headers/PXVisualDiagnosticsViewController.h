// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXVISUALDIAGNOSTICSVIEWCONTROLLER_H
#define PXVISUALDIAGNOSTICSVIEWCONTROLLER_H

@class UIViewController, PDFDocument, PDFView;
@protocol PXTapToRadarDiagnosticProvider;



@interface PXVisualDiagnosticsViewController : UIViewController <PXTapToRadarDiagnosticProvider>



@property (copy, nonatomic) PDFDocument *document; // ivar: _document
@property (readonly, nonatomic) PDFView *documentView; // ivar: _documentView


-(void)_handleActionBarButtonItem:(id)arg0 ;
-(void)_handleDoneBarButtonItem:(id)arg0 ;
-(void)_handleTapToRadarButton:(id)arg0 ;
-(void)_invalidateDocumentView;
-(void)_updateDocumentView;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif