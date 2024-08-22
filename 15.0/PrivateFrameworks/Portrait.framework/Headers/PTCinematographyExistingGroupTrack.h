// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTCINEMATOGRAPHYEXISTINGGROUPTRACK_H
#define PTCINEMATOGRAPHYEXISTINGGROUPTRACK_H

@class NSArray;


#import "PTCinematographyExistingTrack.h"

@interface PTCinematographyExistingGroupTrack : PTCinematographyExistingTrack

@property (readonly, nonatomic) NSArray *trackDecisions; // ivar: _trackDecisions


-(id)_calculateTrackDecisions;
-(id)detectionAtOrBeforeTime:(struct ? )arg0 ;
-(id)detectionInFrame:(id)arg0 ;
-(id)initWithDetectionType:(NSUInteger)arg0 groupIdentifier:(NSInteger)arg1 ;
-(id)trackDecisionsInTimeRange:(struct ? )arg0 ;


@end


#endif