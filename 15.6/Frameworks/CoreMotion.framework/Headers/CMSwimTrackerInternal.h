// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMSWIMTRACKERINTERNAL_H
#define CMSWIMTRACKERINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMSwimTrackerInternal : NSObject {
    *void fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    BOOL fStartedUpdates;
    id *fHandler;
    NSUInteger fStrokeCountOffset;
    CGFloat fDistanceOffset;
    NSUInteger fLapCountOffset;
    CGFloat fActiveTime;
    NSUInteger fSegmentCountOffset;
}




-(id)init;
-(void)_handleUpdates:(id)arg0 ;
-(void)_querySwimUpdatesFromRecord:(id)arg0 handler:(id)arg1 ;
-(void)_resetOffsets;
-(void)_startUpdatesFromRecord:(id)arg0 handler:(id)arg1 ;
-(void)_stopUpdates;
-(void)_teardown;
-(void)dealloc;


@end


#endif