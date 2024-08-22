// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTVIEWDRAWINGINFO_H
#define UITEXTVIEWDRAWINGINFO_H

@class UITextView, UILongPressGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate, UITextViewDrawingDelegate;

#import <Foundation/Foundation.h>

#import "PKTiledView.h"

@interface UITextViewDrawingInfo : NSObject <UIGestureRecognizerDelegate>

 {
    BOOL _addBottomPadding;
    BOOL _rulerEnabled;
    UITextView *_textView;
    PKTiledView *_tiledView;
    id<UITextViewDrawingDelegate> *_delegate;
    UILongPressGestureRecognizer *_insertLongPressGestureRecognizer;
    Class _drawingClass;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;


@end


#endif