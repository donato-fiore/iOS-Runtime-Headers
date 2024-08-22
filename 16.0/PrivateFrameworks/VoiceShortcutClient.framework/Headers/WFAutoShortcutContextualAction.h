// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAUTOSHORTCUTCONTEXTUALACTION_H
#define WFAUTOSHORTCUTCONTEXTUALACTION_H

@class NSArray, LNAutoShortcut, NSString, NSNumber, LNAutoShortcutLocalizedPhrase;


#import "WFContextualAction.h"
#import "WFAutoShortcutContextualAction.h"

@interface WFAutoShortcutContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) NSArray *alternativePhrases; // ivar: _alternativePhrases
@property (readonly, nonatomic) LNAutoShortcut *autoShortcut; // ivar: _autoShortcut
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSNumber *cachedProminentDisplayEligibility; // ivar: _cachedProminentDisplayEligibility
@property (readonly, nonatomic, getter=isEligibleForProminentDisplay) BOOL eligibleForProminentDisplay;
@property (readonly, nonatomic) NSUInteger orderOfShortcut; // ivar: _orderOfShortcut
@property (readonly, nonatomic) WFAutoShortcutContextualAction *parentAction; // ivar: _parentAction
@property (readonly, nonatomic) LNAutoShortcutLocalizedPhrase *phrase; // ivar: _phrase


+(BOOL)supportsSecureCoding;
+(id)allActionsForAutoShortcut:(id)arg0 bundleIdentifier:(id)arg1 ;
+(id)autoShortcutContextualActionsByQueryingEligibilityForProminentDisplay:(id)arg0 ;
+(id)spotlightDomainIdentifier;
-(BOOL)definesDisplayOrder;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)displayOrder;
-(NSUInteger)hash;
-(id)actionBySettingEligibilityForProminentDisplay:(BOOL)arg0 ;
-(id)actionForRunningFromSpotlight;
-(id)creationDate;
-(id)initWithAutoShortcut:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)initWithAutoShortcut:(id)arg0 phrase:(id)arg1 alternativePhrases:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)initWithAutoShortcut:(id)arg0 phrase:(id)arg1 alternativePhrases:(id)arg2 bundleIdentifier:(id)arg3 orderOfShortcut:(NSUInteger)arg4 parentAction:(id)arg5 prominentDisplayEligibility:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(id)relatedApp;
-(id)spotlightItem;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif