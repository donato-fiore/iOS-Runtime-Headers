// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPDFPAGECONTENTDELEGATE_H
#define UIPDFPAGECONTENTDELEGATE_H

@class CALayer;

#import <Foundation/Foundation.h>

#import "UIPDFPageView.h"
#import "UIPDFDocument.h"

@interface UIPDFPageContentDelegate : NSObject {
    UIPDFPageView *_view;
    CGRect _bounds;
    *CGColor _white;
    os_unfair_lock_s _lock;
    NSUInteger _threadCount;
    BOOL _isCancelled;
}


@property CGRect box; // ivar: _box
@property (retain) UIPDFDocument *document; // ivar: _document
@property *CGColor highlightColor; // ivar: _highlightColor
@property BOOL isCancelled;
@property CALayer *owner; // ivar: _owner
@property NSUInteger pageIndex; // ivar: _pageIndex
@property NSUInteger pageRotation; // ivar: _pageRotation
@property (readonly) CGAffineTransform transform; // ivar: _transform
@property UIPDFPageView *view;


-(BOOL)pageHasSelection;
-(id)init;
-(void)addRect:(struct CGRect )arg0 toPath:(struct CGPath *)arg1 transform:(struct CGAffineTransform *)arg2 view:(id)arg3 owner:(id)arg4 ;
-(void)computeTransform;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawSelectionLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawSelectionLayerBlockMode:(id)arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif