// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTWINDOWCONTROLLERHOSTING_H
#define UIINPUTWINDOWCONTROLLERHOSTING_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "UIInputWindowController.h"

@interface UIInputWindowControllerHosting : NSObject {
    NSMutableArray *_hostingItems;
    NSUInteger _currentState;
}


@property (readonly, retain, nonatomic) NSArray *allHostingItems;
@property (nonatomic) int extraHostsRequired; // ivar: _extraHostsRequired
@property (weak, nonatomic) UIInputWindowController *owner; // ivar: _owner
@property (nonatomic) BOOL requiresConstraintUpdate; // ivar: _requiresConstraintUpdate


-(BOOL)host:(id)arg0 isForPurpose:(NSUInteger)arg1 ;
-(BOOL)useCrescendoHostingItem;
-(NSUInteger)indexOfHost:(id)arg0 ;
-(id)expectedPlacementForHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 ;
-(id)itemForPurpose:(NSUInteger)arg0 ;
-(id)placementForHost:(id)arg0 ;
-(id)subPlacementFromPlacement:(id)arg0 forHost:(id)arg1 ;
-(struct CGRect )visibleFrame;
-(struct UIEdgeInsets )_inputViewPadding;
-(void)_updateBackdropViews;
-(void)clearInputAccessoryViewEdgeConstraints;
-(void)clearInputAssistantViewEdgeConstraints;
-(void)clearInputViewEdgeConstraints;
-(void)disableViewSizingConstraints:(NSUInteger)arg0 forNewView:(id)arg1 ;
-(void)extendKeyboardBackdropHeight:(CGFloat)arg0 withDuration:(CGFloat)arg1 ;
-(void)initializeTranslateGestureRecognizerIfNecessary;
-(void)layoutIfNeeded;
-(void)performForInputAccessoryBackdropViews:(id)arg0 ;
-(void)reloadForPlacement;
-(void)removeAllAnimations;
-(void)removeInputAssistantHostView;
-(void)resetBackdropHeight;
-(void)resetInputViewVisibility;
-(void)setNeedsLayout;
-(void)unloadForPlacement;
-(void)updateConstraintInsets;
-(void)updateEmptyHeightConstraint;
-(void)updateViewConstraints;
-(void)updateViewSizingConstraints;


@end


#endif