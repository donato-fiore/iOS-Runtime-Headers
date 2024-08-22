// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDRAWINGINLINEATTACHMENTVIEW_H
#define ICDRAWINGINLINEATTACHMENTVIEW_H

@class NSString;
@protocol ICAttachmentPresenterDelegate;


#import "ICAttachmentView.h"
#import "ICDrawingInlineView.h"

@interface ICDrawingInlineAttachmentView : ICAttachmentView <ICAttachmentPresenterDelegate>



@property (readonly, nonatomic) CGRect boundsForDisplay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ICDrawingInlineView *drawingInlineView; // ivar: _drawingInlineView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)accessibilityIgnoresInvertColors;
-(BOOL)cancelDidScrollIntoVisibleRange;
-(BOOL)shouldAddPanGesture;
-(id)accessibilityLabel;
-(id)attachmentPresenter:(id)arg0 transitionViewForAttachment:(id)arg1 ;
-(id)icaxHintString;
-(id)initWithTextAttachment:(id)arg0 forManualRendering:(BOOL)arg1 ;
-(void)dealloc;
-(void)didChangeSize;
-(void)didScrollIntoVisibleRange;
-(void)didScrollOutOfVisibleRange;
-(void)didTapAttachment:(id)arg0 ;
-(void)setAttachment:(id)arg0 ;
-(void)setAttachmentContentSize:(struct CGSize )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)sharedInit:(BOOL)arg0 ;


@end


#endif