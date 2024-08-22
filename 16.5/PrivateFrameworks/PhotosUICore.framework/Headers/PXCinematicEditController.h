// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCINEMATICEDITCONTROLLER_H
#define PXCINEMATICEDITCONTROLLER_H

@class PHAsset, PTCinematographyScript, PLVideoEditSource, NSOrderedSet, NSDictionary, NSArray;
@protocol PXCinematicEditControllerDelegate, PXFocusTimelineController, PTCinematographyScriptChanges;

#import <Foundation/Foundation.h>


@interface PXCinematicEditController : NSObject

@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (nonatomic) BOOL cinematicAdjustmentActive;
@property (nonatomic) CGFloat cinematicAperture;
@property (nonatomic) NSInteger cinematicDebugMode;
@property (retain, nonatomic) PTCinematographyScript *cinematographyScript; // ivar: _cinematographyScript
@property (weak, nonatomic) NSObject<PXCinematicEditControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PLVideoEditSource *editSource; // ivar: _editSource
@property (retain, nonatomic) NSOrderedSet *focusEventTimes; // ivar: _focusEventTimes
@property (weak, nonatomic) NSObject<PXFocusTimelineController> *focusTimelineDelegate; // ivar: _focusTimelineDelegate
@property (readonly, nonatomic) CGFloat maximumCinematicAperture;
@property (nonatomic) CGFloat metadataAperture; // ivar: _metadataAperture
@property (readonly, nonatomic) CGFloat minimumCinematicAperture;
@property (readonly, nonatomic) CGFloat originalAperture;
@property (retain, nonatomic) NSDictionary *savedManualFocusCinematographyState; // ivar: _savedManualFocusCinematographyState
@property (weak, nonatomic) NSObject<PTCinematographyScriptChanges> *scriptChangesDelegate; // ivar: _scriptChangesDelegate
@property (retain, nonatomic) NSArray *uneditedUserDecisions; // ivar: _uneditedUserDecisions


-(BOOL)canToggleBackToUserFocusState;
-(BOOL)isInAutoFocusState;
-(id)axDescriptionForFocusDecisionAtTime:(struct ? )arg0 ;
-(id)cinematographyState;
-(id)compositionController;
-(void)_dumpAllFrames;
-(void)_updatePortraitVideoAdjustmentFromCinematography;
-(void)cinematographyWasEdited;
-(void)cinematographyWasEditedAtTime:(struct ? )arg0 ;
-(void)removeFocusDecisionAtTime:(struct ? )arg0 ;
-(void)resetToAsShotState;
-(void)resetToCinematographyState:(id)arg0 ;
-(void)toggleAutoFocusState;
-(void)updateFocusDecisions;
-(void)updateFocusDecisionsAnimatedAtTime:(struct ? )arg0 ;


@end


#endif