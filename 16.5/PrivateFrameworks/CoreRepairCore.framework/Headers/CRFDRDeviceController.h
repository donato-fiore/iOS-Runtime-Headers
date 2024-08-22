// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRFDRDEVICECONTROLLER_H
#define CRFDRDEVICECONTROLLER_H


#import <Foundation/Foundation.h>

#import "CRFDRBaseDeviceHandler.h"

@interface CRFDRDeviceController : NSObject {
    CRFDRBaseDeviceHandler *handler;
}




+(id)sharedSingleton;
-(id)_init;
-(id)getHandlerForDevice;
-(id)init;


@end


#endif