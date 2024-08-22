// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPOWNEDDEVICEKEYRECORD_H
#define SPOWNEDDEVICEKEYRECORD_H

@class NSData, NSDate, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPOwnedDeviceKeyRecord : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *advertisement; // ivar: _advertisement
@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSUUID *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, copy, nonatomic) NSData *hashedAdvertisement; // ivar: _hashedAdvertisement
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 deviceIdentifier:(id)arg1 advertisement:(id)arg2 hashedAdvertisement:(id)arg3 creationDate:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif