// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCMPSDEVICEMANAGER_H
#define TCMPSDEVICEMANAGER_H

@protocol NSObject, MTLDevice;

#import <Foundation/Foundation.h>


@interface TCMPSDeviceManager : NSObject {
    id<NSObject> *_deviceObserver;
}


@property (retain) NSObject<MTLDevice> *preferredDevice; // ivar: _preferredDevice


+(id)sharedInstance;
-(BOOL)shouldPreferDevice:(id)arg0 overDevice:(id)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif