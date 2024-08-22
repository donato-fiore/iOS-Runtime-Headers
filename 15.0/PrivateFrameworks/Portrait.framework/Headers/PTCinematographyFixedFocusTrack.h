// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTCINEMATOGRAPHYFIXEDFOCUSTRACK_H
#define PTCINEMATOGRAPHYFIXEDFOCUSTRACK_H



#import "PTCinematographyTrack.h"
#import "PTCinematographyDetection.h"

@interface PTCinematographyFixedFocusTrack : PTCinematographyTrack

@property (readonly, nonatomic) PTCinematographyDetection *detection; // ivar: _detection
@property (readonly, nonatomic) float focusDistance;


-(BOOL)isDiscrete;
-(NSUInteger)trackType;
-(id)_asCinematographyDictionary;
-(id)_calculateTimeRanges;
-(id)_fixedFocusDetectionAtTime:(struct ? )arg0 ;
-(id)_initWithCinematographyDictionary:(id)arg0 ;
-(id)detectionAtOrBeforeTime:(struct ? )arg0 ;
-(id)detectionInFrame:(id)arg0 ;
-(id)detectionNearestTime:(struct ? )arg0 ;
-(id)detectionsInTimeRange:(struct ? )arg0 ;
-(id)initWithDetection:(id)arg0 ;
-(id)initWithFocusDistance:(float)arg0 ;


@end


#endif