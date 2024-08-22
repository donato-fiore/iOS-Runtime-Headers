// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSACTIONMANAGER_H
#define AXSSACTIONMANAGER_H


#import <Foundation/Foundation.h>


@interface AXSSActionManager : NSObject



-(BOOL)isInteractive;
-(void)activateAccessibilityShortcut;
-(void)activateSOS;
-(void)activateSiri;
-(void)activateTypeahead;
-(void)armApplePay;
-(void)begin3DTouch;
-(void)beginPinchIn;
-(void)beginPinchOut;
-(void)beginRotateLeft;
-(void)beginRotateRight;
-(void)beginSwipeDown;
-(void)beginSwipeLeft;
-(void)beginSwipeRight;
-(void)beginSwipeUp;
-(void)beginTwoFingerSwipeDown;
-(void)beginTwoFingerSwipeLeft;
-(void)beginTwoFingerSwipeRight;
-(void)beginTwoFingerSwipeUp;
-(void)didPerformStandardCommandWithIdentifier:(id)arg0 ;
-(void)didSuppressCommand:(id)arg0 ;
-(void)end3DTouch;
-(void)endPinch;
-(void)endRotate;
-(void)endSwipe;
-(void)endTwoFingerSwipe;
-(void)enterContainer;
-(void)exitContainer;
-(void)goHome;
-(void)goToFirstElement;
-(void)goToLastElement;
-(void)goToNextElementOfType:(NSUInteger)arg0 ;
-(void)goToNextSection;
-(void)goToPreviousElementOfType:(NSUInteger)arg0 ;
-(void)goToPreviousSection;
-(void)handleCommand:(id)arg0 ;
-(void)lift;
-(void)lockScreen;
-(void)moveDown;
-(void)moveInsideNext;
-(void)moveInsidePrevious;
-(void)moveLeft;
-(void)movePointerToFocus;
-(void)moveRight;
-(void)moveUp;
-(void)nextButton;
-(void)nextCheckbox;
-(void)nextHeading;
-(void)nextImage;
-(void)nextLink;
-(void)nextTable;
-(void)nextTextField;
-(void)openContextualMenu;
-(void)performDefaultAction;
-(void)performEscape;
-(void)performSysdiagnose;
-(void)press;
-(void)previousButton;
-(void)previousCheckbox;
-(void)previousHeading;
-(void)previousImage;
-(void)previousLink;
-(void)previousTable;
-(void)previousTextField;
-(void)rebootDevice;
-(void)rotateDevice;
-(void)showAccessibilityActions;
-(void)toggleAppLibrary;
-(void)toggleAppSwitcher;
-(void)toggleApplicationList;
-(void)toggleControlCenter;
-(void)toggleDock;
-(void)toggleGesturesMode;
-(void)toggleHelp;
-(void)toggleMenuBar;
-(void)toggleNotificationCenter;
-(void)togglePassthroughMode;
-(void)toggleQuickNote;
-(void)toggleWindowList;
-(void)twoFingerLift;
-(void)twoFingerPress;
-(void)willPerformStandardCommandWithIdentifier:(id)arg0 ;


@end


#endif