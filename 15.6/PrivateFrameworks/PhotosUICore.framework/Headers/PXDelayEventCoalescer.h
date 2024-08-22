// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXDELAYEVENTCOALESCER_H
#define PXDELAYEVENTCOALESCER_H



#import "PXEventCoalescer.h"

@interface PXDelayEventCoalescer : PXEventCoalescer {
    CGFloat _lastEventTime;
    BOOL _waitingForCallback;
    BOOL _cancelled;
}


@property (readonly, nonatomic) CGFloat delay; // ivar: _delay


-(id)init;
-(id)initWithDelay:(CGFloat)arg0 ;
-(void)_handleTimer;
-(void)cancel;
-(void)inputEvent;


@end


#endif