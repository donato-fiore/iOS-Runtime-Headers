// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXGESTURERECORDERFINGERPATHCOLLECTION_H
#define AXGESTURERECORDERFINGERPATHCOLLECTION_H

@class NSMutableArray, AXMutableReplayableGesture, NSMutableDictionary;
@protocol AXGestureRecorderFingerPathCollectionDelegate;

#import <Foundation/Foundation.h>


@interface AXGestureRecorderFingerPathCollection : NSObject

@property (weak, nonatomic) NSObject<AXGestureRecorderFingerPathCollectionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *fingerPaths; // ivar: _fingerPaths
@property (readonly, nonatomic) NSUInteger fingerPathsCount;
@property (retain, nonatomic) NSMutableArray *forcesArrays; // ivar: _forcesArrays
@property (nonatomic) CGFloat maximumFingerLineWidth; // ivar: _maximumFingerLineWidth
@property (nonatomic) NSUInteger maximumFingerPathsCount; // ivar: _maximumFingerPathsCount
@property (nonatomic) CGFloat minimumFingerLineWidth; // ivar: _minimumFingerLineWidth
@property (retain, nonatomic) NSMutableArray *pointsArrays; // ivar: _pointsArrays
@property (readonly, nonatomic) NSMutableArray *referenceTimesArray;
@property (nonatomic) NSUInteger referenceTimesArrayIndex; // ivar: _referenceTimesArrayIndex
@property (retain, nonatomic) AXMutableReplayableGesture *replayableGesture; // ivar: _replayableGesture
@property (nonatomic) BOOL shouldRecordRealTimeGesture; // ivar: _shouldRecordRealTimeGesture
@property (retain, nonatomic) NSMutableArray *timesArrays; // ivar: _timesArrays
@property (readonly, nonatomic) NSUInteger timestampsCount;
@property (retain, nonatomic) NSMutableDictionary *touchPathIndicesToFingerPathIndices; // ivar: _touchPathIndicesToFingerPathIndices


-(CGFloat)timestampAtIndex:(NSUInteger)arg0 ;
-(id)_bezierPathToAppendForTouchLocation:(struct CGPoint )arg0 unnamedValue:(CGFloat)arg1 optionalPreviousTouchLocation:(id)arg2 optionalPreviousForce:(id)arg3 ;
-(id)_nonRealTimeFingerPathToAppendForIndex:(NSUInteger)arg0 upToPositionForTimestampAtIndex:(NSUInteger)arg1 ;
-(id)_realTimeFingerPathToAppendForIndex:(NSUInteger)arg0 upToPositionForTimestampAtIndex:(NSUInteger)arg1 ;
-(id)fingerPathAtIndex:(NSUInteger)arg0 ;
-(id)fingerPathToAppendForIndex:(NSUInteger)arg0 forTimestampAtIndex:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithMaximumFingerPathsCount:(NSUInteger)arg0 ;
-(id)propertyListRepresentationWithName:(id)arg0 ;
-(struct CGPoint )_interfaceOrientedScreenPointForPoint:(struct CGPoint )arg0 view:(id)arg1 ;
-(void)_addPointsToReplayableGesture:(id)arg0 forces:(id)arg1 time:(CGFloat)arg2 ;
-(void)_didInsertFingerPathAtIndex:(NSUInteger)arg0 ;
-(void)_didUpdateFingerPathAtIndex:(NSUInteger)arg0 ;
-(void)appendFingerPathsFromFingerPathCollection:(id)arg0 ;
-(void)appendPointsForTouches:(id)arg0 referenceView:(id)arg1 time:(CGFloat)arg2 ;
-(void)dealloc;
-(void)handleLiftForTouches:(id)arg0 referenceView:(id)arg1 time:(CGFloat)arg2 ;
-(void)reset;


@end


#endif