// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVEXTERNALDEVICEHID_H
#define AVEXTERNALDEVICEHID_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVExternalDeviceHIDInternal.h"

@interface AVExternalDeviceHID : NSObject {
    AVExternalDeviceHIDInternal *_externalDeviceHID;
}


@property (readonly, nonatomic) NSString *UUID;
@property (nonatomic) NSInteger inputMode;
@property (readonly, nonatomic) NSString *screenID;


-(id)_externalDevice;
-(id)_figEndpointHIDInputMode;
-(id)initWithExternalDeviceAndHIDDictionary:(id)arg0 hidDictionary:(id)arg1 ;
-(void)dealloc;


@end


#endif