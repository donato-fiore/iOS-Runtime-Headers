// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDTIMERMANAGERTIMERCONTEXT_H
#define HMDTIMERMANAGERTIMERCONTEXT_H


#import <Foundation/Foundation.h>


@interface HMDTimerManagerTimerContext : NSObject

@property (readonly, nonatomic) CGFloat expirationTime; // ivar: _expirationTime
@property (readonly) id *object; // ivar: _object


+(id)comparator:(SEL)arg0 ;
-(id)initWithObject:(id)arg0 expirationTime:(CGFloat)arg1 ;


@end


#endif