// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONRESTRICTIONCONTROLLER_H
#define SBAPPLICATIONRESTRICTIONCONTROLLER_H

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSSet, SBApplicationDefaults, NSString;
@protocol STTelephonyStateObserver, SBApplicationRestrictionDataSource;

#import <Foundation/Foundation.h>


@interface SBApplicationRestrictionController : NSObject <STTelephonyStateObserver>

 {
    id<SBApplicationRestrictionDataSource> *_dataSource;
    NSHashTable *_observers;
    NSMutableDictionary *_tagValidityMap;
    NSMutableDictionary *_validTagsByIdentifier;
    *MGNotificationTokenStruct _tagsNotificationToken;
    NSMutableSet *_enabledTags;
    NSMutableDictionary *_ratingRanksByIdentifier;
    NSSet *_restrictedIdentifiers;
    SBApplicationDefaults *_applicationDefaults;
    BOOL _showInternalApps;
    BOOL _hasHideNonDefaultSystemAppsCapability;
    BOOL _showAllSystemApps;
    BOOL _canPostRestrictionState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isApplicationIdentifierRestricted:(id)arg0 ;
-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)beginPostingChanges;
-(void)carrierBundleInfoDidChangeForStateProvider:(id)arg0 slot:(NSInteger)arg1 ;
-(void)dealloc;
-(void)noteApplicationIdentifiersDidChangeWithAdded:(id)arg0 replaced:(id)arg1 removed:(id)arg2 ;
-(void)noteRestrictionsMayHaveChanged;
-(void)noteVisibilityOverridesDidChange;
-(void)removeObserver:(id)arg0 ;


@end


#endif