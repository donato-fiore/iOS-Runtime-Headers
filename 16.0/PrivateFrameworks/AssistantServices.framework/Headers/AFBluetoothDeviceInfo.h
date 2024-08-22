// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFBLUETOOTHDEVICEINFO_H
#define AFBLUETOOTHDEVICEINFO_H

@class NSString, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFBluetoothDeviceInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *address; // ivar: _address
@property (readonly, copy, nonatomic) NSUUID *deviceUID; // ivar: _deviceUID
@property (readonly, nonatomic) BOOL isAdvancedAppleAudioDevice; // ivar: _isAdvancedAppleAudioDevice
@property (readonly, nonatomic) unsigned int productID; // ivar: _productID
@property (readonly, nonatomic) BOOL supportsAnnounceCall; // ivar: _supportsAnnounceCall
@property (readonly, nonatomic) BOOL supportsInEarDetection; // ivar: _supportsInEarDetection
@property (readonly, nonatomic) BOOL supportsListeningModeANC; // ivar: _supportsListeningModeANC
@property (readonly, nonatomic) BOOL supportsListeningModeTransparency; // ivar: _supportsListeningModeTransparency
@property (readonly, nonatomic) BOOL supportsSpokenNotification; // ivar: _supportsSpokenNotification
@property (readonly, nonatomic) BOOL supportsVoiceTrigger; // ivar: _supportsVoiceTrigger
@property (readonly, nonatomic) unsigned int vendorID; // ivar: _vendorID


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAddress:(id)arg0 deviceUID:(id)arg1 vendorID:(unsigned int)arg2 productID:(unsigned int)arg3 isAdvancedAppleAudioDevice:(BOOL)arg4 supportsInEarDetection:(BOOL)arg5 supportsVoiceTrigger:(BOOL)arg6 supportsSpokenNotification:(BOOL)arg7 supportsListeningModeANC:(BOOL)arg8 supportsListeningModeTransparency:(BOOL)arg9 supportsAnnounceCall:(BOOL)arg10 ;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif