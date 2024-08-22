// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UMUSER_H
#define UMUSER_H

@class NSString, NSArray, NSDate, NSError, NSURL;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface UMUser : NSObject <NSCopying, NSMutableCopying>

 {
    NSString *_displayName;
}


@property (copy, nonatomic) id *_photo; // ivar: __photo
@property (readonly, weak, nonatomic) NSArray *allUserPersonas;
@property (copy, nonatomic) NSString *alternateDSID; // ivar: _alternateDSID
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic) NSUInteger dataQuota; // ivar: _dataQuota
@property (nonatomic) NSUInteger dataUsed; // ivar: _dataUsed
@property (copy, nonatomic) NSError *debugErrorCausingLogout; // ivar: _debugErrorCausingLogout
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSError *errorCausingLogout; // ivar: _errorCausingLogout
@property (copy, nonatomic) NSString *familyName; // ivar: _familyName
@property (copy, nonatomic) NSDate *firstLoginEndDate; // ivar: _firstLoginEndDate
@property (copy, nonatomic) NSDate *firstLoginStartDate; // ivar: _firstLoginStartDate
@property (nonatomic) unsigned int gid; // ivar: _gid
@property (copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (nonatomic) BOOL hasDataToSync; // ivar: _hasDataToSync
@property (nonatomic) BOOL hasManagedCredentials; // ivar: _hasManagedCredentials
@property (copy, nonatomic) NSURL *homeDirectoryURL; // ivar: _homeDirectoryURL
@property (nonatomic) BOOL isAuditor; // ivar: _isAuditor
@property (nonatomic) BOOL isDisabled; // ivar: _isDisabled
@property (nonatomic) BOOL isLoginUser; // ivar: _isLoginUser
@property (nonatomic) BOOL isTransientUser; // ivar: _isTransientUser
@property (copy, nonatomic) NSArray *languages; // ivar: _languages
@property (copy, nonatomic) NSDate *lastCachedLoginEndDate; // ivar: _lastCachedLoginEndDate
@property (copy, nonatomic) NSDate *lastCachedLoginStartDate; // ivar: _lastCachedLoginStartDate
@property (copy, nonatomic) NSDate *lastLoginDate; // ivar: _lastLoginDate
@property (copy, nonatomic) NSDate *lastLogoutEndDate; // ivar: _lastLogoutEndDate
@property (copy, nonatomic) NSDate *lastLogoutStartDate; // ivar: _lastLogoutStartDate
@property (copy, nonatomic) NSDate *lastRemoteAuthDate; // ivar: _lastRemoteAuthDate
@property (readonly, nonatomic) CGFloat passcodeBackOffInterval;
@property (nonatomic) NSUInteger passcodeLockGracePeriod; // ivar: _passcodeLockGracePeriod
@property (nonatomic) NSUInteger passcodeType; // ivar: _passcodeType
@property (copy, nonatomic) NSURL *photoURL; // ivar: _photoURL
@property (nonatomic) BOOL shouldFetchAttributes; // ivar: _shouldFetchAttributes
@property (nonatomic) unsigned int uid; // ivar: _uid
@property (copy, nonatomic) NSString *userAuxiliaryString; // ivar: _userAuxiliaryString
@property (readonly, nonatomic) NSUInteger userType;
@property (copy, nonatomic) NSString *username; // ivar: _username


+(id)userWithUID:(unsigned int)arg0 ;
-(BOOL)commitChanges;
-(BOOL)commitChangesWithError:(*id)arg0 ;
-(BOOL)fetchAttributesWithOutError:(*id)arg0 ;
-(BOOL)inFirstLoginSession;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToUser:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)userPersonaFromIdentityString:(id)arg0 ;
-(struct dqblk )_diskQuota;
-(void)fetchAttributesIfNeeded;
-(void)setPropertiesFromUser:(id)arg0 ;


@end


#endif