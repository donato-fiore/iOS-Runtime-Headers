// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSAPPLICATIONRESTRICTIONSMANAGER_H
#define LSAPPLICATIONRESTRICTIONSMANAGER_H

@class NSNumber, NSSet, NSString, MOEffectiveSettings;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface LSApplicationRestrictionsManager : NSObject {
    NSObject<OS_dispatch_queue> *_restrictionsAccessQueue;
    NSObject<OS_dispatch_queue> *_signerIdentitySyncQueue;
    NSObject<OS_dispatch_source> *_signerIdentitySyncSource;
    NSNumber *_allowlistState;
    NSUInteger _knownSystemAppDeletionState;
    BOOL _server_newsWidgetIsRestricted;
    NSSet *_allowlistedBundleIDs;
    NSSet *_restrictedBundleIDs;
    NSNumber *_maximumRating;
    NSString *_systemMode;
}


@property (retain) MOEffectiveSettings *effectiveSettings; // ivar: _effectiveSettings


-(BOOL)_LSApplyRestrictedSet:(id)arg0 forRestriction:(id)arg1 ;
-(BOOL)isFeatureAllowed:(id)arg0 ;
-(id)_LSResolveIdentifiers:(id)arg0 ;
-(id)_MCProfileConnection;
-(id)_MCRestrictionManager;
-(id)calculateSetDifference:(id)arg0 and:(id)arg1 ;
-(id)init;
-(void)_pruneObsoleteTrustedSignerIdentities;
-(void)clearAllValues;
-(void)handleMCEffectiveSettingsChanged;
-(void)handleSystemModeChangeTo:(id)arg0 ;
-(void)setAllowlistedBundleIDs:(id)arg0 ;
-(void)setRestrictedBundleIDs:(id)arg0 ;


@end


#endif