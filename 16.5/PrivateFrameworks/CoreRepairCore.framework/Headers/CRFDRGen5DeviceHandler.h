// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRFDRGEN5DEVICEHANDLER_H
#define CRFDRGEN5DEVICEHANDLER_H



#import "CRFDRGen3DeviceHandler.h"

@interface CRFDRGen5DeviceHandler : CRFDRGen3DeviceHandler



+(BOOL)isGen5ProductType:(int)arg0 ;
+(id)getDeviceHandlerForProductType:(int)arg0 ;


@end


#endif