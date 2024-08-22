// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFZSTACKPARTICIPANT_H
#define SBFZSTACKPARTICIPANT_H

@class NSString;
@protocol BSDescriptionProviding, SBFZStackParticipantDelegate;

#import <Foundation/Foundation.h>

#import "SBFZStackParticipantPreferences.h"
#import "SBFZStackResolver.h"

@interface SBFZStackParticipant : NSObject <BSDescriptionProviding>



@property (nonatomic) NSInteger activationState; // ivar: _activationState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBFZStackParticipantDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL homeAffordanceDrawingSuppressed; // ivar: _homeAffordanceDrawingSuppressed
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (nonatomic) BOOL ownsHomeGesture; // ivar: _ownsHomeGesture
@property (copy, nonatomic) SBFZStackParticipantPreferences *preferences; // ivar: _preferences
@property (weak, nonatomic) SBFZStackResolver *resolver; // ivar: _resolver
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 delegate:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_updatePreferences;
-(void)invalidate;
-(void)setNeedsUpdatePreferencesWithReason:(id)arg0 ;


@end


#endif