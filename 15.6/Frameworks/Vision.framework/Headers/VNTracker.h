// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNTRACKER_H
#define VNTRACKER_H

@class NSUUID, NSString;
@protocol VNOriginatingRequestSpecifierProviding;

#import <Foundation/Foundation.h>

#import "VNRequestSpecifier.h"

@interface VNTracker : NSObject <VNOriginatingRequestSpecifierProviding>

 {
    shared_ptr<vision::mod::ObjectTrackerAbstract> mTrackerImpl;
    VNRequestSpecifier *_originatingRequestSpecifier;
}


@property (readonly) BOOL isResettable;
@property (readonly) BOOL isTracking;
@property (readonly) NSUUID *key; // ivar: _key
@property CGRect lastTrackedBBox; // ivar: _lastTrackedBBox
@property (readonly) NSString *level; // ivar: _level
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property unsigned int trackedFrameCVPixelBufferFormat; // ivar: _trackedFrameCVPixelBufferFormat
@property NSInteger trackedFrameNumber; // ivar: _trackedFrameNumber


+(NSInteger)VNTrackerOptionToTrackerType:(id)arg0 ;
-(*void)_createTrackerWithLevel:(id)arg0 options:(struct ObjectTrackerOptions *)arg1 error:(*id)arg2 ;
-(BOOL)_updateTrackerWithModifiedBBoxForImageBuffer:(id)arg0 error:(*id)arg1 ;
-(BOOL)_visionBBoxToTrackerBBox:(id)arg0 trackedObjects:(*void)arg1 imageSize:(struct CGSize )arg2 results:(id)arg3 error:(*id)arg4 ;
-(BOOL)reset:(*id)arg0 ;
-(id)_parseInputObservations:(id)arg0 imageBuffer:(id)arg1 error:(*id)arg2 ;
-(id)_postProcessTrackingResults:(id)arg0 trackerResults:(id)arg1 error:(*id)arg2 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)setTrackedObjects:(id)arg0 inFrame:(id)arg1 error:(*id)arg2 ;
-(id)trackInFrame:(id)arg0 error:(*id)arg1 ;


@end


#endif