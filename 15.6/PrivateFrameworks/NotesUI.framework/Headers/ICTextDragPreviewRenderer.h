// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICTEXTDRAGPREVIEWRENDERER_H
#define ICTEXTDRAGPREVIEWRENDERER_H

@class UIImage, NSLayoutManager;

#import <Foundation/Foundation.h>

#import "TTTextStorage.h"

@interface ICTextDragPreviewRenderer : NSObject {
    _NSRange _range;
    CGRect _firstRect;
    CGRect _lastRect;
    CGRect _middleRect;
    UIImage *_image;
    BOOL _calculated;
    BOOL _unifyRects;
}


@property (readonly, nonatomic) CGRect bodyRect;
@property (readonly, nonatomic) CGRect firstLineRect;
@property (readonly, nonatomic) UIImage *image;
@property (nonatomic) BOOL isDraggingChecklistItem; // ivar: _isDraggingChecklistItem
@property (readonly, nonatomic) CGRect lastLineRect;
@property (readonly, nonatomic) NSLayoutManager *layoutManager; // ivar: _layoutManager
@property (nonatomic) CGPoint origin; // ivar: _origin
@property (nonatomic) CGPoint originAdjustment; // ivar: _originAdjustment
@property (nonatomic) CGFloat renderOffset; // ivar: _renderOffset
@property (nonatomic) _NSRange renderedGlyphRange; // ivar: _renderedGlyphRange
@property (retain, nonatomic) TTTextStorage *textStorage; // ivar: _textStorage


-(id)initWithLayoutManager:(id)arg0 range:(struct _NSRange )arg1 textStorage:(id)arg2 ;
-(struct CGRect )_correctlyOffsetBoundingRect;
-(struct CGRect )_rawBoundingRect;
-(void)_calculate;
-(void)_calculateRectsUsingLayoutManager:(id)arg0 ;


@end


#endif