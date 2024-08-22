// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSSEVENTMANAGER_H
#define AXSSEVENTMANAGER_H

@class NSDictionary;
@protocol AXSSKeyFilterDelegate;

#import <Foundation/Foundation.h>

#import "AXSSKeyboardCommandInfo.h"
#import "AXSSActionManager.h"
#import "AXSSKeyboardCommandMap.h"

@interface AXSSEventManager : NSObject

@property (readonly, nonatomic) NSDictionary *_commandInfos; // ivar: __commandInfos
@property (retain, nonatomic) AXSSKeyboardCommandInfo *_lastDownAndUpCommandInfo; // ivar: __lastDownAndUpCommandInfo
@property (nonatomic) CGFloat _lastTabPressTime; // ivar: __lastTabPressTime
@property (nonatomic) BOOL _performedActionWhileTabComboPressed; // ivar: __performedActionWhileTabComboPressed
@property (nonatomic) BOOL _tabKeyPressed; // ivar: __tabKeyPressed
@property (retain, nonatomic) AXSSActionManager *actionManager; // ivar: _actionManager
@property (retain, nonatomic) AXSSKeyboardCommandMap *commandMap; // ivar: _commandMap
@property (weak, nonatomic) NSObject<AXSSKeyFilterDelegate> *filterDelegate; // ivar: _filterDelegate
@property (nonatomic) CGFloat minimumDelayUntilRepeat; // ivar: _minimumDelayUntilRepeat
@property (nonatomic, getter=isPassthroughModeEnabled) BOOL passthroughModeEnabled; // ivar: _passthroughModeEnabled
@property (nonatomic) NSUInteger searchType; // ivar: _searchType
@property (nonatomic) BOOL shouldSuppressCommands; // ivar: _shouldSuppressCommands


-(BOOL)_handleCommand:(id)arg0 event:(id)arg1 ;
-(BOOL)_handleEvent:(id)arg0 forCaptureOnly:(BOOL)arg1 ;
-(BOOL)processKeyboardCommand:(id)arg0 ;
-(BOOL)processKeyboardEvent:(id)arg0 ;
-(BOOL)shouldCaptureEvent:(id)arg0 ;
-(id)_tabbedKeyChordForKeyChord:(id)arg0 ;
-(id)initWithActionManager:(id)arg0 ;
-(id)initWithActionManager:(id)arg0 commandMap:(id)arg1 ;
-(void)_handleTabComboEvent:(id)arg0 ;
-(void)_handleTabEvent:(id)arg0 ;
-(void)_handleTabRepeatOrUpWithCommand:(id)arg0 ;
-(void)_performDownActionForCommand:(id)arg0 info:(id)arg1 ;
-(void)handleFKAEvent:(id)arg0 ;


@end


#endif