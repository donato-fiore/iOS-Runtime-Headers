// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBCLOUDDATABASECONFIGURATION_H
#define HMBCLOUDDATABASECONFIGURATION_H

@class HMFObject, HMFScheduler, CKContainerID, CKOperationConfiguration, NSString;
@protocol NSCopying, NSMutableCopying;



@interface HMBCloudDatabaseConfiguration : HMFObject <NSCopying, NSMutableCopying>



@property (retain, nonatomic) HMFScheduler *apsRegistrationScheduler; // ivar: _apsRegistrationScheduler
@property (readonly, copy) CKContainerID *containerID; // ivar: _containerID
@property (copy) CKOperationConfiguration *defaultOperationConfiguration; // ivar: _defaultOperationConfiguration
@property (getter=isManateeContainer) BOOL manateeContainer; // ivar: _manateeContainer
@property (nonatomic) BOOL registerForDBNotifications; // ivar: _registerForDBNotifications
@property (copy) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier


-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContainerID:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif