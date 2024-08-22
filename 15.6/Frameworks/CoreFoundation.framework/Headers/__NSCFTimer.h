// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSCFTIMER_H
#define __NSCFTIMER_H



#import "NSTimer.h"

@interface __NSCFTimer : NSTimer



+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(CGFloat)timeInterval;
-(CGFloat)tolerance;
-(NSUInteger)_cfTypeID;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)fireDate;
-(id)init;
-(id)initWithFireDate:(id)arg0 interval:(CGFloat)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
-(id)retain;
-(id)userInfo;
-(void)fire;
-(void)invalidate;
-(void)release;
-(void)setFireDate:(id)arg0 ;
-(void)setTolerance:(CGFloat)arg0 ;


@end


#endif