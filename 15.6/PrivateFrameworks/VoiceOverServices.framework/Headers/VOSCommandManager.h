// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VOSCOMMANDMANAGER_H
#define VOSCOMMANDMANAGER_H

@class NSString;
@protocol VOSCommandProfileDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VOSCommandProfile.h"

@interface VOSCommandManager : NSObject <VOSCommandProfileDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_siriShortCutToken;
}


@property (readonly, nonatomic) VOSCommandProfile *activeProfile; // ivar: _activeProfile
@property (nonatomic) BOOL activeProfileIsUserProfile; // ivar: _activeProfileIsUserProfile
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL loadShortcuts; // ivar: _loadShortcuts
@property (readonly) Class superclass;


-(BOOL)_validateUserProfileDiscrepancies:(id)arg0 ;
-(BOOL)commandHasAnyBindings:(id)arg0 withResolver:(id)arg1 ;
-(BOOL)commandHasModifiedBindingsWhenZoomEnabled:(id)arg0 withResolver:(id)arg1 ;
-(NSUInteger)availabilityForCommand:(id)arg0 withResolver:(id)arg1 ;
-(NSUInteger)availabilityForGesture:(id)arg0 withResolver:(id)arg1 ;
-(NSUInteger)availabilityForShortcut:(id)arg0 withResolver:(id)arg1 ;
-(id)addGesture:(id)arg0 toCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)addKeyChord:(id)arg0 toCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)allCommandsWithResolver:(id)arg0 ;
-(id)allShortcutBindingsWithResolver:(id)arg0 ;
-(id)allSiriShortcutCommandsWithResolver:(id)arg0 ;
-(id)availableSiriShortcuts:(id)arg0 ;
-(id)commandForKeyChord:(id)arg0 withResolver:(id)arg1 ;
-(id)commandForTouchGesture:(id)arg0 withResolver:(id)arg1 ;
-(id)gestureBindingsForCommand:(id)arg0 withResolver:(id)arg1 ;
-(id)init;
-(id)initPreferringUserProfile;
-(id)initPreferringUserProfileWithoutShortcuts;
-(id)initWithSystemProfile;
-(id)removeGesture:(id)arg0 fromCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)removeKeyChord:(id)arg0 fromCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)shortcutBindingsForCommand:(id)arg0 withResolver:(id)arg1 ;
-(id)systemProfile;
-(id)userPresentableAllShortcutBindingsWithResolver:(id)arg0 ;
-(id)validateCanAddGesture:(id)arg0 toCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)validateCanAddKeyChord:(id)arg0 toCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)validateCanRemoveGesture:(id)arg0 fromCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)validateCanRemoveKeyChord:(id)arg0 fromCommand:(id)arg1 withResolver:(id)arg2 ;
-(void)_commonInit;
-(void)_commonUserProfileInit;
-(void)_loadSystemProfile;
// -(void)batchUpdateActiveProfile:(id)arg0 saveIfSuccessful:(unk)arg1 completion:(BOOL)arg2  ;
-(void)dealloc;
-(void)reloadPreferringUserProfile;
-(void)reloadWithSystemProfile;
-(void)restoreDefaultProfile;
-(void)saveAsUserProfile;


@end


#endif