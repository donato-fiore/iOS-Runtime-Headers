// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPDFATTACHMENTVIEW_H
#define ICPDFATTACHMENTVIEW_H

@class UIImage, UIActivityIndicatorView, NSOperation, ICSelectorDelayer;


#import "ICAttachmentView.h"

@interface ICPDFAttachmentView : ICAttachmentView {
    *CGPDFDocument _pdf;
    *CGPDFPage _page;
}


@property (readonly, nonatomic) BOOL availableImageIsAcceptable;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL isManaullyGeneratingImage; // ivar: _isManaullyGeneratingImage
@property (readonly, nonatomic) *CGPDFPage page;
@property (retain, nonatomic) UIActivityIndicatorView *progressView; // ivar: _progressView
@property (weak, nonatomic) NSOperation *renderOperation; // ivar: _renderOperation
@property (nonatomic, getter=isRendering) BOOL rendering; // ivar: _rendering
@property (retain) ICSelectorDelayer *startProgressSelectorDelayer; // ivar: _startProgressSelectorDelayer


+(id)renderingQueue;
-(BOOL)accessibilityIgnoresInvertColors;
-(BOOL)cancelDidScrollIntoVisibleRange;
-(BOOL)cancelRenderingIfPossible;
-(BOOL)needToStartRender;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 andTextAttachment:(id)arg1 forManualRendering:(BOOL)arg2 ;
-(id)pdfURL;
-(void)cleanupPDFDocument;
-(void)dealloc;
-(void)didChangeMedia;
-(void)didMoveToWindow;
-(void)didScrollIntoVisibleRange;
-(void)didScrollOutOfVisibleRange;
-(void)prepareForPrinting;
-(void)setAttachment:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlightColor:(id)arg0 ;
-(void)setupBorderForLayer:(id)arg0 ;
-(void)startImageRenderIfNeeded;
-(void)startProgress;
-(void)stopProgress;
-(void)updateLayerContentsWithFade:(BOOL)arg0 ;


@end


#endif