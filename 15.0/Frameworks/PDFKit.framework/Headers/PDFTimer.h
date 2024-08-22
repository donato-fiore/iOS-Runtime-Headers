// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFTIMER_H
#define PDFTIMER_H


#import <Foundation/Foundation.h>

#import "PDFTimerPrivate.h"

@interface PDFTimer : NSObject {
    PDFTimerPrivate *_private;
}




-(BOOL)isUpdateQueued;
-(id)initWithSelector:(SEL)arg0 forTarget:(id)arg1 ;
-(id)initWithThrottleDelay:(CGFloat)arg0 forSelector:(SEL)arg1 forTarget:(id)arg2 ;
-(void)_execute;
-(void)cancel;
-(void)dealloc;
-(void)update;


@end


#endif