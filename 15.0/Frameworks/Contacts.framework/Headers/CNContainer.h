// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTAINER_H
#define CNCONTAINER_H

@class NSString, NSData, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CNContainer.h"
#import "CNContainerPermissions.h"

@interface CNContainer : NSObject <NSCopying, NSSecureCoding>

 {
    CNContainer *_snapshot;
}


@property (readonly, copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy, nonatomic) NSString *constraintsPath; // ivar: _constraintsPath
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, copy, nonatomic) NSString *externalIdentifier; // ivar: _externalIdentifier
@property (readonly, copy, nonatomic) NSString *externalModificationTag; // ivar: _externalModificationTag
@property (readonly, copy, nonatomic) NSData *externalSyncData; // ivar: _externalSyncData
@property (readonly, copy, nonatomic) NSString *externalSyncTag; // ivar: _externalSyncTag
@property (readonly, nonatomic, getter=isGuardianRestricted) BOOL guardianRestricted; // ivar: _guardianRestricted
@property (readonly, nonatomic, getter=isGuardianStateDirty) BOOL guardianStateDirty; // ivar: _guardianStateDirty
@property (readonly, nonatomic) int iOSLegacyIdentifier; // ivar: _iOSLegacyIdentifier
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDate *lastSyncDate; // ivar: _lastSyncDate
@property (readonly, copy, nonatomic) NSString *meIdentifier; // ivar: _meIdentifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isParentallyManaged) BOOL parentallyManaged;
@property (readonly, copy, nonatomic) CNContainerPermissions *permissions; // ivar: _permissions
@property (readonly, nonatomic) NSUInteger restrictions; // ivar: _restrictions
@property (readonly, copy, nonatomic) CNContainer *snapshot;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)makeDefaultContainerPermissions;
+(id)makeIdentifier;
+(id)makeIdentifierString;
+(id)predicateForContainerOfContactWithIdentifier:(id)arg0 ;
+(id)predicateForContainerOfGroupWithIdentifier:(id)arg0 ;
+(id)predicateForContainersInAccountWithExternalIdentifier:(id)arg0 ;
+(id)predicateForContainersInAccountWithIdentifier:(id)arg0 ;
+(id)predicateForContainersInAccountWithIdentifier:(id)arg0 includingDisabledContainers:(BOOL)arg1 ;
+(id)predicateForContainersIncludingDisabled:(BOOL)arg0 ;
+(id)predicateForContainersWithIdentifiers:(id)arg0 ;
+(id)predicateForDefaultContainerForAccountWithIdentifier:(id)arg0 ;
+(id)predicateForLocalContainerIncludingDisabled:(BOOL)arg0 ;
+(id)predicateForiOSLegacyIdentifier:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionForContainerType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContainer:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 accountIdentifier:(id)arg1 name:(id)arg2 type:(NSInteger)arg3 permissions:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 type:(NSInteger)arg2 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 type:(NSInteger)arg2 iOSLegacyIdentifier:(int)arg3 accountIdentifier:(id)arg4 enabled:(BOOL)arg5 permissions:(id)arg6 externalIdentifier:(id)arg7 externalModificationTag:(id)arg8 externalSyncTag:(id)arg9 externalSyncData:(id)arg10 constraintsPath:(id)arg11 meIdentifier:(id)arg12 restrictions:(NSUInteger)arg13 guardianRestricted:(BOOL)arg14 lastSyncDate:(id)arg15 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 type:(NSInteger)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif