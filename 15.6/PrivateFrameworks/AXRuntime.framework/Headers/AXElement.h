// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXELEMENT_H
#define AXELEMENT_H

@class NSString, NSArray, NSDictionary, NSURL;
@protocol AXGroupable;

#import <Foundation/Foundation.h>

#import "AXElement.h"
#import "AXElementGroup.h"
#import "AXUIElement.h"

@interface AXElement : NSObject <AXGroupable>



@property (readonly, nonatomic) AXElement *accessibilityUIServerApplication;
@property (readonly, nonatomic) AXElement *application;
@property (readonly, nonatomic) BOOL applicationIsModal;
@property (readonly, nonatomic) NSInteger applicationOrientation;
@property (nonatomic) BOOL assistiveTechFocused;
@property (retain, nonatomic) AXElement *autoscrollTarget;
@property (readonly, nonatomic) NSString *bundleId;
@property (nonatomic) CGRect cachedFrame; // ivar: _cachedFrame
@property (retain, nonatomic) *CGPath cachedPath; // ivar: _cachedPath
@property (retain, nonatomic) AXElement *cachedRemoteParent; // ivar: _cachedRemoteParent
@property (retain, nonatomic) AXElement *cachedRemoteParentForContextID; // ivar: _cachedRemoteParentForContextID
@property (nonatomic) CGRect cachedVisibleFrame; // ivar: _cachedVisibleFrame
@property (readonly, nonatomic) BOOL canPerformEscape;
@property (readonly, nonatomic) BOOL canPerformZoom;
@property (readonly, nonatomic) CGPoint centerPoint;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSUInteger containerType;
@property (readonly, nonatomic) AXElement *currentApplication;
@property (readonly, nonatomic) NSArray *currentApplications;
@property (readonly, nonatomic) NSArray *currentApplicationsIgnoringSiri;
@property (readonly, nonatomic) NSArray *customActions;
@property (readonly, nonatomic) NSArray *customContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *drags;
@property (readonly, nonatomic) NSArray *drops;
@property (readonly, nonatomic) AXElement *elementForTextInsertionAndDeletion;
@property (readonly, nonatomic) AXElement *elementParent;
@property (readonly, nonatomic) *__AXUIElement elementRef;
@property (readonly, nonatomic) NSArray *elementsWithSemanticContext;
@property (readonly, nonatomic) NSArray *explorerElements;
@property (readonly, nonatomic) AXElement *firstElementInApplication;
@property (readonly, nonatomic) AXElement *firstElementInApplicationForFocus;
@property (readonly, nonatomic) AXElement *firstResponder;
@property (readonly, nonatomic) CGRect focusableFrameForZoom;
@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) BOOL hasTextEntry;
@property (readonly, nonatomic) BOOL hasVariantKeys;
@property (readonly, nonatomic) BOOL hasWebContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *hint;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isAXUIServer;
@property (readonly, nonatomic) BOOL isAccessibilityOpaqueElementProvider;
@property (readonly, nonatomic) BOOL isAccessibleElement;
@property (readonly, nonatomic) BOOL isAutoscrolling;
@property (readonly, nonatomic) BOOL isComboBox;
@property (readonly, nonatomic) BOOL isControlCenterVisible;
@property (readonly, nonatomic) BOOL isKeyboardKey;
@property (readonly, nonatomic) BOOL isMathEquation;
@property (readonly, nonatomic) BOOL isScannerElement;
@property (readonly, nonatomic) BOOL isScreenLocked;
@property (readonly, nonatomic) BOOL isSpringBoard;
@property (readonly, nonatomic) BOOL isSystemApplication;
@property (readonly, nonatomic) BOOL isSystemWideElement;
@property (readonly, nonatomic) BOOL isTouchContainer;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *localizationBundleID; // ivar: _localizationBundleID
@property (readonly, nonatomic) NSString *localizationBundlePath; // ivar: _localizationBundlePath
@property (readonly, nonatomic) NSString *localizedStringKey; // ivar: _localizedStringKey
@property (readonly, nonatomic) NSString *localizedStringTableName; // ivar: _localizedStringTableName
@property (readonly, nonatomic, getter=isNativeFocused) BOOL nativeFocus;
@property (readonly, nonatomic) AXElement *nativeFocusElement;
@property (readonly, nonatomic) AXElement *nativeFocusPreferredElement;
@property (readonly, nonatomic) NSArray *nativeFocusableElements;
@property (readonly, nonatomic) NSArray *parent;
@property (nonatomic) AXElementGroup *parentGroup; // ivar: _parentGroup
@property (nonatomic, getter=isPassivelyListeningForEvents) BOOL passivelyListeningForEvents;
@property (readonly, nonatomic) *CGPath path;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) AXElement *remoteParent;
@property (readonly, nonatomic) BOOL representsScannerGroup; // ivar: _representsScannerGroup
@property (readonly, nonatomic) BOOL required;
@property (readonly, nonatomic) BOOL respondsToUserInteraction;
@property (readonly, nonatomic) NSString *roleDescription;
@property (readonly, nonatomic) _NSRange rowRange;
@property (readonly, nonatomic) NSInteger scannerActivateBehavior;
@property (readonly, nonatomic) NSUInteger scanningBehaviorTraits;
@property (nonatomic) _NSRange selectedTextRange;
@property (readonly, nonatomic) NSDictionary *semanticContext;
@property (readonly, nonatomic) NSArray *siriContentElementsWithSemanticContext;
@property (readonly, nonatomic) NSArray *siriContentNativeFocusableElements;
@property (readonly, nonatomic) NSString *speakThisString;
@property (readonly, nonatomic) NSString *speechInputLabel;
@property (readonly, nonatomic) AXElement *springBoardApplication;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supportedGestures;
@property (readonly, nonatomic) AXElement *systemApplication;
@property (readonly, nonatomic) CGRect textCursorFrame;
@property (readonly, nonatomic) NSArray *textOperations;
@property (readonly, nonatomic) NSString *textualContext;
@property (readonly, nonatomic) AXElement *touchContainer;
@property (readonly, nonatomic) NSUInteger traits;
@property (readonly, nonatomic) NSArray *typingCandidates;
@property (retain, nonatomic) AXUIElement *uiElement; // ivar: _uiElement
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSArray *userInputLabels;
@property (nonatomic) NSString *value;
@property (readonly, nonatomic) NSArray *variantKeys;
@property (readonly, nonatomic) NSArray *visibleElements;
@property (readonly, nonatomic) CGRect visibleFrame;
@property (readonly, nonatomic) CGPoint visiblePoint;
@property (readonly, nonatomic) unsigned int windowContextId;
@property (readonly, nonatomic) unsigned int windowDisplayId;


+(id)applicationAtCoordinate:(struct CGPoint )arg0 ;
+(id)elementAtCoordinate:(struct CGPoint )arg0 withVisualPadding:(BOOL)arg1 ;
+(id)elementWithAXUIElement:(struct __AXUIElement *)arg0 ;
+(id)elementWithData:(id)arg0 ;
+(id)elementWithUIElement:(id)arg0 ;
+(id)elementsWithUIElements:(id)arg0 ;
+(id)primaryApp;
+(id)systemEventDispatchElement;
+(id)systemWideElement;
+(void)registerNotifications:(id)arg0 withIdentifier:(id)arg1 withHandler:(id)arg2 ;
+(void)unregisterNotifications:(id)arg0 ;
-(BOOL)_performActivate;
-(BOOL)_showContextMenuWithTargetPointValue:(id)arg0 ;
-(BOOL)_zoomInOrOut:(BOOL)arg0 ;
-(BOOL)canPerformActivate;
-(BOOL)canPerformSecondaryActivate;
-(BOOL)canPerformTrackingDetail;
-(BOOL)canScrollInAtLeastOneDirection;
-(BOOL)eligibleForIconVision;
-(BOOL)hasAllTraits:(NSUInteger)arg0 ;
-(BOOL)hasAnyTraits:(NSUInteger)arg0 ;
-(BOOL)hasOnlyTraits:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGroup;
-(BOOL)isMap;
-(BOOL)longPress;
-(BOOL)performAction:(int)arg0 ;
-(BOOL)performAction:(int)arg0 withValue:(id)arg1 ;
-(BOOL)press;
-(BOOL)pressTVBackButton;
-(BOOL)pressTVDataOnScreenButton;
-(BOOL)pressTVDownButton;
-(BOOL)pressTVFastForwardButton;
-(BOOL)pressTVLeftButton;
-(BOOL)pressTVMenuButton;
-(BOOL)pressTVMicButton;
-(BOOL)pressTVNextTrackButton;
-(BOOL)pressTVPauseButton;
-(BOOL)pressTVPlayButton;
-(BOOL)pressTVPlayPauseButton;
-(BOOL)pressTVPreviousTrackButton;
-(BOOL)pressTVRewindButton;
-(BOOL)pressTVRightButton;
-(BOOL)pressTVSelectButton;
-(BOOL)pressTVSkipBackwardsButton;
-(BOOL)pressTVSkipForwardsButton;
-(BOOL)pressTVStopButton;
-(BOOL)pressTVUpButton;
-(BOOL)scrollToVisible;
-(BOOL)showContextMenu;
-(BOOL)supportsAction:(int)arg0 ;
-(BOOL)systemLongPressTVHomeButton;
-(BOOL)systemLongPressTVMenuButton;
-(BOOL)systemPressTVDownButton;
-(BOOL)systemPressTVHomeButton;
-(BOOL)systemPressTVLeftButton;
-(BOOL)systemPressTVMenuButton;
-(BOOL)systemPressTVPlayPauseButton;
-(BOOL)systemPressTVRightButton;
-(BOOL)systemPressTVSelectButton;
-(BOOL)systemPressTVSiriButton;
-(BOOL)systemPressTVUpButton;
-(BOOL)viewHierarchyHasNativeFocus;
-(BOOL)zoomIn;
-(BOOL)zoomOut;
-(CGFloat)distanceToElement:(id)arg0 ;
-(CGFloat)distanceToPoint:(struct CGPoint )arg0 ;
-(id)_axElementsForAXUIElements:(id)arg0 ;
-(id)_elementForAttribute:(NSInteger)arg0 shouldUpdateCache:(BOOL)arg1 shouldFetchAttributes:(BOOL)arg2 ;
-(id)_objectForRange:(struct _NSRange )arg0 withParameterizedAttribute:(NSInteger)arg1 ;
-(id)accessibilityLocalizationBundleID;
-(id)accessibilityLocalizationBundlePath;
-(id)accessibilityLocalizedStringKey;
-(id)accessibilityLocalizedStringTableName;
-(id)alternativesForTextAtPosition:(NSUInteger)arg0 ;
-(id)auditIssuesForOptions:(id)arg0 ;
-(id)carPlaySystemApplication;
-(id)elementForAttribute:(NSInteger)arg0 ;
-(id)elementForAttribute:(NSInteger)arg0 parameter:(id)arg1 ;
-(id)elementForAttribute:(NSInteger)arg0 shouldFetchAttributes:(BOOL)arg1 ;
-(id)elementsForAttribute:(NSInteger)arg0 ;
-(id)elementsForAttribute:(NSInteger)arg0 parameter:(id)arg1 ;
-(id)elementsMatchingText:(id)arg0 ;
-(id)highestAncestorGroup;
-(id)initWithAXUIElement:(struct __AXUIElement *)arg0 ;
-(id)initWithUIElement:(id)arg0 ;
-(id)keyboardContainer;
-(id)makeLookingGlassRequest:(id)arg0 ;
-(id)nextElementsWithCount:(NSUInteger)arg0 ;
-(id)previousElementsWithCount:(NSUInteger)arg0 ;
-(id)remoteApplication;
-(id)serializeToData;
-(struct CGPath *)convertPath:(struct CGPath *)arg0 fromContextId:(unsigned int)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromContextId:(unsigned int)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toContextId:(unsigned int)arg1 ;
-(struct CGRect )boundsForTextRange:(struct _NSRange )arg0 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromContextId:(unsigned int)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toContextId:(unsigned int)arg1 ;
-(struct __AXUIElement *)scrollAncestorForScrollAction:(int)arg0 ;
-(unsigned int)contextIdForPoint:(struct CGPoint )arg0 ;
-(unsigned int)displayIdForContextId:(unsigned int)arg0 ;
-(void)_updateLabel;
-(void)autoscrollInDirection:(NSUInteger)arg0 ;
-(void)clearCachedFrame:(BOOL)arg0 cachedVisibleFrame:(BOOL)arg1 ;
-(void)dealloc;
-(void)decreaseAutoscrollSpeed;
-(void)deleteText;
-(void)increaseAutoscrollSpeed;
-(void)insertText:(id)arg0 ;
-(void)insertText:(id)arg0 asUndoableAction:(BOOL)arg1 ;
-(void)insertTextWithAlternatives:(id)arg0 ;
-(void)pauseAutoscrolling;
-(void)scrollToBottom;
-(void)scrollToTop;
-(void)sendUserEventOccurred;
-(void)updateCache:(NSInteger)arg0 ;


@end


#endif