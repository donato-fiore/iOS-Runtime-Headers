// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBCLOUDDATABASECONFIGURATION_H
#define HMBCLOUDDATABASECONFIGURATION_H

@class HMFObject, CKContainerID, CKOperationConfiguration, NSString;
@protocol NSCopying, NSMutableCopying;



@interface HMBCloudDatabaseConfiguration : HMFObject <NSCopying, NSMutableCopying>



@property (readonly, copy) CKContainerID *containerID; // ivar: _containerID
@property (copy) CKOperationConfiguration *defaultOperationConfiguration; // ivar: _defaultOperationConfiguration
@property (getter=isManateeContainer) BOOL manateeContainer; // ivar: _manateeContainer
@property (nonatomic) BOOL registerForDBNotifications; // ivar: _registerForDBNotifications
@property (copy) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property NSInteger subscriptionPushRegistrationAction; // ivar: _subscriptionPushRegistrationAction


-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContainerID:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif