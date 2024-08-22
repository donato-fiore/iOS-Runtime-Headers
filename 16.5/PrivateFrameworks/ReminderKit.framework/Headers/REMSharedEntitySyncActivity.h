// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMSHAREDENTITYSYNCACTIVITY_H
#define REMSHAREDENTITYSYNCACTIVITY_H

@class NSString, NSDate, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMSharedEntitySyncActivity : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) NSDate *activityDate; // ivar: _activityDate
@property (readonly, nonatomic) NSInteger activityType; // ivar: _activityType
@property (readonly, nonatomic) NSString *authorUserRecordIDString; // ivar: _authorUserRecordIDString
@property (readonly, nonatomic) NSString *ckIdentifier; // ivar: _ckIdentifier
@property (readonly, nonatomic) NSString *ckParentCloudObjectEntityName; // ivar: _ckParentCloudObjectEntityName
@property (readonly, nonatomic) NSString *ckParentCloudObjectIdentifier; // ivar: _ckParentCloudObjectIdentifier
@property (readonly, nonatomic) NSString *sharedEntityName; // ivar: _sharedEntityName
@property (readonly, nonatomic) NSUUID *uuidForChangeTracking; // ivar: _uuidForChangeTracking


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAccountIdentifier:(id)arg0 activityDate:(id)arg1 activityType:(NSInteger)arg2 authorUserRecordIDString:(id)arg3 ckParentCloudObjectEntityName:(id)arg4 ckParentCloudObjectIdentifier:(id)arg5 ckIdentifier:(id)arg6 sharedEntityName:(id)arg7 uuidForChangeTracking:(id)arg8 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif