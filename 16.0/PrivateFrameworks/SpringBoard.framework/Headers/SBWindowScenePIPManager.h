// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWINDOWSCENEPIPMANAGER_H
#define SBWINDOWSCENEPIPMANAGER_H

@class NSMutableDictionary, NSMapTable, SBFZStackParticipant, NSString, NSDictionary;
@protocol SBFZStackParticipantDelegate, SBPIPOffScreenContextProviding;

#import <Foundation/Foundation.h>

#import "SBPIPControllerCoordinator.h"
#import "SBWindowScene.h"

@interface SBWindowScenePIPManager : NSObject <SBFZStackParticipantDelegate, SBPIPOffScreenContextProviding>

 {
    BOOL _assumingKeyboardIsVisible;
    NSMutableDictionary *_contentTypeToStashedPadding;
    NSMutableDictionary *_contentTypeToWindowMargins;
    NSMutableDictionary *_contentTypeToWindowLevelOverrideAssertions;
    NSMapTable *_stashAssertionsToCompoundAssertionMap;
    SBFZStackParticipant *_zStackParticipant;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBPIPControllerCoordinator *globalCoordinator; // ivar: _globalCoordinator
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_minimumStashedPadding) UIEdgeInsets minimumStashedPadding;
@property (copy, nonatomic, getter=_sourceToEdgeInsets) NSDictionary *sourceToEdgeInsets; // ivar: _sourceToEdgeInsets
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(BOOL)isPointWithinAnyPictureInPictureContent:(struct CGPoint )arg0 ;
-(id)_windowLevelOverrideAssertionsForContentType:(NSInteger)arg0 ;
-(id)acquireStashAssertionForReason:(NSInteger)arg0 identifier:(id)arg1 ;
-(id)acquireWindowLevelOverrideAssertionForControllerWithContentType:(NSInteger)arg0 toWindowLevel:(NSUInteger)arg1 withReason:(NSInteger)arg2 identifier:(id)arg3 ;
-(id)initWithGlobalCoordinator:(id)arg0 ;
-(struct CGRect )frameInCoordinatesOfOriginalDisplay:(id)arg0 ;
-(unsigned int)edgeWithNeighboringDisplay;
-(void)_floatingDockHeightWillChange:(id)arg0 ;
-(void)_keyboardWillChangeFrame:(id)arg0 ;
-(void)_keyboardWillRotate:(id)arg0 ;
-(void)_keyboardWillShowOrHide:(id)arg0 ;
-(void)_shelfHeightDidChange:(id)arg0 ;
-(void)_systemApertureInsetsDidChange:(id)arg0 ;
-(void)_updateFloatingDockInsetsWithoutNotifyingControllers;
-(void)applyPictureInPictureInsets:(struct UIEdgeInsets )arg0 forSource:(NSInteger)arg1 ;
-(void)applyStashedPictureInPicturePadding:(struct UIEdgeInsets )arg0 forPIPSource:(NSInteger)arg1 ;
-(void)configureInsetsForIconController:(id)arg0 ;
-(void)modifyGeometryContext:(struct SBPIPPositionGeometryContext *)arg0 fromOriginalDisplay:(id)arg1 ;
-(void)setNeedsUpdateZStackParticipantPreferencesWithReason:(id)arg0 ;
-(void)updatePictureInPictureWindowLevels;
-(void)windowSceneDidConnect:(id)arg0 ;
-(void)windowSceneDidDisconnect:(id)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif