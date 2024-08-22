// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTCINEMATOGRAPHYFRAMEDETECTIONS_H
#define PTCINEMATOGRAPHYFRAMEDETECTIONS_H

@class NSArray, NSNumber, NSDictionary;

#import <Foundation/Foundation.h>

#import "PTCinematographyDetection.h"

@interface PTCinematographyFrameDetections : NSObject

@property (readonly) NSArray *allFocusIdentifiers;
@property (readonly) NSArray *allTrackIdentifiers;
@property (readonly) NSArray *allTrackIdentifiersForCinematicChoice;
@property (readonly) PTCinematographyDetection *autoFocusDetection;
@property (retain) NSNumber *baseFocusTrackNumberOverride; // ivar: _baseFocusTrackNumberOverride
@property (retain) PTCinematographyDetection *cachedAutoFocusDetection; // ivar: _cachedAutoFocusDetection
@property (retain) PTCinematographyDetection *cachedCustomDetection; // ivar: _cachedCustomDetection
@property (readonly) NSDictionary *cachedDetectionsByFocusIdentifier; // ivar: _cachedDetectionsByFocusIdentifier
@property (readonly) NSDictionary *cachedDetectionsByTrackIdentifier; // ivar: _cachedDetectionsByTrackIdentifier
@property (readonly) PTCinematographyDetection *customDetection;
@property (readonly) NSArray *detections; // ivar: _detections
@property (readonly) NSNumber *detectorDidRun; // ivar: _detectorDidRun
@property BOOL didCacheAutoFocusDetection; // ivar: _didCacheAutoFocusDetection
@property BOOL didCacheCustomDetection; // ivar: _didCacheCustomDetection
@property ? presentationTime; // ivar: _presentationTime


+(id)frameDetections:(id)arg0 detectorDidRun:(id)arg1 presentationTime:(struct ? )arg2 ;
-(id)bestDetectionForGroupIdentifier:(NSInteger)arg0 ;
-(id)bestDetectionForGroupIdentifier:(NSInteger)arg0 options:(NSUInteger)arg1 ;
-(id)debugDescription;
-(id)detectionForFocusIdentifier:(id)arg0 ;
-(id)detectionForTrackIdentifier:(NSInteger)arg0 ;
-(id)initWithDetections:(id)arg0 detectorDidRun:(id)arg1 presentationTime:(struct ? )arg2 ;
-(void)addDetection:(id)arg0 ;
-(void)flushCachedDetectionsDictionaries;


@end


#endif