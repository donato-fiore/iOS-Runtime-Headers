// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCDTIMER_H
#define GCDTIMER_H

@class NSDate;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface GCDTimer : NSObject {
    NSObject<OS_dispatch_source> *_source;
}


@property (readonly, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property (readonly, nonatomic, getter=isRepeating) BOOL repeating; // ivar: _repeating


+(id)scheduledTimerWithTimeInterval:(CGFloat)arg0 queue:(id)arg1 block:(id)arg2 ;
+(id)scheduledTimerWithTimeInterval:(CGFloat)arg0 queue:(id)arg1 repeating:(BOOL)arg2 block:(id)arg3 ;
-(id)description;
-(id)initWithTimeInterval:(CGFloat)arg0 queue:(id)arg1 repeating:(BOOL)arg2 block:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif