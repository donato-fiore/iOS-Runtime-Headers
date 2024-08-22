// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTCINEMATOGRAPHYEXISTINGTRACK_H
#define PTCINEMATOGRAPHYEXISTINGTRACK_H



#import "PTCinematographyTrack.h"

@interface PTCinematographyExistingTrack : PTCinematographyTrack



-(BOOL)isDiscrete;
-(NSUInteger)trackType;
-(id)detectionAtOrBeforeTime:(struct ? )arg0 ;
-(id)detectionInFrame:(id)arg0 ;
-(id)detectionNearestTime:(struct ? )arg0 ;
-(id)detectionsInTimeRange:(struct ? )arg0 ;
-(id)initWithDetectionType:(NSUInteger)arg0 trackIdentifier:(NSInteger)arg1 groupIdentifier:(NSInteger)arg2 ;


@end


#endif