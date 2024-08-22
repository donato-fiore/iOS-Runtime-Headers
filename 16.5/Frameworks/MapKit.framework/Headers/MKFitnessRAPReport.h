// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFITNESSRAPREPORT_H
#define MKFITNESSRAPREPORT_H

@class GEORPFeedbackRequestParameters;

#import <Foundation/Foundation.h>


@interface MKFitnessRAPReport : NSObject {
    GEORPFeedbackRequestParameters *_feedbackRequestParameters;
}


@property (readonly, nonatomic) GEORPFeedbackRequestParameters *requestParameters; // ivar: _requestParameters


-(id)initForRunningTrackIssue:(NSUInteger)arg0 trackCoordinate:(struct CLLocationCoordinate2D )arg1 trackFeatureID:(id)arg2 nameOfTrack:(id)arg3 numberOfLanes:(id)arg4 comment:(id)arg5 ;
-(int)optionKeyForTrackIssue:(NSUInteger)arg0 ;


@end


#endif