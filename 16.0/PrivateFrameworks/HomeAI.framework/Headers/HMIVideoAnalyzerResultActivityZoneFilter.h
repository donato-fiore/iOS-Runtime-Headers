// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIVIDEOANALYZERRESULTACTIVITYZONEFILTER_H
#define HMIVIDEOANALYZERRESULTACTIVITYZONEFILTER_H

@class NSArray, NSString;
@protocol HMFLogging;


#import "HMIVideoAnalyzerResultFilter.h"

@interface HMIVideoAnalyzerResultActivityZoneFilter : HMIVideoAnalyzerResultFilter <HMFLogging>



@property (readonly) NSArray *activityZones; // ivar: _activityZones
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *motionDetections; // ivar: _motionDetections
@property (readonly) Class superclass;


+(id)logCategory;
-(id)applyWithFrameResult:(id)arg0 ;
-(id)initWithActivityZones:(id)arg0 motionDetections:(id)arg1 ;


@end


#endif