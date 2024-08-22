// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCREPORTINGPLAYBACKOBSERVER_H
#define MPCREPORTINGPLAYBACKOBSERVER_H

@class NSOperationQueue, NSString;
@protocol ICEnvironmentMonitorObserver;

#import <Foundation/Foundation.h>


@interface MPCReportingPlaybackObserver : NSObject <ICEnvironmentMonitorObserver>

 {
    NSOperationQueue *_recordEventOperationQueue;
    BOOL _offline;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedReportingPlaybackObserver;
-(id)_init;
-(id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg0 eventSource:(id)arg1 ;
-(id)newPlayActivityEvent;
-(void)environmentMonitorDidChangeNetworkType:(id)arg0 ;
-(void)recordPlayActivityEvents:(id)arg0 forEventSource:(id)arg1 ;


@end


#endif