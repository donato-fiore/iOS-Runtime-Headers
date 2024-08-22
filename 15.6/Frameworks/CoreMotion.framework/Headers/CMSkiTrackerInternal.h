// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMSKITRACKERINTERNAL_H
#define CMSKITRACKERINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CMSkiData.h"

@interface CMSkiTrackerInternal : NSObject {
    *void fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    BOOL fStartedUpdates;
    CMSkiData *fMostRecentRecord;
    id *fHandler;
    CGFloat fRunDistanceOffset;
    CGFloat fRunElevationDescendedOffset;
}




-(id)init;
-(void)_handleUpdates:(id)arg0 ;
-(void)_queryUpdatesFromRecord:(id)arg0 handler:(id)arg1 ;
-(void)_startUpdatesFromRecord:(id)arg0 handler:(id)arg1 ;
-(void)_stopUpdates;
-(void)_teardown;
-(void)dealloc;


@end


#endif