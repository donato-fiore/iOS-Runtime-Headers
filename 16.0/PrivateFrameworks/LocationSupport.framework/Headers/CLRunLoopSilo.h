// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLRUNLOOPSILO_H
#define CLRUNLOOPSILO_H



#import "CLSilo.h"
#import "CLRunLoopSiloThread.h"

@interface CLRunLoopSilo : CLSilo {
    CLRunLoopSiloThread *_siloThread;
    BOOL _useCLPermissiveTimer;
}




-(BOOL)inPermissiveMode;
-(BOOL)isSuspended;
-(CGFloat)currentLatchedAbsoluteTimestamp;
-(id)debugDescription;
-(id)getTimeCoercibleVariantInstance;
-(id)initWithCurrentRunLoopAndIdentifier:(id)arg0 ;
-(id)initWithCurrentRunLoopAndIdentifier:(id)arg0 bePermissive:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithUnderlyingRunLoop:(struct __CFRunLoop *)arg0 ;
-(id)newTimer;
-(id)runloop;
-(void)afterInterval:(CGFloat)arg0 async:(id)arg1 ;
-(void)assertInside;
-(void)assertOutside;
-(void)async:(id)arg0 ;
-(void)heartBeat:(id)arg0 ;
-(void)resume;
-(void)suspend;
-(void)sync:(id)arg0 ;


@end


#endif