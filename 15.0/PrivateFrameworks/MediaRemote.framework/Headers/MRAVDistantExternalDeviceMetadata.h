// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRAVDISTANTEXTERNALDEVICEMETADATA_H
#define MRAVDISTANTEXTERNALDEVICEMETADATA_H

@class NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MRDeviceInfo.h"
#import "MRSupportedProtocolMessages.h"

@interface MRAVDistantExternalDeviceMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) MRDeviceInfo *deviceInfo; // ivar: _deviceInfo
@property (readonly, nonatomic) NSString *hostName; // ivar: _hostName
@property (readonly, nonatomic) NSInteger hostPort; // ivar: _hostPort
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) MRSupportedProtocolMessages *supportedMessages; // ivar: _supportedMessages
@property (readonly, nonatomic) BOOL usingSystemPairing; // ivar: _usingSystemPairing


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif