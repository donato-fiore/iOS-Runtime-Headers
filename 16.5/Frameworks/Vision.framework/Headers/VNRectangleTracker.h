// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNRECTANGLETRACKER_H
#define VNRECTANGLETRACKER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "VNTracker.h"

@interface VNRectangleTracker : VNTracker {
    NSMutableDictionary *_cornerTrackersImpl;
    NSObject<OS_dispatch_queue> *_rectangleTrackingProcessingQueue;
}




+(Class)trackerObservationClass;
+(id)_trackingRectAroundPoint:(struct CGPoint )arg0 trackingRectSize:(struct CGSize )arg1 ;
+(id)trackedCorners;
-(BOOL)isTracking;
-(BOOL)reset:(*id)arg0 ;
-(id)_convertCornerObservationsToRectangleObservation:(id)arg0 error:(*id)arg1 ;
-(id)_parseInputObservations:(id)arg0 imageBuffer:(id)arg1 error:(*id)arg2 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)setTrackedObjects:(id)arg0 inFrame:(id)arg1 error:(*id)arg2 ;
-(id)trackInFrame:(id)arg0 error:(*id)arg1 ;


@end


#endif