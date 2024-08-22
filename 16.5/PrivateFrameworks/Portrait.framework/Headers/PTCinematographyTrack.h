// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTCINEMATOGRAPHYTRACK_H
#define PTCINEMATOGRAPHYTRACK_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "PTCinematographyScript.h"

@interface PTCinematographyTrack : NSObject

@property (readonly, nonatomic) NSString *cachedTrackIdentifierString; // ivar: _cachedTrackIdentifierString
@property (readonly, nonatomic) NSUInteger detectionType; // ivar: _detectionType
@property (readonly, nonatomic, getter=isDiscrete) BOOL discrete;
@property (readonly, nonatomic) NSInteger groupIdentifier; // ivar: _groupIdentifier
@property (weak, nonatomic) PTCinematographyScript *script; // ivar: _script
@property (readonly, nonatomic) NSArray *timeRanges; // ivar: _timeRanges
@property (readonly, nonatomic) NSInteger trackIdentifier; // ivar: _trackIdentifier
@property (readonly, nonatomic) NSUInteger trackType;
@property (nonatomic, getter=isUserCreated) BOOL userCreated; // ivar: _userCreated


-(NSUInteger)timeRangeCount;
-(id)_asCinematographyDictionary;
-(id)_asMutableCinematographyDictionary;
-(id)_calculateTimeRanges;
-(id)_initWithCinematographyDictionary:(id)arg0 ;
-(id)_trackByTrimmingToTimeRange:(struct ? )arg0 subtracting:(struct ? )arg1 ;
-(id)debugTrackIdentifierString;
-(id)detectionAtOrBeforeTime:(struct ? )arg0 ;
-(id)detectionInFrame:(id)arg0 ;
-(id)detectionNearestTime:(struct ? )arg0 ;
-(id)detectionsInTimeRange:(struct ? )arg0 ;
-(id)init;
-(id)initWithDetectionType:(NSUInteger)arg0 ;
-(struct ? )timeRange;
-(struct ? )timeRangeAtIndex:(NSUInteger)arg0 ;
-(struct ? )timeRangeEndForTime:(struct ? )arg0 ;
-(struct ? )timeRangeForTime:(struct ? )arg0 ;
-(void)_addStartTime:(struct ? )arg0 endTime:(struct ? )arg1 toTimeRanges:(id)arg2 ;


@end


#endif