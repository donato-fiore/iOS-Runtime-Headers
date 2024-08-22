// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFPAGELABELVIEWPRIVATE_H
#define PDFPAGELABELVIEWPRIVATE_H

@class _UIBackdropView, UILabel;

#import <Foundation/Foundation.h>

#import "PDFTimer.h"

@interface PDFPageLabelViewPrivate : NSObject {
    _UIBackdropView *backdropView;
    UILabel *label;
    PDFTimer *visibilityTimer;
}






@end


#endif