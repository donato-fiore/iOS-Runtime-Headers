// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTILEDTEXTVIEW_H
#define PKTILEDTEXTVIEW_H

@class NSString, UIView<PKTextAttachmentDrawingViewProviderView>, UIButton;
@protocol UITextInteractionDelegate, UIPointerInteractionDelegate;


#import "PKTiledView.h"

@interface PKTiledTextView : PKTiledView <UITextInteractionDelegate, UIPointerInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView<PKTextAttachmentDrawingViewProviderView> *standInEndAttachmentView; // ivar: _standInEndAttachmentView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *tapToRadarButton; // ivar: _tapToRadarButton


-(BOOL)_shouldExpandBottomAttachmentForDragAndDrop;
-(BOOL)_shouldPreventScrollViewPanGestureWhilePreviewing;
-(BOOL)_shouldUpdateHeightOfAttachments;
-(BOOL)canAddStroke;
-(BOOL)hasEndAttachment;
-(BOOL)insertAttachmentIfInBlankSpace:(struct CGPoint )arg0 ;
-(BOOL)interactionShouldBegin:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(id)_textView;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initInScrollView:(id)arg0 sixChannelBlending:(BOOL)arg1 defaultDrawingClass:(Class)arg2 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)saveTempData:(id)arg0 name:(id)arg1 ;
-(id)standInAttachmentView;
-(id)viewForAttachmentAtBlankSpace;
-(struct CGRect )frameOfEndAttachment;
-(void)_canvasViewWillCreateSnapshot;
-(void)_layoutSubviews;
-(void)_setupTapToRadarButton;
-(void)_tapToRadarButtonTapped:(id)arg0 ;
-(void)appendPath:(id)arg0 attachmentString:(id)arg1 ;
-(void)canvasViewDidEndDrawing:(id)arg0 ;
-(void)canvasViewWillBeginNewStroke:(id)arg0 withTouch:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setDefaultDrawingClass:(Class)arg0 ;
-(void)setLinedPaper:(id)arg0 ;
-(void)textDidBeginEditing:(id)arg0 ;
-(void)textDidChange:(id)arg0 ;
-(void)textDidEndEditing:(id)arg0 ;
-(void)updateEndAttachment;


@end


#endif