// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYTIMELINELAYOUT_H
#define PXSTORYTIMELINELAYOUT_H

@class NSMutableIndexSet, NSMutableOrderedSet, NSMutableDictionary, NSString, NSIndexSet;
@protocol PXChangeObserver, PXTapToRadarDiagnosticProvider, PXStoryTimeline;


#import "PXGAbsoluteCompositeLayout.h"
#import "PXStoryTimelineLayoutSnapshot.h"
#import "PXStoryViewModeTransition.h"

@interface PXStoryTimelineLayout : PXGAbsoluteCompositeLayout <PXChangeObserver, PXTapToRadarDiagnosticProvider>

 {
    ? _updateFlags;
    NSMutableIndexSet *_clipIdentifiers;
    NSMutableOrderedSet *_clipLayoutReuseIdentifiers;
    NSMutableDictionary *_clipLayoutReuseIdentifiersByClipIdentifier;
    BOOL _isUpdatingTimelineContent;
}


@property (nonatomic) UIEdgeInsets clippingInsets; // ivar: _clippingInsets
@property (nonatomic) ? clipsCornerRadius; // ivar: _clipsCornerRadius
@property (nonatomic) ? cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) ? displayedTimeRange; // ivar: _displayedTimeRange
@property (retain, nonatomic) NSObject<PXStoryTimeline> *displayedTimeline; // ivar: _displayedTimeline
@property (nonatomic) CGRect displayedTimelineRect; // ivar: _displayedTimelineRect
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXStoryTimelineLayoutSnapshot *presentedSnapshot;
@property (retain, nonatomic) PXStoryViewModeTransition *presentedTimelineTransition; // ivar: _presentedTimelineTransition
@property (nonatomic) CGFloat relativeZPositionAboveLegibilityGradients; // ivar: _relativeZPositionAboveLegibilityGradients
@property (readonly, nonatomic) BOOL shouldSetContentSizeToReferenceSize;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSIndexSet *supportedResourceKindsForClipLayouts; // ivar: _supportedResourceKindsForClipLayouts
@property (readonly, nonatomic) NSInteger viewMode;


-(CGFloat)alphaForClipLayout:(id)arg0 ;
-(CGFloat)proposedZPositionForClipLayoutWithClipIdentifier:(NSInteger)arg0 ;
-(NSInteger)_sublayoutIndexForClipWithIdentifier:(NSInteger)arg0 ;
-(id)existingLayoutForClipWithIdentifier:(NSInteger)arg0 ;
-(id)init;
-(void)_invalidateContent;
-(void)_updateContent;
-(void)alphaDidChange;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)configureClipLayout:(id)arg0 ;
-(void)configureClipLayoutReuseIdentifier:(id)arg0 ;
-(void)didUpdate;
-(void)didUpdateClipLayout:(id)arg0 frame:(struct CGRect )arg1 ;
-(void)didUpdateTimelineContent;
-(void)enumerateClipLayouts:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
-(void)update;
-(void)willUpdate;
-(void)willUpdateTimelineContent;


@end


#endif