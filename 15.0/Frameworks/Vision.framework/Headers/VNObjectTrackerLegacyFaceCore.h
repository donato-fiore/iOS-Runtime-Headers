// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNOBJECTTRACKERLEGACYFACECORE_H
#define VNOBJECTTRACKERLEGACYFACECORE_H

@class FaceCoreDetector, NSDictionary;


#import "VNTracker.h"

@interface VNObjectTrackerLegacyFaceCore : VNTracker {
    FaceCoreDetector *_detector;
    NSDictionary *_detectOptions;
    NSDictionary *_extractOptions;
}




+(Class)trackerObservationClass;
+(id)_convertOptionsToFaceCoreDetectOptions:(id)arg0 ;
+(id)_convertOptionsToFaceCoreExtractOptions:(id)arg0 ;
+(id)_convertOptionsToFaceCoreSetupOptions:(id)arg0 ;
-(BOOL)isResettable;
-(BOOL)reset:(*id)arg0 ;
-(id)_detectFacesInImage:(id)arg0 error:(*id)arg1 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)setTrackedObjects:(id)arg0 inFrame:(id)arg1 error:(*id)arg2 ;
-(id)trackInFrame:(id)arg0 error:(*id)arg1 ;


@end


#endif