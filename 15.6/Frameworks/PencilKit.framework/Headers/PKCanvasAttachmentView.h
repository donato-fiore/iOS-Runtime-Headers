// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCANVASATTACHMENTVIEW_H
#define PKCANVASATTACHMENTVIEW_H

@class NSMutableArray;


#import "PKAttachmentView.h"
#import "PKCanvasView.h"

@interface PKCanvasAttachmentView : PKAttachmentView

@property (nonatomic) BOOL _wantsFullyRenderedNotification; // ivar: __wantsFullyRenderedNotification
@property (weak, nonatomic) PKCanvasView *canvasView; // ivar: _canvasView
@property (nonatomic) CGFloat drawingWidth; // ivar: _drawingWidth
@property (retain, nonatomic) NSMutableArray *fullyRenderedCompletionBlocks; // ivar: _fullyRenderedCompletionBlocks


-(BOOL)disableTileAnimations;
-(BOOL)wantsFullyRendered;
-(struct CGAffineTransform )drawingTransform;
-(void)drawingDidChangeVisibleStrokes:(BOOL)arg0 ;
-(void)fullyRendered;


@end


#endif