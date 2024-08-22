// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCPLAYBACKENGINEEVENTSTREAMDEFERRALASSERTION_H
#define _MPCPLAYBACKENGINEEVENTSTREAMDEFERRALASSERTION_H

@class NSString, MSVBlockGuard;
@protocol MPCPlaybackEngineEventStreamDeferralAssertion;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngineEventStream.h"

@interface _MPCPlaybackEngineEventStreamDeferralAssertion : NSObject <MPCPlaybackEngineEventStreamDeferralAssertion>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) MPCPlaybackEngineEventStream *eventStream; // ivar: _eventStream
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL invalidated; // ivar: _invalidated
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;
@property (readonly, nonatomic) MSVBlockGuard *timeoutGuard; // ivar: _timeoutGuard
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithEventStream:(id)arg0 type:(NSInteger)arg1 reason:(id)arg2 timeout:(CGFloat)arg3 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif