// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTCINEMATOGRAPHYCUSTOMTRACK_H
#define PTCINEMATOGRAPHYCUSTOMTRACK_H

@class NSArray;


#import "PTCinematographyTrack.h"

@interface PTCinematographyCustomTrack : PTCinematographyTrack

@property (readonly, nonatomic) NSArray *allDetections;
@property (retain, nonatomic) NSArray *detections; // ivar: _detections


-(BOOL)isDiscrete;
-(BOOL)isUserCreated;
-(NSUInteger)trackType;
-(id)_asCinematographyDictionary;
-(id)_initWithCinematographyDictionary:(id)arg0 ;
-(id)_trackByTrimmingToTimeRange:(struct ? )arg0 subtracting:(struct ? )arg1 ;
-(id)detectionAtOrBeforeTime:(struct ? )arg0 ;
-(id)detectionInFrame:(id)arg0 ;
-(id)detectionNearestTime:(struct ? )arg0 ;
-(id)detectionsInTimeRange:(struct ? )arg0 ;
-(id)initWithDetections:(id)arg0 ;
-(void)applyDetectionSmoothing;


@end


#endif