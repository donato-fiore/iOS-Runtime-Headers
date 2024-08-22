// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMFDEVICE_H
#define FMFDEVICE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMFDevice : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (copy, nonatomic) NSString *idsDeviceId; // ivar: _idsDeviceId
@property (nonatomic) BOOL isActiveDevice; // ivar: _isActiveDevice
@property (nonatomic) BOOL isAutoMeCapable; // ivar: _isAutoMeCapable
@property (nonatomic) BOOL isCompanionDevice; // ivar: _isCompanionDevice
@property (nonatomic) BOOL isThisDevice; // ivar: _isThisDevice


+(BOOL)supportsSecureCoding;
+(id)deviceWithId:(id)arg0 name:(id)arg1 idsDeviceId:(id)arg2 isActive:(BOOL)arg3 isThisDevice:(BOOL)arg4 isCompanionDevice:(BOOL)arg5 isAutoMeCapable:(BOOL)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateIsActive:(BOOL)arg0 isThisDevice:(BOOL)arg1 ;


@end


#endif