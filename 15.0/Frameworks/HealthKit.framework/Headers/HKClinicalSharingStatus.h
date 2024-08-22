// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCLINICALSHARINGSTATUS_H
#define HKCLINICALSHARINGSTATUS_H

@class NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKClinicalSharingStatus : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger featureStatus; // ivar: _featureStatus
@property (readonly, copy, nonatomic) NSDate *firstSharedDate; // ivar: _firstSharedDate
@property (readonly, copy, nonatomic) NSDate *lastSharedDate; // ivar: _lastSharedDate
@property (readonly, nonatomic) NSInteger multiDeviceStatus; // ivar: _multiDeviceStatus
@property (readonly, copy, nonatomic) NSString *primaryDeviceName; // ivar: _primaryDeviceName
@property (readonly, nonatomic) NSInteger userStatus; // ivar: _userStatus


+(BOOL)supportsSecureCoding;
+(NSInteger)clinicalSharingFeatureStatusWithAccountState:(NSInteger)arg0 gatewayFeatureStatus:(NSInteger)arg1 ;
+(id)unknownStatus;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFirstSharedDate:(id)arg0 lastSharedDate:(id)arg1 featureStatus:(NSInteger)arg2 userStatus:(NSInteger)arg3 multiDeviceStatus:(NSInteger)arg4 primaryDeviceName:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif