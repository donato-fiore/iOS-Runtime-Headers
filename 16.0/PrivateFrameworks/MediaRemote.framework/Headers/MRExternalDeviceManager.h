// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MREXTERNALDEVICEMANAGER_H
#define MREXTERNALDEVICEMANAGER_H

@class NSPointerArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MRExternalDeviceManager : NSObject {
    NSPointerArray *_devicesPointerArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly, nonatomic) NSArray *allDevices;


+(id)sharedManager;
-(id)deviceWithIdentifier:(id)arg0 ;
-(id)init;
-(void)clearDevices;
-(void)registerDevice:(id)arg0 ;


@end


#endif