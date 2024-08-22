// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMTMOBILEGESTALTBACKEDDEVICEINFORMATIONPRIMITIVES_H
#define DMTMOBILEGESTALTBACKEDDEVICEINFORMATIONPRIMITIVES_H

@class NSString;
@protocol DMTDeviceInformationPrimitives;

#import <Foundation/Foundation.h>


@interface DMTMobileGestaltBackedDeviceInformationPrimitives : NSObject <DMTDeviceInformationPrimitives>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceUDID; // ivar: _deviceUDID
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *marketingModelName; // ivar: _marketingModelName
@property (readonly, copy, nonatomic) NSString *modelIdentifier; // ivar: _modelIdentifier
@property (readonly, copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly) Class superclass;




@end


#endif