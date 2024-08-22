// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STUIUSER_H
#define STUIUSER_H

@class NSString, NSArray, NSNumber, NSManagedObjectID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface STUIUser : NSObject <NSCopying>



@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, nonatomic) BOOL canRecoveryAuthenticate;
@property (copy, nonatomic) NSArray *devices; // ivar: _devices
@property (copy, nonatomic) NSNumber *dsid; // ivar: _dsid
@property (readonly, copy, nonatomic) NSString *givenName;
@property (nonatomic) BOOL hasAllowances; // ivar: _hasAllowances
@property BOOL hasDeviceWithoutUsageReported; // ivar: _hasDeviceWithoutUsageReported
@property (readonly, nonatomic) BOOL hasPasscode;
@property (readonly, nonatomic) BOOL isChild;
@property (readonly, nonatomic) BOOL isParent;
@property (nonatomic, getter=isManaged) BOOL managed; // ivar: _managed
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL needsRecoveryAppleID;
@property (copy, nonatomic) NSString *passcode; // ivar: _passcode
@property (copy, nonatomic) NSString *recoveryAltDSID; // ivar: _recoveryAltDSID
@property (nonatomic, getter=isRemoteUser) BOOL remoteUser; // ivar: _remoteUser
@property (nonatomic, getter=isScreenTimeEnabled) BOOL screenTimeEnabled; // ivar: _screenTimeEnabled
@property (nonatomic) NSUInteger source; // ivar: _source
@property (nonatomic) NSUInteger type; // ivar: _type
@property (copy, nonatomic) NSManagedObjectID *userObjectID; // ivar: _userObjectID
@property (nonatomic, getter=isWebUsageEnabled) BOOL webUsageEnabled; // ivar: _webUsageEnabled


+(NSUInteger)userTypeFromUser:(id)arg0 ;
+(id)keyPathsForValuesAffectingGivenName;
+(id)keyPathsForValuesAffectingHasPasscode;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithUser:(id)arg0 ;


@end


#endif