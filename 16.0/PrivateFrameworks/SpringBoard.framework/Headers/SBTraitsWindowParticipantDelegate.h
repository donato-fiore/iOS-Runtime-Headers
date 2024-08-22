// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRAITSWINDOWPARTICIPANTDELEGATE_H
#define SBTRAITSWINDOWPARTICIPANTDELEGATE_H

@class NSMapTable, NSMutableDictionary, NSMutableArray, NSString;
@protocol SBFTraitsParticipantDelegate;

#import <Foundation/Foundation.h>


@interface SBTraitsWindowParticipantDelegate : NSObject <SBFTraitsParticipantDelegate>

 {
    NSMapTable *_participantOwningWindowMapTable;
    NSMutableDictionary *_tempLastPreferredZOrder;
    NSMutableDictionary *_tempLastSupportedOrientations;
    NSMutableArray *_tempOwningWindowVisible;
    NSMutableArray *_tempOwningWindowHidden;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_activeOrientationDeterminingParticipantRoles;
-(BOOL)_isWindowContentVisible:(id)arg0 ;
-(NSUInteger)_validatedSupportedInterfaceOrientations:(NSUInteger)arg0 forWindow:(id)arg1 ;
-(id)_autorotationPreventionReasons:(id)arg0 ;
-(id)_validationFailureReasonForWindow:(id)arg0 shouldAutorotate:(BOOL)arg1 ;
-(id)init;
-(id)participantAssociatedSceneIdentityTokens:(id)arg0 ;
-(id)participantAssociatedWindows:(id)arg0 ;
-(unsigned int)_TEMP_89890840_participantAssociatedContextID:(id)arg0 ;
-(void)didChangeSettingsForParticipant:(id)arg0 context:(id)arg1 ;
-(void)participantWillInvalidate:(id)arg0 ;
-(void)setParticipant:(id)arg0 ownedByWindow:(id)arg1 ;
-(void)updatePreferencesForParticipant:(id)arg0 updater:(id)arg1 ;
-(void)validateSettingsForParticipant:(id)arg0 validator:(id)arg1 ;
-(void)windowDidUpdatePreferredWindowLevel:(CGFloat)arg0 ownedParticipant:(id)arg1 ;
-(void)windowDidUpdateSupportedOrientations:(NSUInteger)arg0 ownedParticipant:(id)arg1 ;
-(void)windowWillBecomeHidden:(id)arg0 ownedParticipant:(id)arg1 ;
-(void)windowWillBecomeVisible:(id)arg0 ownedParticipant:(id)arg1 ;


@end


#endif