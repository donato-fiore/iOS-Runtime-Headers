// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOTEMPORALEVENTFILTER_H
#define HMIVIDEOTEMPORALEVENTFILTER_H

@class HMFObject, NSString, NSMutableArray, NSDictionary;
@protocol HMFLogging;


#import "HMIVideoAnalyzerFrameResult.h"

@interface HMIVideoTemporalEventFilter : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMIVideoAnalyzerFrameResult *prevFrameResult; // ivar: _prevFrameResult
@property (readonly) NSMutableArray *stationaryObjects; // ivar: _stationaryObjects
@property (readonly) Class superclass;
@property (readonly) NSDictionary *targetEventClassRanks; // ivar: _targetEventClassRanks
@property (readonly) ? timeInterval; // ivar: _timeInterval


+(id)logCategory;
-(BOOL)_resetPreviousFrameResult:(id)arg0 expirationPTS:(struct ? )arg1 regionOfInterest:(struct CGRect )arg2 ;
-(id)_filterEvents:(id)arg0 stationaryEvents:(id)arg1 motionDetection:(id)arg2 ;
-(id)_filterEvents:(id)arg0 stationaryEvents:(id)arg1 motionDetection:(id)arg2 prevFrameResult:(id)arg3 regionOfInterest:(struct CGRect )arg4 ;
-(id)_filterEvents:(id)arg0 stationaryEvents:(id)arg1 stationaryObjects:(id)arg2 expirationPTS:(struct ? )arg3 imageSize:(struct CGSize )arg4 ;
-(id)applyFilterWithFrameResult:(id)arg0 motionDetection:(id)arg1 ;
-(id)init;


@end


#endif