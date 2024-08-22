// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARLOCKITEM_H
#define _UISTATUSBARLOCKITEM_H

@class NSString, NSTimer;
@protocol _UIBasicAnimationFactory;


#import "UIStatusBarItem.h"
#import "_UIStatusBarLockView.h"
#import "_UIExpandingGlyphsView.h"

@interface _UIStatusBarLockItem : UIStatusBarItem <_UIBasicAnimationFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSTimer *lockDisappearanceTimer; // ivar: _lockDisappearanceTimer
@property (retain, nonatomic) _UIStatusBarLockView *lockView; // ivar: _lockView
@property (nonatomic) BOOL showsLock; // ivar: _showsLock
@property (retain, nonatomic) _UIExpandingGlyphsView *stringView; // ivar: _stringView
@property (readonly) Class superclass;
@property (nonatomic) NSInteger unlockFailureCount; // ivar: _unlockFailureCount


+(id)textDisplayIdentifier;
-(BOOL)canEnableDisplayItem:(id)arg0 fromData:(id)arg1 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg0 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg0 ;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif