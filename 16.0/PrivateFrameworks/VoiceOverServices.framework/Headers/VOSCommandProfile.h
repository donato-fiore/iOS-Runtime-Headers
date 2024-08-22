// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VOSCOMMANDPROFILE_H
#define VOSCOMMANDPROFILE_H

@class NSMutableSet;
@protocol NSSecureCoding, VOSCommandProfileDelegate;

#import <Foundation/Foundation.h>


@interface VOSCommandProfile : NSObject <NSSecureCoding>

 {
    NSMutableSet *_modes;
}


@property (weak, nonatomic) NSObject<VOSCommandProfileDelegate> *delegate; // ivar: _delegate


+(BOOL)_overlay:(id)arg0 shouldIncludeItem:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_parseProfileProperties:(id)arg0 overlayProperties:(id)arg1 ;
+(id)_profileKeyChordsFromDictionaryValue:(id)arg0 ;
+(void)_addGesturesToCommand:(id)arg0 fromCommandProperties:(id)arg1 overlayProperties:(id)arg2 ;
+(void)_addKeyboardShortcutsToCommand:(id)arg0 fromCommandProperties:(id)arg1 overlayProperties:(id)arg2 ;
+(void)_addQuickNavShortcutsToCommand:(id)arg0 fromCommandProperties:(id)arg1 overlayProperties:(id)arg2 ;
+(void)_addSecondaryCommandsToCommand:(id)arg0 fromCommandProperties:(id)arg1 overlayProperties:(id)arg2 ;
-(BOOL)commandHasAnyBindings:(id)arg0 withResolver:(id)arg1 ;
-(BOOL)commandHasModifiedBindingsWhenZoomEnabled:(id)arg0 withResolver:(id)arg1 ;
-(NSUInteger)availabilityForCommand:(id)arg0 withResolver:(id)arg1 ;
-(NSUInteger)availabilityForGesture:(id)arg0 withResolver:(id)arg1 ;
-(NSUInteger)availabilityForShortcut:(id)arg0 withResolver:(id)arg1 ;
-(id)_initWithModes:(id)arg0 ;
-(id)_profileCommandForCommand:(id)arg0 inMode:(id)arg1 ;
-(id)_profileModeForResolver:(id)arg0 ;
-(id)_profileModeForScreenreaderMode:(id)arg0 ;
-(id)_resolvedSecondaryCommandForProfileCommand:(id)arg0 resolver:(id)arg1 ;
-(id)addGesture:(id)arg0 toCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)addKeyChord:(id)arg0 toCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)allCommandsWithResolver:(id)arg0 ;
-(id)allShortcutBindingsWithResolver:(id)arg0 ;
-(id)allSiriShortcutCommandsWithResolver:(id)arg0 ;
-(id)commandForKeyChord:(id)arg0 withResolver:(id)arg1 ;
-(id)commandForTouchGesture:(id)arg0 withResolver:(id)arg1 ;
-(id)debugDescription;
-(id)gestureBindingsForCommand:(id)arg0 withResolver:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProfileProperties:(id)arg0 overlayProperties:(id)arg1 ;
-(id)removeGesture:(id)arg0 fromCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)removeKeyChord:(id)arg0 fromCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)shortcutBindingsForCommand:(id)arg0 withResolver:(id)arg1 ;
-(id)userPresentableAllShortcutBindingsWithResolver:(id)arg0 ;
-(id)validateCanAddGesture:(id)arg0 toCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)validateCanAddKeyChord:(id)arg0 toCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)validateCanRemoveGesture:(id)arg0 fromCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)validateCanRemoveKeyChord:(id)arg0 fromCommand:(id)arg1 withResolver:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif