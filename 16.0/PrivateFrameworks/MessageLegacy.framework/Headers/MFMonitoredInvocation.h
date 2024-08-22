// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMONITOREDINVOCATION_H
#define MFMONITOREDINVOCATION_H

@class NSInvocation, NSString;


#import "MFActivityMonitor.h"

@interface MFMonitoredInvocation : NSInvocation {
    BOOL _shouldLogInvocation;
}


@property (nonatomic) BOOL isLowPriority; // ivar: _isLowPriority
@property (readonly, nonatomic) MFActivityMonitor *monitor; // ivar: _monitor
@property (copy, nonatomic) NSString *powerAssertionId; // ivar: _powerAssertionId


+(id)invocationWithMethodSignature:(id)arg0 ;
+(id)invocationWithSelector:(SEL)arg0 target:(id)arg1 object1:(id)arg2 object2:(id)arg3 taskName:(id)arg4 priority:(int)arg5 canBeCancelled:(BOOL)arg6 ;
+(id)invocationWithSelector:(SEL)arg0 target:(id)arg1 object:(id)arg2 taskName:(id)arg3 priority:(int)arg4 canBeCancelled:(BOOL)arg5 ;
+(id)invocationWithSelector:(SEL)arg0 target:(id)arg1 taskName:(id)arg2 priority:(int)arg3 canBeCancelled:(BOOL)arg4 ;
-(BOOL)mf_shouldLogInvocation;
-(id)description;
-(void)dealloc;
-(void)invoke;
-(void)setShouldLogInvocation:(BOOL)arg0 ;


@end


#endif