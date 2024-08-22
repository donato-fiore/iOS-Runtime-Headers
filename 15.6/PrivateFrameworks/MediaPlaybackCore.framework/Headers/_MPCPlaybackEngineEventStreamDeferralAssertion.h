// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPCPLAYBACKENGINEEVENTSTREAMDEFERRALASSERTION_H
#define _MPCPLAYBACKENGINEEVENTSTREAMDEFERRALASSERTION_H

@class NSString;
@protocol MPCPlaybackEngineEventStreamDeferralAssertion;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngineEventStream.h"

@interface _MPCPlaybackEngineEventStreamDeferralAssertion : NSObject <MPCPlaybackEngineEventStreamDeferralAssertion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) MPCPlaybackEngineEventStream *eventStream; // ivar: _eventStream
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL invalidated; // ivar: _invalidated
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)initWithEventStream:(id)arg0 reason:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif