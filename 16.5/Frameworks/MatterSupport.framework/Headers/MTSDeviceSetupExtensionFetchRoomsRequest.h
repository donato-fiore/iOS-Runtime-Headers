// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPEXTENSIONFETCHROOMSREQUEST_H
#define MTSDEVICESETUPEXTENSIONFETCHROOMSREQUEST_H



#import "MTSDeviceSetupExtensionMessage.h"
#import "MTSDeviceSetupHome.h"

@interface MTSDeviceSetupExtensionFetchRoomsRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) MTSDeviceSetupHome *home; // ivar: _home


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif