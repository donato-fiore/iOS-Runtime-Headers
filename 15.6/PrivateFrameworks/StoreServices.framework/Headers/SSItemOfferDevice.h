// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSITEMOFFERDEVICE_H
#define SSITEMOFFERDEVICE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SSItemOfferDeviceError.h"

@interface SSItemOfferDevice : NSObject

@property (readonly, nonatomic) NSInteger deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) SSItemOfferDeviceError *incompatibleDeviceError; // ivar: _incompatibleDeviceError
@property (readonly, nonatomic) SSItemOfferDeviceError *incompatibleSystemError; // ivar: _incompatibleSystemError
@property (readonly, nonatomic) NSString *minimumProductVersion; // ivar: _minimumProductVersion


-(id)init;
-(id)initWithDeviceIdentifier:(NSInteger)arg0 ;
-(id)initWithOfferDeviceDicitionary:(id)arg0 ;
-(void)dealloc;


@end


#endif