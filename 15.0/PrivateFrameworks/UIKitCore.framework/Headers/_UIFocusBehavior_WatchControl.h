// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSBEHAVIOR_WATCHCONTROL_H
#define _UIFOCUSBEHAVIOR_WATCHCONTROL_H

@class NSString;
@protocol _UIFocusBehavior;

#import <Foundation/Foundation.h>


@interface _UIFocusBehavior_WatchControl : NSObject <_UIFocusBehavior>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)watchControlIsEnabled;
+(id)sharedInstance;
-(BOOL)controlCanBecomeFocused:(id)arg0 ;
-(BOOL)defaultValueForSelectionFollowsFocusInCollectionView:(id)arg0 ;
-(BOOL)defaultValueForSelectionFollowsFocusInTableView:(id)arg0 ;
-(BOOL)enforcesStrictTargetContentOffsetAdjustmentBehavior;
-(BOOL)honorsFocusSystemEnabledInfoPlistKey;
-(BOOL)ignoresKeyWindowStatusWhenRestoringFocus;
-(BOOL)includesContentScrollViewInPreferredFocusEnvironments;
-(BOOL)preventsCellFocusabilityWhileEditing;
-(BOOL)searchBarTextFieldCanBecomeFocused;
-(BOOL)shouldConvertIndirectTapsIntoArrowKeys;
-(BOOL)shouldEnableFocusOnSelect;
-(BOOL)shouldSupressIndirectMovementOnSelect;
-(BOOL)shouldUseAccessibilityCompareForItemGeometry;
-(BOOL)showsFocusRingForItem:(id)arg0 ;
-(BOOL)supportViewTransparencyAndMultipleWindows;
-(BOOL)supportsArrowKeys;
-(BOOL)supportsClipToBounds;
-(BOOL)supportsFocusGroups;
-(BOOL)supportsGameControllers;
-(BOOL)supportsIndirectPanningMovement;
-(BOOL)supportsLinearMovementDebugOverlay;
-(BOOL)supportsParentFocusRings;
-(BOOL)supportsTabKey;
-(BOOL)syncsFocusAndResponder;
-(BOOL)tabBarButtonCanBecomeFocused;
-(BOOL)tabBarCanBecomeFocused;
-(BOOL)tabBasedMovementLoops;
-(BOOL)textViewCanBecomeFocused:(id)arg0 ;
-(BOOL)throttlesProgrammaticFocusUpdates;
-(BOOL)treatFirstAndLastHeadingsAsGlobal;
-(BOOL)treatFocusableItemAsLeaf;
-(BOOL)wantsFocusSystemForScene:(id)arg0 ;
-(BOOL)wantsTreeLocking;
-(NSInteger)buttonSelectionMode;
-(NSInteger)cellFocusability;
-(NSInteger)deliverKeyEventsToFocusEngine;
-(NSInteger)focusCastingMode;
-(NSInteger)focusDeferral;
-(NSInteger)focusRingVisibility;
-(NSInteger)indirectMovementPriority;
-(NSInteger)requiredInputDevices;
-(NSInteger)skipKeyCommandsForKeyEvents;


@end


#endif