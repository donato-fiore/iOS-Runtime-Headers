// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFMARKUPMENUVIEWPRIVATE_H
#define PDFMARKUPMENUVIEWPRIVATE_H

@class NSDictionary, NSArray, _UIBackdropView, UIImageView;
@protocol PDFMarkupMenuViewDelegate;

#import <Foundation/Foundation.h>


@interface PDFMarkupMenuViewPrivate : NSObject {
    NSUInteger markupStyle;
    NSUInteger markupNoteStyle;
    id<PDFMarkupMenuViewDelegate> *delegate;
    NSDictionary *menuControls;
    NSArray *activeControlKeys;
    CGFloat calloutArrowX;
    BOOL calloutArrowPointsUp;
    _UIBackdropView *backgroundView;
    _UIBackdropView *separatorBackgroundView;
    UIImageView *blurMaskView;
    UIImageView *tintMaskView;
    UIImageView *separatorMaskView;
    CGRect viewFrame;
}






@end


#endif