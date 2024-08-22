// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PILONGEXPOSUREREGISTRATIONRESULT_H
#define _PILONGEXPOSUREREGISTRATIONRESULT_H

@class NURenderResult, NSString, VNImageHomographicAlignmentObservation;
@protocol PILongExposureRegistrationResult, NURenderStatistics;



@interface _PILongExposureRegistrationResult : NURenderResult <PILongExposureRegistrationResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) ? extent; // ivar: _extent
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) VNImageHomographicAlignmentObservation *observation; // ivar: _observation
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif