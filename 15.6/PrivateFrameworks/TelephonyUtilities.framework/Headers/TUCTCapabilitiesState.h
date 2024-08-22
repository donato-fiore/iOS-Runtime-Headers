// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCTCAPABILITIESSTATE_H
#define TUCTCAPABILITIESSTATE_H

@class NSString, NSData, NSURL;
@protocol NSCopying, TUPubliclyAccessibleCopying, TUSecureCoding;

#import <Foundation/Foundation.h>

#import "TUCTCapabilityInfo.h"

@interface TUCTCapabilitiesState : NSObject <NSCopying, TUPubliclyAccessibleCopying, TUSecureCoding>



@property (readonly, copy, nonatomic) TUCTCapabilityInfo *ctCapabilityInfo;
@property (nonatomic, getter=isCurrentlyAvailable) BOOL currentlyAvailable; // ivar: _currentlyAvailable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEmergencyCurrentlyAvailable) BOOL emergencyCurrentlyAvailable; // ivar: _emergencyCurrentlyAvailable
@property (nonatomic, getter=isEmergencySupported) BOOL emergencySupported; // ivar: _emergencySupported
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *provisioningPostData; // ivar: _provisioningPostData
@property (nonatomic) int provisioningStatus; // ivar: _provisioningStatus
@property (copy, nonatomic) NSURL *provisioningURL; // ivar: _provisioningURL
@property (nonatomic, getter=isProvisioningURLInvalid) BOOL provisioningURLInvalid; // ivar: _provisioningURLInvalid
@property (nonatomic, getter=isRoamingEnabled) BOOL roamingEnabled; // ivar: _roamingEnabled
@property (nonatomic, getter=isRoamingSupported) BOOL roamingSupported; // ivar: _roamingSupported
@property (readonly) Class superclass;
@property (nonatomic, getter=isSupported) BOOL supported; // ivar: _supported


+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCapabilitiesState:(id)arg0 ;
-(id)archivedDataWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCapabilityInfo:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)publiclyAccessibleCopy;
-(id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateProvisioningURL;


@end


#endif