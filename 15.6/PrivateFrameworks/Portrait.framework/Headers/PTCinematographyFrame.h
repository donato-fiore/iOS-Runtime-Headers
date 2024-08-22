// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTCINEMATOGRAPHYFRAME_H
#define PTCINEMATOGRAPHYFRAME_H

@class NSSet, NSNumber, NSArray, NSDictionary, NSString;
@protocol PTSerialization;

#import <Foundation/Foundation.h>

#import "PTCinematographyFocusBlend.h"
#import "PTCinematographyDetection.h"

@interface PTCinematographyFrame : NSObject <PTSerialization>



@property (readonly, nonatomic) NSSet *_detectionTrackNumberSet;
@property (retain, nonatomic, setter=_setDetectorDidRun:) NSNumber *_detectorDidRun;
@property (retain, nonatomic, setter=_setDetectorDidRun:) NSNumber *_detectorDidRun; // ivar: _detectorDidRun
@property (retain, nonatomic, setter=_setFrameNumber:) NSNumber *_frameNumber;
@property (retain, nonatomic, setter=_setFrameNumber:) NSNumber *_frameNumber; // ivar: _frameNumber
@property (retain, nonatomic, setter=_setSnapshot:) id *_snapshot;
@property (retain, nonatomic, setter=_setSnapshot:) id *_snapshot; // ivar: _snapshot
@property (nonatomic, setter=_setSnapshotPolicy:) NSUInteger _snapshotPolicy;
@property (nonatomic, setter=_setSnapshotPolicy:) NSUInteger _snapshotPolicy; // ivar: _snapshotPolicy
@property (retain, nonatomic) NSArray *allDetections;
@property (retain, nonatomic) NSArray *allDetections; // ivar: _allDetections
@property (nonatomic) float aperture; // ivar: _aperture
@property (retain, nonatomic) NSNumber *baseFocusTrackNumber;
@property (retain, nonatomic) NSNumber *baseFocusTrackNumber; // ivar: _baseFocusTrackNumber
@property (readonly, nonatomic) NSDictionary *cachedDetectionsByFocusIdentifier; // ivar: _cachedDetectionsByFocusIdentifier
@property (readonly, nonatomic) NSDictionary *cachedDetectionsByTrackIdentifier; // ivar: _cachedDetectionsByTrackIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PTCinematographyFocusBlend *focusBlend; // ivar: _focusBlend
@property (retain, nonatomic) PTCinematographyDetection *focusDetection;
@property (retain, nonatomic) PTCinematographyDetection *focusDetection; // ivar: _focusDetection
@property (nonatomic) float focusDistance; // ivar: _focusDistance
@property (readonly, nonatomic) NSInteger focusGroupIdentifier;
@property (readonly, nonatomic, getter=isFocusStrong) BOOL focusStrong;
@property (readonly, nonatomic) NSInteger focusTrackIdentifier;
@property (retain, nonatomic) NSNumber *focusTrackNumber;
@property (retain, nonatomic) NSNumber *focusTrackNumber; // ivar: _focusTrackNumber
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInTransition;
@property (nonatomic) float rawFocusDistance;
@property (nonatomic) float rawFocusDistance; // ivar: _rawFocusDistance
@property (readonly) Class superclass;
@property (nonatomic) ? time; // ivar: _time
@property (nonatomic) float transitionCoefficient;
@property (nonatomic) float transitionCoefficient; // ivar: _transitionCoefficient
@property (nonatomic) float transitionDuration;
@property (nonatomic) float transitionDuration; // ivar: _transitionDuration
@property (nonatomic) float transitionElapsedTime;
@property (nonatomic) float transitionElapsedTime; // ivar: _transitionElapsedTime
@property (nonatomic, getter=isUserFocusEnd) BOOL userFocusEnd;
@property (nonatomic, getter=isUserFocusEnd) BOOL userFocusEnd; // ivar: _userFocusEnd
@property (nonatomic, getter=isUserFocusGroup) BOOL userFocusGroup;
@property (nonatomic, getter=isUserFocusGroup) BOOL userFocusGroup; // ivar: _userFocusGroup
@property (nonatomic, getter=isUserFocusStrong) BOOL userFocusStrong;
@property (nonatomic, getter=isUserFocusStrong) BOOL userFocusStrong; // ivar: _userFocusStrong
@property (retain, nonatomic) NSNumber *userFocusTrackNumber;
@property (retain, nonatomic) NSNumber *userFocusTrackNumber; // ivar: _userFocusTrackNumber


+(id)_frameFromInnerAtomStream:(id)arg0 ;
+(id)_frameHeaderFromAtomStream:(id)arg0 ;
+(id)_framesWithCinematographyDictionaries:(id)arg0 ;
+(id)objectFromAtomStream:(id)arg0 ;
+(void)_debugLogFrame:(id)arg0 label:(id)arg1 ;
+(void)_debugLogFrames:(id)arg0 label:(id)arg1 ;
+(void)initialize;
+(void)registerForSerialization;
-(BOOL)_copyToFrameHeaderData_0:(struct FrameHeaderData_0 *)arg0 ;
-(BOOL)_writeHeaderToAtomWriter:(id)arg0 options:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsVersion:(NSUInteger)arg0 ;
-(BOOL)writeToAtomWriter:(id)arg0 options:(id)arg1 ;
-(NSUInteger)sizeOfSerializedObjectWithOptions:(id)arg0 ;
-(id)_asCinematographyDictionary;
-(id)_detectionsByFocusIdentifier;
-(id)_detectionsByTrackIdentifier;
-(id)_focusDetectionFromCoefficientsDictionary:(id)arg0 coefficient:(*float)arg1 ;
-(id)_initWithCinematographyDictionary:(id)arg0 ;
-(id)_initWithCinematographyDictionary:(id)arg0 time:(struct ? )arg1 ;
-(id)_initWithFrameHeaderData_0:(struct FrameHeaderData_0 *)arg0 ;
-(id)asCinematographyDictionary;
-(id)bestDetectionForGroupIdentifier:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)detectionAtPoint:(struct CGPoint )arg0 ;
-(id)detectionForFocusIdentifier:(id)arg0 ;
-(id)detectionForTrack:(id)arg0 ;
-(id)detectionForTrackIdentifier:(NSInteger)arg0 ;
-(id)detectionForTrackNumber:(id)arg0 ;
-(id)detections;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)primaryFocusDetection;
-(void)_addDetection:(id)arg0 ;
-(void)_flushCachedDetectionsDictionaries;
-(void)_focusFromDetection:(id)arg0 toDetection:(id)arg1 rawFocusDistance:(float)arg2 focusDistance:(float)arg3 transitionCoefficient:(float)arg4 elapsedTime:(float)arg5 duration:(float)arg6 ;
-(void)_removeDetection:(id)arg0 ;
-(void)_removeDetectionWithTrackIdentifier:(NSInteger)arg0 ;
-(void)_restoreOriginal;
-(void)_updateDetectionTimes;
-(void)focusOnDetection:(id)arg0 ;
-(void)focusOnDetection:(id)arg0 focusPuller:(id)arg1 ;
-(void)focusOnNothing;
-(void)setDetections:(id)arg0 ;


@end


#endif