// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTCINEMATOGRAPHYFRAMEDETECTIONSMOOTHER_H
#define PTCINEMATOGRAPHYFRAMEDETECTIONSMOOTHER_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "PTCinematographyDetection.h"

@interface PTCinematographyFrameDetectionSmoother : NSObject

@property BOOL didCacheIsNextFrameAvailable; // ivar: _didCacheIsNextFrameAvailable
@property BOOL didEndFrames; // ivar: _didEndFrames
@property (retain) NSMutableDictionary *firstFocusSmootherByTrackNumber; // ivar: _firstFocusSmootherByTrackNumber
@property (retain) NSMutableArray *frames; // ivar: _frames
@property (readonly) BOOL isNextFrameAtEnd;
@property (readonly) BOOL isNextFrameAvailable;
@property BOOL isNextFrameAvailableCache; // ivar: _isNextFrameAvailableCache
@property (retain) PTCinematographyDetection *lastKnownFocusDetection; // ivar: _lastKnownFocusDetection


-(BOOL)_computeIsNextFrameAvailable;
-(id)_activeTrackNumbers;
-(id)_focusSmootherForAppendingWithTrackIdentifier:(NSInteger)arg0 ;
-(id)_focusSmootherForReadingWithTrackIdentifier:(NSInteger)arg0 ;
-(id)_newFocusSmoother;
-(id)init;
-(id)nextFrame;
-(void)_dropAllFocusSmoothersIfLeaked;
-(void)_endFocusSmoothersForTrackNumbers:(id)arg0 ;
-(void)_invalidateIsNextFrameAvailableCache;
-(void)_reinit;
-(void)_skipToNextFocusSmootherWithTrackIdentifier:(NSInteger)arg0 ;
-(void)_updateFocusDetectionForFrame:(id)arg0 ;
-(void)addFrame:(id)arg0 ;
-(void)endFrames;


@end


#endif