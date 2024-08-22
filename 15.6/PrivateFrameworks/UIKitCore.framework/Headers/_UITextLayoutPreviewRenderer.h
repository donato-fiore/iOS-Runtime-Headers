// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTLAYOUTPREVIEWRENDERER_H
#define _UITEXTLAYOUTPREVIEWRENDERER_H

@class NSString, NSTextRange, NSTextLayoutManager;
@protocol _UITextPreviewRenderer;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UITextLayoutPreviewRenderer : NSObject <_UITextPreviewRenderer>

 {
    BOOL _calculated;
    BOOL _unifyRects;
    CGRect _firstRect;
    CGRect _lastRect;
    CGRect _middleRect;
    UIImage *_image;
}


@property (readonly, nonatomic) CGRect bodyRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect firstLineRect;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) CGRect lastLineRect;
@property (readonly, nonatomic) NSTextRange *range; // ivar: _range
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSTextLayoutManager *textLayoutManager; // ivar: _textLayoutManager


-(id)initWithTextLayoutManager:(id)arg0 range:(id)arg1 unifyRects:(BOOL)arg2 ;
-(void)_updateDataIfNeeded;
-(void)addRenderingAttributes:(id)arg0 ;
-(void)removeRenderingAttributes:(id)arg0 ;


@end


#endif