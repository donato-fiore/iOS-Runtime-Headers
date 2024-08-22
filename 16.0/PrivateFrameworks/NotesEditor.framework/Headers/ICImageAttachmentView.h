// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICIMAGEATTACHMENTVIEW_H
#define ICIMAGEATTACHMENTVIEW_H

@class UIImage, CALayer, UILabel;


#import "ICAttachmentView.h"

@interface ICImageAttachmentView : ICAttachmentView

@property (weak, nonatomic) UIImage *image; // ivar: _image
@property (retain) CALayer *imageLayer; // ivar: _imageLayer
@property (copy, nonatomic) id *imageLoadingCancelBlock; // ivar: _imageLoadingCancelBlock
@property (readonly, nonatomic) BOOL isThumbnailView;
@property (retain, nonatomic) UILabel *loadingLabel; // ivar: _loadingLabel
@property (nonatomic) BOOL shouldShowLoadingText; // ivar: _shouldShowLoadingText
@property (nonatomic) BOOL shouldTryToReloadImageIfLoadingFails; // ivar: _shouldTryToReloadImageIfLoadingFails
@property (nonatomic) BOOL shouldUpdateLayoutInImageDidLoad; // ivar: _shouldUpdateLayoutInImageDidLoad


-(BOOL)accessibilityIgnoresInvertColors;
-(BOOL)canFitLoadingText;
-(BOOL)cancelDidScrollIntoVisibleRange;
-(BOOL)isAttachmentEditable;
-(id)accessibilityLabel;
-(id)accessibilityUserInputLabels;
-(id)icaxHintString;
-(struct CGRect )frameForContent;
-(void)animateImageArrival;
-(void)dealloc;
-(void)didChangeAttachment;
-(void)didChangeMedia;
-(void)didMoveToWindow;
-(void)didScrollIntoVisibleRange;
-(void)didScrollOutOfVisibleRange;
-(void)didUpdatePreviewImages;
-(void)imageDidLoad:(id)arg0 shouldFade:(BOOL)arg1 ;
-(void)prepareForPrinting;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlightColor:(id)arg0 ;
-(void)setupBorderForLayer:(id)arg0 ;
-(void)setupEventHandling;
-(void)setupImagePlaceholder;
-(void)setupImagePlaceholderIfNecessary;
-(void)sharedInit:(BOOL)arg0 ;
-(void)showLoadingText:(BOOL)arg0 ;
-(void)updateImageInView:(BOOL)arg0 ;
-(void)updateImageInViewIfNecessary;
-(void)updateImageSize;


@end


#endif