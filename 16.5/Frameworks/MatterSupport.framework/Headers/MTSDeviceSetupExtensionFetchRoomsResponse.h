// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPEXTENSIONFETCHROOMSRESPONSE_H
#define MTSDEVICESETUPEXTENSIONFETCHROOMSRESPONSE_H

@class NSArray;


#import "MTSDeviceSetupExtensionMessage.h"

@interface MTSDeviceSetupExtensionFetchRoomsResponse : MTSDeviceSetupExtensionMessage

@property (readonly, copy) NSArray *rooms; // ivar: _rooms


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRooms:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif