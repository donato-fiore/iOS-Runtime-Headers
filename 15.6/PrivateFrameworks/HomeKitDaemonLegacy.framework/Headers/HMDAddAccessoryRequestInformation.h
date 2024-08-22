// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDADDACCESSORYREQUESTINFORMATION_H
#define HMDADDACCESSORYREQUESTINFORMATION_H

@class HMAccessoryCategory, HMSetupAccessoryDescription, NSString, HMFTimer, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMDAccessory.h"

@interface HMDAddAccessoryRequestInformation : NSObject <NSSecureCoding>



@property (readonly, weak, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) HMAccessoryCategory *accessoryCategory; // ivar: _accessoryCategory
@property (readonly, copy, nonatomic) HMSetupAccessoryDescription *accessoryDescription; // ivar: _accessoryDescription
@property (readonly, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) HMFTimer *cleanupTimer; // ivar: _cleanupTimer
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)initWithAccessoryName:(id)arg0 category:(id)arg1 bundleID:(id)arg2 accessoryDescription:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)cancelCleanupTimer;
-(void)encodeWithCoder:(id)arg0 ;
-(void)startCleanupTimerForDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(void)storeIdentifierFromUnassociatedAccessory:(id)arg0 setupCode:(id)arg1 ;


@end


#endif