// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSTEXTVIEWPORTLAYOUTCONTROLLER_H
#define NSTEXTVIEWPORTLAYOUTCONTROLLER_H

@class NSArray, NSMutableArray;
@protocol NSTextViewportLayoutDelegate_Private, NSTextViewportLayoutControllerDelegate, NSTextViewportElementProvider;

#import <Foundation/Foundation.h>

#import "NSTextRange.h"
#import "NSTextLayoutManager.h"

@interface NSTextViewportLayoutController : NSObject {
    CGRect _viewportBounds;
    CGPoint _viewportOffset;
    NSTextRange *_viewportRange;
    NSArray *_viewportElements;
    NSMutableArray *_viewportLayoutObservers;
    id<NSTextViewportLayoutDelegate_Private> *_delegate;
    ? _viewportLayoutControllerFlags;
}


@property (weak) NSObject<NSTextViewportLayoutControllerDelegate> *delegate;
@property (readonly, weak) NSObject<NSTextViewportElementProvider> *elementProvider;
@property (readonly, weak) NSTextLayoutManager *textLayoutManager; // ivar: _textLayoutManager
@property (readonly) CGRect viewportBounds;
@property (readonly) NSTextRange *viewportRange;


+(BOOL)flushesCachedViewportElements;
-(CGFloat)relocateViewportToTextLocation:(id)arg0 ;
-(id)initWithElementProvider:(id)arg0 ;
-(id)initWithTextLayoutManager:(id)arg0 ;
-(id)locationAtPoint:(struct CGPoint )arg0 ;
-(id)textViewportElementAtPoint:(struct CGPoint )arg0 ;
-(id)textViewportElementForLocation:(id)arg0 ;
-(id)textViewportElementsInRect:(struct CGRect )arg0 ;
-(struct CGRect )viewport;
-(void)addViewportLayoutObserver:(id)arg0 ;
-(void)adjustViewport:(CGFloat)arg0 atLocation:(id)arg1 verticalOffsetFromLocation:(CGFloat)arg2 ;
-(void)adjustViewportByVerticalOffset:(CGFloat)arg0 ;
-(void)dealloc;
-(void)enumerateTextViewportElementsInRect:(struct CGRect )arg0 options:(NSInteger)arg1 usingBlock:(id)arg2 ;
-(void)layoutViewport;
-(void)removeViewportLayoutObserver:(id)arg0 ;
-(void)setNeedsLayout;


@end


#endif