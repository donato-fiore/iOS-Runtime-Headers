// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNTRACENAVIGATIONUPDATERECORDER_H
#define MNTRACENAVIGATIONUPDATERECORDER_H

@class NSString;
@protocol MNNavigationSessionObserver;

#import <Foundation/Foundation.h>

#import "MNTraceRecorder.h"

@interface MNTraceNavigationUpdateRecorder : NSObject <MNNavigationSessionObserver>

 {
    MNTraceRecorder *_traceRecorder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTraceRecorder:(id)arg0 ;
-(void)_recordRouteChangeWithRouteInfo:(id)arg0 reason:(NSUInteger)arg1 ;
-(void)navigationSession:(id)arg0 didReroute:(id)arg1 withLocation:(id)arg2 withAlternateRoutes:(id)arg3 rerouteReason:(NSUInteger)arg4 ;
-(void)navigationSession:(id)arg0 didResumeNavigatingFromWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 reason:(NSUInteger)arg3 ;
-(void)navigationSession:(id)arg0 didSwitchToNewTransportType:(int)arg1 newRoute:(id)arg2 ;


@end


#endif