// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDRAWINGINLINEVIEW_H
#define ICDRAWINGINLINEVIEW_H

@class UIView, ICAttachment, UIColor, NSString, CALayer, ICLoadingPieLayer, ICSelectorDelayer;
@protocol ICImageAttachmentPresentationDelegate;



@interface ICDrawingInlineView : UIView <ICImageAttachmentPresentationDelegate>



@property (retain, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (nonatomic) CGSize attachmentContentSize; // ivar: _attachmentContentSize
@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (readonly, nonatomic) CGRect boundsForDisplay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *drawingBackgroundColor;
@property (nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (nonatomic) BOOL forManualRendering; // ivar: _forManualRendering
@property (nonatomic) BOOL fullscreen; // ivar: _fullscreen
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideLoadingProgress; // ivar: _hideLoadingProgress
@property (readonly, nonatomic) CGRect imageFrame;
@property (retain, nonatomic) CALayer *imageLayer; // ivar: _imageLayer
@property (copy, nonatomic) id *imageLoadingCancelBlock; // ivar: _imageLoadingCancelBlock
@property (nonatomic) BOOL isInAttachmentBrowser; // ivar: _isInAttachmentBrowser
@property (weak, nonatomic) ICLoadingPieLayer *loadingProgressLayer; // ivar: _loadingProgressLayer
@property (nonatomic) BOOL needsToUpdateImage; // ivar: _needsToUpdateImage
@property (retain, nonatomic) ICSelectorDelayer *previewImageUpdateDelayer; // ivar: _previewImageUpdateDelayer
@property (readonly, nonatomic) BOOL shouldUseLightDrawingBackground;
@property (nonatomic) BOOL showGotoNote; // ivar: _showGotoNote
@property (readonly) Class superclass;
@property (nonatomic) BOOL thumbnailDisplay; // ivar: _thumbnailDisplay


-(BOOL)cancelDidScrollIntoVisibleRange;
-(BOOL)isAttachmentEditable;
-(BOOL)isReadyToPresent;
-(BOOL)isVisibleWithinScrollView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 forManualRendering:(BOOL)arg1 ;
-(id)lowestSuperScrollView;
-(id)previewImage;
-(id)viewToPresentAttachmentFrom;
-(void)animateImageArrivalWithAnimationDuration:(CGFloat)arg0 ;
-(void)attachmentPreviewDidStart:(id)arg0 ;
-(void)attachmentPreviewImagesDidUpdate:(id)arg0 ;
-(void)commonInit;
-(void)dealloc;
-(void)delayedPreviewImageChanged;
-(void)didMoveToWindow;
-(void)didScrollIntoVisibleRange;
-(void)didScrollOutOfVisibleRange;
-(void)observePreviewGenerationProgress:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBorderWidth;
-(void)updateImageWithAnimation:(BOOL)arg0 ;
-(void)updateLayerImage:(id)arg0 animation:(BOOL)arg1 ;


@end


#endif