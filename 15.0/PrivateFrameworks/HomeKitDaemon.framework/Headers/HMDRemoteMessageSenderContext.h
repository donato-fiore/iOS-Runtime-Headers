// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTEMESSAGESENDERCONTEXT_H
#define HMDREMOTEMESSAGESENDERCONTEXT_H

@class HMFObject, NSArray, NSString;
@protocol HMFObject, NSCopying;


#import "HMDAccountHandle.h"
#import "HMDAccountIdentifier.h"
#import "HMDDeviceHandle.h"
#import "HMDHomeKitVersion.h"

@interface HMDRemoteMessageSenderContext : HMFObject <HMFObject, NSCopying>



@property (readonly, copy) HMDAccountHandle *accountHandle; // ivar: _accountHandle
@property (readonly, copy) HMDAccountIdentifier *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMDDeviceHandle *deviceHandle; // ivar: _deviceHandle
@property (readonly, copy) HMDHomeKitVersion *deviceVersion; // ivar: _deviceVersion
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDeviceHandle:(id)arg0 accountHandle:(id)arg1 accountIdentifier:(id)arg2 deviceVersion:(id)arg3 ;


@end


#endif