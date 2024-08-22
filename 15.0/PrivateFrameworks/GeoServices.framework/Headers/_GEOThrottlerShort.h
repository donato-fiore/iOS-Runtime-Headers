// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOTHROTTLERSHORT_H
#define _GEOTHROTTLERSHORT_H

@class NSString;
@protocol _GEOThrottler;

#import <Foundation/Foundation.h>


@interface _GEOThrottlerShort : NSObject <_GEOThrottler>

 {
    vector<(anonymous namespace)::Timestamp, std::allocator<(anonymous namespace)::Timestamp>> _lastRequestTimes;
    unsigned int _currentIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeWindow; // ivar: _timeWindow


+(BOOL)stateIsExpired:(id)arg0 ;
-(BOOL)addRequestTimestamp;
-(BOOL)isExpired;
-(CGFloat)timeUntilReset;
-(NSUInteger)remainingEntries;
-(id)captureState;
-(id)initWithKeyPath:(id)arg0 requestCount:(NSUInteger)arg1 interval:(CGFloat)arg2 savedState:(id)arg3 ;
-(id)userInfoForError;
-(unsigned int)maxReqCount;


@end


#endif