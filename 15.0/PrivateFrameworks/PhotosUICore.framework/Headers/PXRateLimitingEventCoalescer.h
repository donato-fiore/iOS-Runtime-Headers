// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXRATELIMITINGEVENTCOALESCER_H
#define PXRATELIMITINGEVENTCOALESCER_H



#import "PXEventCoalescer.h"

@interface PXRateLimitingEventCoalescer : PXEventCoalescer {
    CGFloat _lastSignalTime;
    BOOL _waitingForCallback;
    BOOL _cancelled;
}


@property (readonly, nonatomic) CGFloat rate; // ivar: _rate


-(id)init;
-(id)initWithRate:(CGFloat)arg0 ;
-(void)_handleTimer;
-(void)cancel;
-(void)inputEvent;
-(void)signalObservers;


@end


#endif