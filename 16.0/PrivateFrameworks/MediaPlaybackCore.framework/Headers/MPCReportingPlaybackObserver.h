// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCREPORTINGPLAYBACKOBSERVER_H
#define MPCREPORTINGPLAYBACKOBSERVER_H

@class NSOperationQueue, ICPlayActivityController;

#import <Foundation/Foundation.h>


@interface MPCReportingPlaybackObserver : NSObject {
    NSOperationQueue *_recordEventOperationQueue;
    ICPlayActivityController *_reportingController;
}


@property (nonatomic, getter=isOffline) BOOL offline; // ivar: _offline


-(id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg0 eventSource:(id)arg1 ;
-(id)init;
-(id)newPlayActivityEvent;
-(void)recordPlayActivityEvents:(id)arg0 forEventSource:(id)arg1 ;


@end


#endif