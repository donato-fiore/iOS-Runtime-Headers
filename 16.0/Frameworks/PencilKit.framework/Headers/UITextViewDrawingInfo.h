// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTVIEWDRAWINGINFO_H
#define UITEXTVIEWDRAWINGINFO_H

@class UITextView;
@protocol UITextViewDrawingDelegate;

#import <Foundation/Foundation.h>

#import "PKTiledView.h"

@interface UITextViewDrawingInfo : NSObject {
    BOOL _addBottomPadding;
    BOOL _rulerEnabled;
    UITextView *_textView;
    PKTiledView *_tiledView;
    id<UITextViewDrawingDelegate> *_delegate;
    Class _drawingClass;
}






@end


#endif