// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSNAPPINGCONTROLLER_H
#define PXSNAPPINGCONTROLLER_H


#import <Foundation/Foundation.h>


@interface PXSnappingController : NSObject

@property (nonatomic, setter=_setAccumulatedOffset:) CGFloat _accumulatedOffset; // ivar: __accumulatedOffset
@property (nonatomic, setter=_setHasEnteredAttractionThreshold:) BOOL _hasEnteredAttractionThreshold; // ivar: __hasEnteredAttractionThreshold
@property (nonatomic, setter=_setHasEnteredRetentionThreshold:) BOOL _hasEnteredRetentionThreshold; // ivar: __hasEnteredRetentionThreshold
@property (nonatomic, setter=_setPreviousOffset:) CGFloat _previousOffset; // ivar: __previousOffset
@property (nonatomic, getter=_isPreviousOffsetInvalid, setter=_setPreviousOffsetInvalid:) BOOL _previousOffsetInvalid; // ivar: __previousOffsetInvalid
@property (nonatomic) BOOL accumulateOffsetWhileSnapped; // ivar: _accumulateOffsetWhileSnapped
@property (nonatomic) CGFloat attractionOffsetThreshold; // ivar: _attractionOffsetThreshold
@property (nonatomic) CGFloat attractionVelocityThreshold; // ivar: _attractionVelocityThreshold
@property (nonatomic) CGFloat retentionOffsetThreshold; // ivar: _retentionOffsetThreshold
@property (readonly, nonatomic, getter=isSnappedToTarget) BOOL snappedToTarget; // ivar: _snappedToTarget
@property (readonly, nonatomic) CGFloat snappingTarget; // ivar: _snappingTarget


-(BOOL)_isOffset:(CGFloat)arg0 inThreshold:(CGFloat)arg1 ;
-(id)init;
-(id)initWithSnappingTarget:(CGFloat)arg0 ;
-(void)_reset;
-(void)_setBoolPointer:(*BOOL)arg0 toValue:(BOOL)arg1 ;
-(void)didSnapByAttraction;
-(void)interactionBegan;
-(void)interactionEnded;
-(void)updateOffset:(*CGFloat)arg0 withVelocity:(CGFloat)arg1 shouldSnap:(*BOOL)arg2 shouldBreak:(*BOOL)arg3 ;


@end


#endif