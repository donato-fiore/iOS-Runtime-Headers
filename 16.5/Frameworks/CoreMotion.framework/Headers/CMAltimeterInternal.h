// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMALTIMETERINTERNAL_H
#define CMALTIMETERINTERNAL_H

@class NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMAltimeterInternal : NSObject {
    *Dispatcher fFilteredPressureDispatcher;
    id *fRelativeAltimeterHandler;
    NSOperationQueue *fRelativeAltimeterQueue;
    Sample fBaseAltimeterSample;
    float fBarometricBaseAltitude;
    BOOL fBaselineReceived;
    float fMostRecentFilteredPressure;
    deque<float, std::allocator<float>> fPressureSamples;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    *void fLocationdConnection;
    id *fHandler;
    id *fSignificantElevationSampleHandler;
    CGFloat fElevationAscendedOffset;
    CGFloat fElevationDescendedOffset;
    BOOL fStopSignificantElevationUpdates;
    CGFloat fFilteredElevationOffset;
    BOOL fStopRelativeAltitudeUpdates;
    NSOperationQueue *fAbsoluteAltitudeClientQueue;
    id *fAbsoluteAltitudeClientHandler;
}




-(id)init;
-(void)_handleAbsoluteAltitudeUpdate:(struct shared_ptr<CLConnectionMessage> )arg0 ;
-(void)_pauseAbsoluteAltitudeUpdates;
-(void)_querySignificantElevationChangeFromDate:(id)arg0 toDate:(id)arg1 withHandler:(id)arg2 ;
-(void)_releaseHandlerObjects;
-(void)_resumeAbsoluteAltitudeUpdates;
-(void)_startAbsoluteAltitudeUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)_startElevationUpdatesWithHandler:(id)arg0 ;
-(void)_startRelativeAltitudeUpdates;
-(void)_startSignificantElevationUpdatesWithHandler:(id)arg0 ;
-(void)_stopAbsoluteAltitudeUpdates;
-(void)_stopElevationUpdates;
-(void)_stopRelativeAltitudeUpdates;
-(void)_stopSignificantElevationUpdates;
-(void)_teardown;
-(void)dealloc;


@end


#endif