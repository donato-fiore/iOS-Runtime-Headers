// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMANNOUNCEUSERSETTINGS_H
#define HMANNOUNCEUSERSETTINGS_H

@class HMFObject;
@protocol NSSecureCoding;



@interface HMAnnounceUserSettings : HMFObject <NSSecureCoding>



@property (readonly) NSUInteger deviceNotificationMode; // ivar: _deviceNotificationMode


+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceNotificationMode:(NSUInteger)arg0 ;
-(id)privateDescription;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif