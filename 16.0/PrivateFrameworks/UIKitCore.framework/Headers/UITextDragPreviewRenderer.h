// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTDRAGPREVIEWRENDERER_H
#define UITEXTDRAGPREVIEWRENDERER_H

@class NSString, NSLayoutManager;
@protocol _UITextPreviewRenderer;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface UITextDragPreviewRenderer : NSObject <_UITextPreviewRenderer>

 {
    _NSRange _range;
    CGRect _firstRect;
    CGRect _lastRect;
    CGRect _middleRect;
    CGPoint _origin;
    UIImage *_image;
    BOOL _calculated;
    BOOL _unifyRects;
}


@property (readonly, nonatomic) CGRect bodyRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect firstLineRect;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) CGRect lastLineRect;
@property (readonly, nonatomic) NSLayoutManager *layoutManager; // ivar: _layoutManager
@property (readonly) Class superclass;


-(id)initWithLayoutManager:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)initWithLayoutManager:(id)arg0 range:(struct _NSRange )arg1 unifyRects:(BOOL)arg2 ;
-(struct CGRect )_correctlyOffsetBoundingRect;
-(struct CGRect )_rawBoundingRect;
-(void)_calculate;
-(void)_calculateRectsUsingLayoutManager:(id)arg0 ;
-(void)addRenderingAttributes:(id)arg0 ;
-(void)adjustFirstLineRect:(struct CGRect *)arg0 bodyRect:(struct CGRect *)arg1 lastLineRect:(struct CGRect *)arg2 textOrigin:(struct CGPoint )arg3 ;
-(void)removeRenderingAttributes:(id)arg0 ;


@end


#endif