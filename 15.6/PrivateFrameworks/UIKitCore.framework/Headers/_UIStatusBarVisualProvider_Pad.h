// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARVISUALPROVIDER_PAD_H
#define _UISTATUSBARVISUALPROVIDER_PAD_H

@class iOS, NSString, NSLayoutConstraint, NSDictionary;
@protocol _UIStatusBarRegionCursorInsetProvider;


#import "_UIStatusBarDisplayItemPlacement.h"
#import "_UIStatusBar.h"

@interface _UIStatusBarVisualProvider_Pad : iOS <_UIStatusBarRegionCursorInsetProvider>



@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *datePlacement; // ivar: _datePlacement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDirectionalEdgeInsets expandedEdgeInsets;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *leadingRegionTrailingAnchorConstraint; // ivar: _leadingRegionTrailingAnchorConstraint
@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // ivar: _orderedDisplayItemPlacements
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *timePlacement; // ivar: _timePlacement
@property (retain, nonatomic) NSLayoutConstraint *trailingRegionLeadingAnchorConstraint; // ivar: _trailingRegionLeadingAnchorConstraint


+(BOOL)regionCursorIsPill;
+(CGFloat)baselineOffset;
+(CGFloat)height;
+(CGFloat)regionCursorCornerRadius;
+(Class)visualProviderSubclassForScreen:(id)arg0 visualProviderInfo:(id)arg1 ;
+(struct NSDirectionalEdgeInsets )edgeInsets;
+(struct UIEdgeInsets )regionCursorInsets;
-(BOOL)_updateDateAndTimePlacements;
-(CGFloat)airplaneShouldFadeForAnimationType:(NSInteger)arg0 ;
-(CGFloat)airplaneSpeedForAnimationType:(NSInteger)arg0 ;
-(CGFloat)airplaneTravelOffsetInProposedPartWithIdentifier:(*id)arg0 animationType:(NSInteger)arg1 ;
-(CGFloat)regionSpacing;
-(id)displayItemIdentifiersForPartWithIdentifier:(id)arg0 ;
-(id)expandedFont;
-(id)init;
-(id)normalFont;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg0 ;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg0 ;
-(id)pillFont;
-(id)pillSmallFont;
-(id)regionIdentifiersForPartWithIdentifier:(id)arg0 ;
-(id)setupInContainerView:(id)arg0 ;
-(id)styleAttributesForStyle:(NSInteger)arg0 ;
-(struct CGSize )pillSize;
-(struct CGSize )smallPillSize;
-(void)_dateTimePreferencesUpdated;
-(void)_updateConstraintsForAvoidanceFrame:(struct CGRect )arg0 ;
-(void)actionable:(id)arg0 highlighted:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(void)avoidanceFrameUpdatedFromFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)itemCreated:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)sizeUpdatedFromSize:(struct CGSize )arg0 ;


@end


#endif