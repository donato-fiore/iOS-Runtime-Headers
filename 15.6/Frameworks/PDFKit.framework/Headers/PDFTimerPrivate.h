// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFTIMERPRIVATE_H
#define PDFTIMERPRIVATE_H

@class NSInvocation, NSTimer;

#import <Foundation/Foundation.h>


@interface PDFTimerPrivate : NSObject {
    NSObject *target;
    NSInvocation *methodInvocation;
    NSTimer *timer;
    CGFloat timeInterval;
    BOOL isRequested;
}






@end


#endif