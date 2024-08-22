// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCTCAPABILITYINFO_H
#define TUCTCAPABILITYINFO_H

@class NSString, NSData, NSURL;
@protocol NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying;

#import <Foundation/Foundation.h>


@interface TUCTCapabilityInfo : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>



@property (nonatomic) BOOL canEnable; // ivar: _canEnable
@property (nonatomic) BOOL canEnableRoaming; // ivar: _canEnableRoaming
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *provisioningPostData; // ivar: _provisioningPostData
@property (nonatomic) int provisioningStatus; // ivar: _provisioningStatus
@property (copy, nonatomic) NSURL *provisioningURL; // ivar: _provisioningURL
@property (readonly, nonatomic, getter=isProvisioningURLInvalid) BOOL provisioningURLInvalid;
@property (nonatomic, getter=isRoamingEnabled) BOOL roamingEnabled; // ivar: _roamingEnabled
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)publiclyAccessibleCopy;
-(id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateProvisioningURL;


@end


#endif