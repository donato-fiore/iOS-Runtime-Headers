// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLAWDSESSIONTRACKERMOCK_H
#define PMLAWDSESSIONTRACKERMOCK_H

@class NSMutableArray, NSArray;


#import "PMLAWDSessionTracker.h"

@interface PMLAWDSessionTrackerMock : PMLAWDSessionTracker {
    NSMutableArray *_internalTrackedSessions;
}


@property (readonly, nonatomic) NSArray *trackedSessions; // ivar: _trackedSessions


-(id)initWithModel:(id)arg0 ;
-(void)clearTrackedSessions;
-(void)postMetricId:(unsigned int)arg0 message:(id)arg1 ;


@end


#endif