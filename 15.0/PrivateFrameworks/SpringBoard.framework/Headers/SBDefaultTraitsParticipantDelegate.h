// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDEFAULTTRAITSPARTICIPANTDELEGATE_H
#define SBDEFAULTTRAITSPARTICIPANTDELEGATE_H

@class NSMapTable, NSMutableDictionary, NSString;
@protocol SBFTraitsParticipantDelegate;

#import <Foundation/Foundation.h>


@interface SBDefaultTraitsParticipantDelegate : NSObject <SBFTraitsParticipantDelegate>

 {
    NSMapTable *_participantOwningWindowMapTable;
    NSMutableDictionary *_tempLastPreferredZOrder;
    NSMutableDictionary *_tempLastSupportedOrientations;
    NSMutableDictionary *_tempOwningWindowVisible;
    NSMutableDictionary *_tempOwningWindowHidden;
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
-(id)participantAssociatedWindows:(id)arg0 ;
-(void)didChangeSettingsForParticipant:(id)arg0 context:(id)arg1 ;
-(void)participantWillInvalidate:(id)arg0 ;
-(void)setParticipant:(id)arg0 ownedByWindow:(id)arg1 ;
-(void)updatePreferenceForParticipant:(id)arg0 updater:(id)arg1 ;
-(void)validateSettingsForParticipant:(id)arg0 validator:(id)arg1 ;
-(void)windowDidUpdatePreferredWindowLevel:(CGFloat)arg0 ownedParticipant:(id)arg1 ;
-(void)windowDidUpdateSupportedOrientations:(NSUInteger)arg0 ownedParticipant:(id)arg1 ;
-(void)windowWillBecomeHidden:(id)arg0 ownedParticipant:(id)arg1 ;
-(void)windowWillBecomeVisible:(id)arg0 ownedParticipant:(id)arg1 ;


@end


#endif