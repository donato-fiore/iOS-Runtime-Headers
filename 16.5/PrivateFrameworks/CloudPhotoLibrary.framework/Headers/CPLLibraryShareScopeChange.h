// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLLIBRARYSHARESCOPECHANGE_H
#define CPLLIBRARYSHARESCOPECHANGE_H

@class NSSet, NSArray, NSData, NSDate;
@protocol NSSecureCoding, NSCopying;


#import "CPLScopeChange.h"

@interface CPLLibraryShareScopeChange : CPLScopeChange <NSSecureCoding, NSCopying>

 {
    NSSet *_exitingUserIdentifiers;
}


@property (nonatomic) NSInteger exitRetentionPolicy; // ivar: _exitRetentionPolicy
@property (nonatomic) NSInteger exitSource; // ivar: _exitSource
@property (readonly, nonatomic) NSInteger exitState;
@property (nonatomic) NSInteger exitType; // ivar: _exitType
@property (copy, nonatomic) NSArray *exitingUserIdentifiers;
@property (copy, nonatomic) NSData *userDefinedRules; // ivar: _userDefinedRules
@property (copy, nonatomic) NSDate *userViewedParticipantTrashNotificationDate; // ivar: _userViewedParticipantTrashNotificationDate


+(BOOL)serverSupportsLibraryShareSettingsRecordSyncing;
+(BOOL)serverSupportsLibraryShareSettingsUserViewedParticipantTrashNotificationDateSyncing;
+(id)cplAdditionalSecureClassesForProperty:(id)arg0 ;
+(id)descriptionForExitState:(NSInteger)arg0 ;
+(id)descriptionForExitType:(NSInteger)arg0 ;
+(id)mappingForExitState;
+(id)mappingForExitType;
-(BOOL)areSomeUsersExiting;
-(BOOL)isCurrentUserExiting;
-(BOOL)isUserWithIdentifierExiting:(id)arg0 ;
-(BOOL)shouldAlwaysUpdateScopeInfoWhenPossible;
-(id)_additionalDescription;
-(void)addExitingUserIdentifiers:(id)arg0 ;
-(void)removePendingParticipantIDs:(id)arg0 ;
-(void)updateScopeFromScopeChange:(id)arg0 direction:(NSUInteger)arg1 didHaveChanges:(*BOOL)arg2 ;


@end


#endif