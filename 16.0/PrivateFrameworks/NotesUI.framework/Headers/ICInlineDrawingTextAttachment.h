// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICINLINEDRAWINGTEXTATTACHMENT_H
#define ICINLINEDRAWINGTEXTATTACHMENT_H

@class UIView, NSString, NSHashTable;
@protocol PKTextAttachment;


#import "ICInlineCanvasTextAttachment.h"
#import "ICInlineDrawingChangeCoalescer.h"
#import "ICDrawingHashtagsAndMentionsController.h"

@interface ICInlineDrawingTextAttachment : ICInlineCanvasTextAttachment <PKTextAttachment>



@property (weak, nonatomic) UIView *cachedControlViewForPlaceView; // ivar: _cachedControlViewForPlaceView
@property (weak, nonatomic) UIView *cachedDrawingViewForPlaceView; // ivar: _cachedDrawingViewForPlaceView
@property (retain, nonatomic) ICInlineDrawingChangeCoalescer *changeCoalescer; // ivar: _changeCoalescer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICDrawingHashtagsAndMentionsController *hashtagsAndMentionsController; // ivar: _hashtagsAndMentionsController
@property (retain, nonatomic) NSHashTable *inlineDrawingViews; // ivar: _inlineDrawingViews
@property (nonatomic) BOOL isHandlingDrawingDidChange; // ivar: _isHandlingDrawingDidChange
@property (readonly) Class superclass;


-(BOOL)canDragWithoutSelecting;
-(id)_image;
-(id)attachmentAsNSTextAttachment;
-(id)attachmentViews;
-(id)contents;
-(id)inlineViews;
-(id)printableTextContentForAppearanceType:(NSUInteger)arg0 ;
-(id)viewProviderForParentView:(id)arg0 characterIndex:(NSUInteger)arg1 layoutManager:(id)arg2 ;
-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;
-(void)detachView;
-(void)detachView:(id)arg0 fromParentView:(id)arg1 ;
-(void)drawingDataDidChange:(id)arg0 view:(id)arg1 ;
-(void)placeView:(id)arg0 withFrame:(struct CGRect )arg1 inParentView:(id)arg2 characterIndex:(NSUInteger)arg3 layoutManager:(id)arg4 ;
-(void)resetZoom;
-(void)saveIfNeeded;


@end


#endif