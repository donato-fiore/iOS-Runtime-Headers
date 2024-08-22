// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSLOCATIONCONFIRMATIONREQUEST_H
#define CPSLOCATIONCONFIRMATIONREQUEST_H

@class NSString, CLLocation, CLRegion;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CPSLocationConfirmationRequest : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (readonly, nonatomic) NSString *clipBundleID; // ivar: _clipBundleID
@property (readonly, nonatomic) CLLocation *deviceLocation; // ivar: _deviceLocation
@property (readonly, nonatomic) CLRegion *expectedRegion; // ivar: _expectedRegion
@property (readonly, nonatomic) NSInteger requestState; // ivar: _requestState


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestState:(NSInteger)arg0 clipBundleID:(id)arg1 applicationName:(id)arg2 deviceLocation:(id)arg3 expectedRegion:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif