// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYFULLSIZELAYOUT_H
#define PXSTORYFULLSIZELAYOUT_H

@class NSString, NSMutableIndexSet, NSDictionary;
@protocol PXStoryTransitionSource, PXGEntityChangeObserver, PXChangeObserver, PXTapToRadarDiagnosticProvider, PXStoryStyleDescriptor;


#import "PXStoryModelTimelineLayout.h"
#import "PXGEffect.h"
#import "PXStoryTransitionController.h"

@interface PXStoryFullsizeLayout : PXStoryModelTimelineLayout <PXStoryTransitionSource, PXGEntityChangeObserver, PXChangeObserver, PXTapToRadarDiagnosticProvider>

 {
    ? _updateFlags;
    ? _timelineContentUpdateFlags;
    ? _timelineContentPostUpdateFlags;
    ? _postUpdateFlags;
    unsigned int _transitionEffectSpriteIndex;
    unsigned int _transitionAuxiliaryEffectSpriteIndex;
}


@property (nonatomic) ? activeTransition; // ivar: _activeTransition
@property (retain, nonatomic) PXGEffect *auxiliaryTransitionEffect; // ivar: _auxiliaryTransitionEffect
@property (nonatomic) CGFloat auxiliaryTransitionEffectAlpha; // ivar: _auxiliaryTransitionEffectAlpha
@property (nonatomic) ? cornerRadiusOverride; // ivar: _cornerRadiusOverride
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXStoryStyleDescriptor> *overrideStyleInfo; // ivar: _overrideStyleInfo
@property (readonly, nonatomic) NSMutableIndexSet *previouslyReportedClipIdentifiers; // ivar: _previouslyReportedClipIdentifiers
@property (nonatomic) ? strictVisibleTimeRange; // ivar: _strictVisibleTimeRange
@property (nonatomic) CGRect strictVisibleTimelineRect; // ivar: _strictVisibleTimelineRect
@property (readonly) Class superclass;
@property (nonatomic) CGFloat textAlpha; // ivar: _textAlpha
@property (retain, nonatomic) PXStoryTransitionController *transitionController; // ivar: _transitionController
@property (retain, nonatomic) PXGEffect *transitionEffect; // ivar: _transitionEffect
@property (nonatomic) CGFloat transitionEffectAlpha; // ivar: _transitionEffectAlpha
@property (readonly, nonatomic) CGRect transitionViewport;
@property (retain, nonatomic) NSDictionary *zPositionsByClipIdentifier; // ivar: _zPositionsByClipIdentifier


-(CGFloat)alphaForClipLayout:(id)arg0 ;
-(CGFloat)proposedZPositionForClipLayoutWithClipIdentifier:(NSInteger)arg0 ;
-(NSInteger)viewMode;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(id)initWithModel:(id)arg0 overrideStyleInfo:(id)arg1 ;
-(id)layoutForClipWithIdentifier:(NSInteger)arg0 ;
-(id)presentedSnapshot;
-(void)_invalidateActiveTransition;
-(void)_invalidateClipZPositions;
-(void)_invalidateTransitionController;
-(void)_invalidateTransitionEffectSprites;
-(void)_invalidateVisibleClipsReporting;
-(void)_invalidateVisibleSegmentIdentifiers;
-(void)_updateActiveTransition;
-(void)_updateClipZPositions;
-(void)_updateTransitionController;
-(void)_updateTransitionEffectSprites;
-(void)_updateVisibleClipsReporting;
-(void)_updateVisibleSegmentIdentifiers;
-(void)applyTransitionEffectAlpha:(CGFloat)arg0 auxiliaryEffectAlpha:(CGFloat)arg1 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)configureClipLayout:(id)arg0 ;
-(void)didBeginTransitionWithEffect:(id)arg0 auxiliaryEffect:(id)arg1 ;
-(void)didEndTransitionWithEffect:(id)arg0 auxiliaryEffect:(id)arg1 ;
-(void)didUpdateTimelineContent;
-(void)displayedTimelineDidChange;
-(void)entityManager:(id)arg0 componentDidChange:(id)arg1 ;
-(void)entityManagerDidChange;
-(void)getDetailedPresentedPlacement:(id)arg0 forItemReference:(id)arg1 ;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceSizeDidChange;
-(void)setDetailedPlacementOverride:(id)arg0 forItemReference:(id)arg1 ;
-(void)update;
-(void)updateClipsCornerRadius;
-(void)updateDisplayedTimeRange;
-(void)updateDisplayedTimeline;
-(void)updateDisplayedTimelineRect;
-(void)updatePresentedTimelineTransition;
-(void)willUpdateTimelineContent;


@end


#endif