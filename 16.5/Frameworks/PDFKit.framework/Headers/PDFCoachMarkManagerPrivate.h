// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFCOACHMARKMANAGERPRIVATE_H
#define PDFCOACHMARKMANAGERPRIVATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PDFRenderingProperties.h"
#import "PDFTimer.h"

@interface PDFCoachMarkManagerPrivate : NSObject {
    PDFRenderingProperties *renderingProperties;
    NSMutableDictionary *coachMarks;
    PDFTimer *timer;
}






@end


#endif