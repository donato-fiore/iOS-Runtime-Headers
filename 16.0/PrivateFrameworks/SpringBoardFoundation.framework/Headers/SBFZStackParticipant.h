// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFZSTACKPARTICIPANT_H
#define SBFZSTACKPARTICIPANT_H

@class NSSet, NSString;
@protocol NSCopying, BSDescriptionProviding, SBFZStackParticipantDelegate;

#import <Foundation/Foundation.h>

#import "SBFZStackParticipantPreferences.h"
#import "SBFZStackResolver.h"

@interface SBFZStackParticipant : NSObject <NSCopying, BSDescriptionProviding>



@property (nonatomic) NSInteger activationState; // ivar: _activationState
@property (copy, nonatomic) NSSet *associatedBundleIdentifiersToSuppressInSystemAperture; // ivar: _associatedBundleIdentifiersToSuppressInSystemAperture
@property (copy, nonatomic) NSSet *associatedSceneIdentifiersToSuppressInSystemAperture; // ivar: _associatedSceneIdentifiersToSuppressInSystemAperture
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
@property (nonatomic) BOOL systemApertureSuppressedForSystemChromeSuppression; // ivar: _systemApertureSuppressedForSystemChromeSuppression


-(id)copyWithZone:(struct _NSZone *)arg0 ;
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