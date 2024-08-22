// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAKEYSHARINGCONFIGURATION_H
#define DAKEYSHARINGCONFIGURATION_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DAKeySharingConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *deviceEnteredPasscode; // ivar: _deviceEnteredPasscode
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL enableVehicleEnteredPasscode; // ivar: _enableVehicleEnteredPasscode
@property (readonly, nonatomic) NSUInteger maxRetriesForDeviceEnteredPasscode; // ivar: _maxRetriesForDeviceEnteredPasscode
@property (readonly, nonatomic) NSData *metaData; // ivar: _metaData
@property (nonatomic) BOOL mockRefreshInstanceCA; // ivar: _mockRefreshInstanceCA
@property (readonly, nonatomic) NSUInteger profile; // ivar: _profile
@property (readonly, nonatomic) NSString *proprietaryEntitlements; // ivar: _proprietaryEntitlements
@property (readonly, nonatomic) NSInteger targetDeviceType; // ivar: _targetDeviceType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProfile:(NSUInteger)arg0 displayName:(id)arg1 metaData:(id)arg2 targetDeviceType:(NSInteger)arg3 ;
-(id)initWithProfile:(NSUInteger)arg0 displayName:(id)arg1 metaData:(id)arg2 targetDeviceType:(NSInteger)arg3 enableVehiclePasscode:(BOOL)arg4 maxRetriesForDevicePasscode:(NSUInteger)arg5 deviceEnteredPasscode:(id)arg6 proprietaryEntitlements:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif